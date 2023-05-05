# Function definition in Ruby
def foo(key, value)
    puts"#{key}: #{value}"
  end
  
  # Initialize
  assocArr = {"color" => "red", "brand" => "mercedes"}
  
  puts "Initial array"
  assocArr.each do |key, value|
    foo(key, value)
  end
  puts
  
  # Get the value for a given key
  puts "Get the value for a given key"
  puts "Color is " + assocArr["color"]
  puts
  
  # Add a new element
  puts("Add a new element")
  assocArr["number of tires"] = 4
  assocArr.each do |key, value|
    foo(key, value)
  end
  puts
  
  # Remove an element
  puts "Remove an element"
  assocArr.delete("color")
  assocArr.each do |key, value|
    foo(key, value)
  end
  puts
  
  # Modify the value of an existing element
  puts "Modify the value of an existing element"
  assocArr["brand"] = "bmw"
  puts
  
  # Search for the existence of a key
  puts "Search for the existence of a key"
  if(assocArr.key?("weight"))
    puts "This associative array contains this key"
  else
    puts "This associative array doesn't contain this key"
  end
  puts
  
  # Search for the existence of a value
  puts "Search for the existence of a value"
  if(assocArr.value?("bmw"))
    puts "This associative array contains this value"
  else
    puts "This associative array doesn't contain this value"
  end