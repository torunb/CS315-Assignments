for i = 0, 5, 1
do
  print("i =", i)
end

print()

-- break statements (there is no continue statement or label)
for i = 0, 5, 1
do
  if i == 3 then 
    break
  end
  print("i =", i)
end

print()

for i = 0, 5, 1
do
  for j = 0, 5, 1
  do
    if i == 3 then
      break
    end
    print("i =", i, "j =", j)
  end
end