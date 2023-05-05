digit [0-9]
letter [a-zA-Z$_]
sign [+-]
alphanumeric ({letter}|{digit})
int_const_unsigned {digit}+
int_const {sign}?{int_const_unsigned}
float_const {sign}?{int_const_unsigned}?(\.)?{int_const_unsigned}
bool_const (true|false)
char .
char_const (\'){char}(\')   
string {char}*
string_const (\"){string}(\")
identifier {letter}{alphanumeric}*
addition    (\+)
subtraction (\-)
multiplication (\*)
division (\/)
for for
while while
do do
break break
continue continue
return return
function function
if if
else else
lP \(
rP \)
%%
\/\*{string}\*\/ {return(COMMENT);}
{int_const} {return (INT_LITERAL);}
{float_const} {return(FLOAT_LITERAL);}
{bool_const} {return(BOOL_LITERAL);}
{char_const} { return(CHAR_LITERAL);}
{string_const} { return(STRING_LITERAL);}

{addition} return(ADDITION_OP);
{subtraction} return(SUBTRACTION_OP);
{multiplication} return(MULTIPLICATION_OP);
{division} return(DIVISION_OP);
\< return(LESS_THAN_OP);
\> return(GREATER_THAN_OP);
\<\= return(LESS_THAN_OR_EQUAL_OP);
\>\= return(GREATER_THAN_OR_EQUAL_OP);
\=\= return(EQUALITY_OP);
\= return(ASSIGNMENT_OP);
\; return(SEMI_COLON);
\, return(COMMA);
\! return(NOT_OP);
\!\= return(NOT_EQUAL_OP);
\&\& return(LOGICAL_AND_OP);
\|\| return(LOGICAL_OR_OP);
\+\+ return(INCREMENT_OP);
\-\- return(DECREMENT_OP);
\n   {extern int lineno; lineno++;}


{do} return(DO);
{for} return(FOR);
{while} return(WHILE);
{break} return(BREAK);
{continue} return(CONTINUE);
{return} return(RETURN);
readData return(READ_DATA_FUNC_CALL);
getTimestamp return(GET_TIMESTAMP_FUNC_CALL);
display return(DISPLAY_FUNC_CALL);
connectUrl return(CONNECT_URL_FUNC_CALL);
sendIntToConnection return(SEND_INT_TO_CONNECTION_FUNC_CALL);
receiveIntFromConnection return(RECEIVE_INT_FROM_CONNECTION_FUNC_CALL);
setSwitch return(SET_SWITCH_FUNC_CALL);
{function} return(FUNCTION_DEF);

{if} return(IF);
{else} return(ELSE);

{lP} return(LEFT_PARANTHESIS);
{rP} return(RIGHT_PARANTHESIS);
\{ return(LEFT_CURLY_BRACKET);
\} return(RIGHT_CURLY_BRACKET);

int return(TYPE_ID);
float return(TYPE_ID);
string return(TYPE_ID);
char return(TYPE_ID);
bool return(TYPE_ID);
void return (VOID_TYPE);
{identifier} return(IDENTIFIER);
[ \t] ;

%%

int yywrap() {return 1; }

