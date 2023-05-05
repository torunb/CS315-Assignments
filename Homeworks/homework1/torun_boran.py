# Function definition in pyhton
def foo(assocArr, key):
    print("(" , key, ":", assocArr[key], ")")

# Initialization of the array
assocArr = {
    "player": "boran",
    "jersey number": 7
}

print("Initial array")

for key in assocArr:
    foo(assocArr, key)

print()

# Get the value for a given key
print("Get the value for a given key")
print("Jersey number is", assocArr["jersey number"])

print()

# Add a new element
print("Add a new element")
assocArr.update({"shoe brand": "adidas"})

for key in assocArr:
    foo(assocArr, key)

print()

# Remove an element
print("Remove an new element")
del assocArr["jersey number"]

for key in assocArr:
    foo(assocArr, key)

print()

# Modify the value of an existing element
print("Modify the value of an existing element")
assocArr["player"] = "utku"

for key in assocArr:
    foo(assocArr, key)
print()

# Search for the existence of a key
if "shoe brand" in assocArr:
    print("This associative array contains this key")
else:
    print("This associative array doesn't contain this key")

print()

# Search for the existence of a value
if "nike" in assocArr:
    print("This associative array contains this value")
else:
    print("This associative array doesn't contain this value")    

