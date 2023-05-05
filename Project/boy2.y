%{
    #include <stdio.h>
    int yylex();
    int yyerror(char *s);
    int numberoferrors = 0;
%}
%token COMMENT INT_LITERAL FLOAT_LITERAL BOOL_LITERAL CHAR_LITERAL STRING_LITERAL
       ADDITION_OP SUBTRACTION_OP MULTIPLICATION_OP DIVISION_OP LESS_THAN_OP GREATER_THAN_OP
       LESS_THAN_OR_EQUAL_OP GREATER_THAN_OR_EQUAL_OP EQUALITY_OP ASSIGNMENT_OP
       SEMI_COLON COMMA DOT NOT_OP NOT_EQUAL_OP LOGICAL_AND_OP LOGICAL_OR_OP INCREMENT_OP
       DECREMENT_OP DO FOR WHILE BREAK CONTINUE RETURN READ_DATA_FUNC_CALL GET_TIMESTAMP_FUNC_CALL
       DISPLAY_FUNC_CALL CONNECT_URL_FUNC_CALL SEND_INT_TO_CONNECTION_FUNC_CALL RECEIVE_INT_FROM_CONNECTION_FUNC_CALL
       SET_SWITCH_FUNC_CALL FUNCTION_DEF IF ELSE LEFT_PARANTHESIS RIGHT_PARANTHESIS LEFT_CURLY_BRACKET
       RIGHT_CURLY_BRACKET TYPE_ID IDENTIFIER VOID_TYPE

%%
start: program {
       if (numberoferrors == 0) {
              printf("Input program is valid\n");
       }
       return 0;
}

program: stmt_list
stmt_list: block_stmt | stmt_list func_def 
block_stmt: stmt | block_stmt stmt
stmt:  matched | unmatched | error { numberoferrors++; }

matched_list: matched | matched_list matched
unmatched_list: unmatched | unmatched_list stmt

func_def: FUNCTION_DEF type_def IDENTIFIER LEFT_PARANTHESIS argument_list RIGHT_PARANTHESIS LEFT_CURLY_BRACKET block_stmt RIGHT_CURLY_BRACKET
matched:  matched_stmt matched_list RIGHT_CURLY_BRACKET | unconditional_stmt
unmatched: matched_first
       | IF LEFT_PARANTHESIS condition_list RIGHT_PARANTHESIS LEFT_CURLY_BRACKET unmatched_list RIGHT_CURLY_BRACKET 
       | matched_stmt unmatched_list RIGHT_CURLY_BRACKET
matched_first: IF LEFT_PARANTHESIS condition_list RIGHT_PARANTHESIS LEFT_CURLY_BRACKET matched_list RIGHT_CURLY_BRACKET
matched_stmt:  matched_first ELSE LEFT_CURLY_BRACKET
argument_list:         TYPE_ID IDENTIFIER
                     | TYPE_ID IDENTIFIER COMMA argument_list
                     |

unconditional_stmt: assign_stmt | declaration_stmt | func_call | loop |reserved_stmt |  increment_stmt
                | decrement_stmt | COMMENT
increment_stmt: IDENTIFIER INCREMENT_OP SEMI_COLON
decrement_stmt: IDENTIFIER DECREMENT_OP SEMI_COLON
assign_stmt: IDENTIFIER ASSIGNMENT_OP block_expression SEMI_COLON | IDENTIFIER ASSIGNMENT_OP func_call
declaration_stmt: TYPE_ID identifier_list SEMI_COLON 
              | TYPE_ID identifier_list ASSIGNMENT_OP block_expression SEMI_COLON
              | TYPE_ID identifier_list ASSIGNMENT_OP func_call

identifier_list : IDENTIFIER | IDENTIFIER COMMA identifier_list
expression: non_numeric_const | arith_op | func_call  
block_expression:  non_numeric_const | arith_op
type_def: TYPE_ID | VOID_TYPE


func_call: IDENTIFIER LEFT_PARANTHESIS arguments RIGHT_PARANTHESIS SEMI_COLON
        | primitive_function_call 

