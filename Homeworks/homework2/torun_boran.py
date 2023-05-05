for i in range (10):
    print("i = " , i)

print("/////////////////")


# break
for i in range (10):
    print("i = ", i)
    break

print("/////////////////")
for i in range (10):
    if(i == 5):
        break
    print("i = ", i)

print("/////////////////")

for i in range (5):
    for j in range (5):
        if(i == 3):
            break
        print("i = " + str(i) + ", j = " + str(j) )

print("/////////////////")

# continue
for i in range (10):
    print("i = ", i)
    continue

print("/////////////////")

for i in range (10):
    if(i == 2):
        continue
    print("i = ", i)

print("/////////////////")

for i in range(10):
    for j in range(10):
        if(i == 4):
            continue
    print("i = " + str(i) + " j = " + str(j) )