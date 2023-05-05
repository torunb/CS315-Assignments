// Nested subprogram in Dart
void foo()
{
  int x = 2;
  void bar()
  {
    int y = 5;
    print("y = $y, x = $x");
  }
  bar();
}

// Scope of the local variables
void foofoo()
{
  String a = "this is a"; 
  void barbar()
  {
    String b = "this is b";
    print("$a and $b");
  }
  barbar();
  //print(b); // this is error because b is not in the scope of the foofoo
}

// function that is passed as parameter in the function boran
void multiplyBy2(int a)
{
  a = a * 2;
  print( "In multiply by 2, a is $a");
}

// parameter passing methods

// pass by value
void addTen(int a)
{
  a = a + 10;
}

// passing functions
void boran(void Function(int) f, int a)
{
  f(a);
}

// keyword and default parameter part
void testDefaultParameter([int a = 100])
{
  print("In default parameter a = $a");
}

// named parameter
void testNamedParameter({required String s, int a = 43 })
{
  print("$s and a is $a");
}

// closure
Function multiply(int multiplyBy)
{
  return (int i) => multiplyBy * i;
}

void main() { 
  // call the nested subprogram
  print("Call the nested subprogram");
  foo();
  
  print("");
  
  // error calling the inner subprogram
  // bar(); // try with commenting out => error
  
  // testing the scope of local variable
  print("Testing the scope of local variable");
  foofoo();
  int a = 4;
  {
    a = 2;
    {
      int b = 3;
    }
    //print(b); // error, b is not in the scope
  }
  print("a is $a");
  //print(b); // error, b is not in the scope
  
  print("");
  
  // testing parameter passing methods
  print("Testing parameter passing methods");
  
  int number = 4;
  addTen(number);
  print("Number is $number"); // we expect 14, but it prints 4 because it pass by value 
  
  boran(multiplyBy2, 34);
  
  print("");
  
  // keyword and default parameter
  print("Testing default parameter");
  testDefaultParameter();
  testDefaultParameter(15);
  
  print("");
  
  print("Testing named parameter");
  testNamedParameter(s : "This is s");
  testNamedParameter(s : "This is s", a : 5);
  
  print("");
  
  // closures
  var x = multiply(5);
  print("Testing closures in Dart, by multiplying x by 4, x = " + x(4).toString());
}