arguments: IDENTIFIER
         | const
         | IDENTIFIER COMMA arguments
         |
         | const COMMA arguments
reserved_stmt: RETURN SEMI_COLON
              | RETURN block_expression SEMI_COLON
              | RETURN func_call
              | BREAK SEMI_COLON
              | CONTINUE SEMI_COLON

const: numeric_const | non_numeric_const
numeric_const: INT_LITERAL | FLOAT_LITERAL
non_numeric_const: BOOL_LITERAL | STRING_LITERAL | CHAR_LITERAL
arith_op : arith_op ADDITION_OP term | arith_op SUBTRACTION_OP term | term

term: term MULTIPLICATION_OP factor | term DIVISION_OP factor | factor
factor: numeric_const | IDENTIFIER | LEFT_PARANTHESIS arith_op RIGHT_PARANTHESIS
primitive_function_call:     DISPLAY_FUNC_CALL LEFT_PARANTHESIS block_expression RIGHT_PARANTHESIS SEMI_COLON 
                            | DISPLAY_FUNC_CALL LEFT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON
                            | READ_DATA_FUNC_CALL LEFT_PARANTHESIS block_expression RIGHT_PARANTHESIS SEMI_COLON
                            | GET_TIMESTAMP_FUNC_CALL LEFT_PARANTHESIS INT_LITERAL RIGHT_PARANTHESIS SEMI_COLON
                            | CONNECT_URL_FUNC_CALL LEFT_PARANTHESIS STRING_LITERAL RIGHT_PARANTHESIS SEMI_COLON
                            | SEND_INT_TO_CONNECTION_FUNC_CALL LEFT_PARANTHESIS STRING_LITERAL COMMA IDENTIFIER RIGHT_PARANTHESIS SEMI_COLON
                            | SEND_INT_TO_CONNECTION_FUNC_CALL LEFT_PARANTHESIS STRING_LITERAL COMMA INT_LITERAL RIGHT_PARANTHESIS SEMI_COLON
                            | SEND_INT_TO_CONNECTION_FUNC_CALL LEFT_PARANTHESIS IDENTIFIER COMMA IDENTIFIER RIGHT_PARANTHESIS SEMI_COLON
                            | SEND_INT_TO_CONNECTION_FUNC_CALL LEFT_PARANTHESIS IDENTIFIER COMMA INT_LITERAL RIGHT_PARANTHESIS SEMI_COLON
                            | RECEIVE_INT_FROM_CONNECTION_FUNC_CALL LEFT_PARANTHESIS STRING_LITERAL RIGHT_PARANTHESIS SEMI_COLON
                            | RECEIVE_INT_FROM_CONNECTION_FUNC_CALL LEFT_PARANTHESIS IDENTIFIER RIGHT_PARANTHESIS SEMI_COLON
                            | SET_SWITCH_FUNC_CALL LEFT_PARANTHESIS BOOL_LITERAL COMMA INT_LITERAL RIGHT_PARANTHESIS SEMI_COLON
                            | SET_SWITCH_FUNC_CALL LEFT_PARANTHESIS IDENTIFIER COMMA INT_LITERAL RIGHT_PARANTHESIS SEMI_COLON
                            | SET_SWITCH_FUNC_CALL LEFT_PARANTHESIS BOOL_LITERAL COMMA IDENTIFIER RIGHT_PARANTHESIS SEMI_COLON
                            | SET_SWITCH_FUNC_CALL LEFT_PARANTHESIS IDENTIFIER COMMA IDENTIFIER RIGHT_PARANTHESIS SEMI_COLON

loop: do_while | while_loop | for_loop
do_while: DO LEFT_CURLY_BRACKET block_stmt RIGHT_CURLY_BRACKET WHILE LEFT_PARANTHESIS condition_list RIGHT_PARANTHESIS SEMI_COLON
       |  DO LEFT_CURLY_BRACKET block_stmt RIGHT_CURLY_BRACKET WHILE LEFT_PARANTHESIS NOT_OP LEFT_PARANTHESIS condition_list RIGHT_PARANTHESIS RIGHT_PARANTHESIS SEMI_COLON

