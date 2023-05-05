-- Function definition of foo in Lua
function foo(k, assocArr)
  print(k , ":", assocArr[k])
end

-- Initial array
print("Initial array")
local assocArr = {["Brand"] = "Monster", ["Weight"] = 30 }
for k in pairs(assocArr) do
  foo(k, assocArr)
end
print()

-- Get the value for given key
print("Get the value for given key")
print("Weight of the computer is", assocArr["Weight"])
print()

-- Add a new element
print("Add a new element")
assocArr["Used"] = true
for k in pairs(assocArr) do
  foo(k, assocArr)
end
print()

-- Remove an element
print("Remove an element")
assocArr["Weight"] = nil
for k in pairs(assocArr) do
  foo(k, assocArr)
end
print()

-- Modify the value of an existing element
print("Modify the value of an existing element")
assocArr["Brand"] = "ASUS"
for k in pairs(assocArr) do
  foo(k, assocArr)
end
print()

-- Search for the existence of a key
print("Search for the existence of a key")
if type(assocArr["Used"]) ~= nil then
  print("This associative array contains this key")
else
  print("This associative array doesn't contain this key")
end
print()

-- Search for the existence of a value
print("Search for the existence of a value")
exist = false
for k, v in pairs(assocArr) do
  if(assocArr[k] == "Casper") then
    print("This associative array contains this value")
    exist = true
  end
end
if(exist == false) then
    print("This associative array doesn't contain this value")
  end
print()