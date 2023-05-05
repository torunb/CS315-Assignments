// function definition in dart
// this foo function prints key value pairs
void foo(var key, var value)
{
  print(key + ": " + value);
}

void main() {
  // Initialize the array
  var assocArr = {"player": "boran", "jersey number": "7"};
  
  print("Initial array");
  
  assocArr.forEach((key, value)
  {
    foo(key, value);
  });
  
  print("");
  
  // Get the value for given key
  print("Get the value for given key");
  print(assocArr["player"]);
  
  print("");
  
  print("After adding two elements");
  // Add an element in 2 ways
  assocArr["team"] = "barcelona";
  assocArr.addEntries([const MapEntry("position", "midfielder")]);
  
  assocArr.forEach((key, value)
  {
    foo(key, value);
  });
  
  print("");
  
  // Remove an element
  assocArr.remove("player");
  
  print("After removing an element");
  assocArr.forEach((key, value)
  {
    foo(key, value);
  });
  
  print("");
  
  // Search for the existence of a key
  if(assocArr.containsKey("position"))
  {
    print("This associative array contains this key");
  }
  else
  {
    print("This associative array doesn't contain this key");
  }
  
  print("");
  
  // Search for the existence of a value
  if(assocArr.containsValue("boran"))
  {
    print("This associative array contains this value");
  }
  else
  {
    print("This associative array doesn't contain this value");
  }
}