while_loop: WHILE LEFT_PARANTHESIS condition_list RIGHT_PARANTHESIS LEFT_CURLY_BRACKET block_stmt RIGHT_CURLY_BRACKET
       |    WHILE LEFT_PARANTHESIS NOT_OP LEFT_PARANTHESIS condition_list RIGHT_PARANTHESIS RIGHT_PARANTHESIS LEFT_CURLY_BRACKET block_stmt RIGHT_CURLY_BRACKET

for_loop: FOR LEFT_PARANTHESIS assign_stmt condition_list SEMI_COLON for_update RIGHT_PARANTHESIS LEFT_CURLY_BRACKET block_stmt RIGHT_CURLY_BRACKET
       |  FOR LEFT_PARANTHESIS assign_stmt NOT_OP LEFT_PARANTHESIS condition_list RIGHT_PARANTHESIS SEMI_COLON for_update RIGHT_PARANTHESIS LEFT_CURLY_BRACKET block_stmt RIGHT_CURLY_BRACKET

for_update: IDENTIFIER ASSIGNMENT_OP expression | IDENTIFIER LEFT_PARANTHESIS arguments RIGHT_PARANTHESIS
       | IDENTIFIER DOT IDENTIFIER | IDENTIFIER INCREMENT_OP | IDENTIFIER DECREMENT_OP

condition_list: and_term
                | condition_list LOGICAL_OR_OP and_term 
                | NOT_OP LEFT_PARANTHESIS condition_list RIGHT_PARANTHESIS LOGICAL_OR_OP and_term 
                | NOT_OP LEFT_PARANTHESIS condition_list RIGHT_PARANTHESIS LOGICAL_OR_OP LEFT_PARANTHESIS NOT_OP LEFT_PARANTHESIS and_term RIGHT_PARANTHESIS RIGHT_PARANTHESIS
                | condition_list LOGICAL_OR_OP LEFT_PARANTHESIS NOT_OP LEFT_PARANTHESIS and_term RIGHT_PARANTHESIS RIGHT_PARANTHESIS



and_term: condition | LEFT_PARANTHESIS condition RIGHT_PARANTHESIS 
       | and_term LOGICAL_AND_OP condition | IDENTIFIER

condition: BOOL_LITERAL 
         | IDENTIFIER LESS_THAN_OP IDENTIFIER
         | IDENTIFIER GREATER_THAN_OP IDENTIFIER
         | IDENTIFIER LESS_THAN_OR_EQUAL_OP IDENTIFIER
         | IDENTIFIER GREATER_THAN_OR_EQUAL_OP IDENTIFIER
         | IDENTIFIER EQUALITY_OP IDENTIFIER
         | IDENTIFIER NOT_EQUAL_OP IDENTIFIER
         | numeric_const LESS_THAN_OP IDENTIFIER
         | numeric_const GREATER_THAN_OP IDENTIFIER
         | numeric_const LESS_THAN_OR_EQUAL_OP IDENTIFIER
         | numeric_const GREATER_THAN_OR_EQUAL_OP IDENTIFIER
         | numeric_const EQUALITY_OP IDENTIFIER
         | numeric_const NOT_EQUAL_OP IDENTIFIER
         | numeric_const LESS_THAN_OP const
         | numeric_const GREATER_THAN_OP const
         | numeric_const LESS_THAN_OR_EQUAL_OP const
         | numeric_const GREATER_THAN_OR_EQUAL_OP const
         | numeric_const EQUALITY_OP const
         | numeric_const NOT_EQUAL_OP const
         | IDENTIFIER LESS_THAN_OP const
         | IDENTIFIER GREATER_THAN_OP const
         | IDENTIFIER LESS_THAN_OR_EQUAL_OP const
         | IDENTIFIER GREATER_THAN_OR_EQUAL_OP const
         | IDENTIFIER EQUALITY_OP const
         | IDENTIFIER NOT_EQUAL_OP const
%%
#include "lex.yy.c"
int lineno = 0;
int yyerror(char* s) { printf("Syntax error on line %d\n", lineno);}
int main() {
    return yyparse();
}