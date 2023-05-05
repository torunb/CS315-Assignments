for i in 1..5 do
  puts i
end
  
puts "----------"
  
# break
for i in 1..5 do
  puts i
  break
end
  
puts "----------"
  
for i in 1..5 do
  if i == 3 then
    break
  end
  puts i
end
  
puts "----------"
  
for i in 1..5 do
  for j in 1..5 do
    if i == 3 then
      break
    end
    puts "i =  #{i}, j =  #{j}"
  end
end
  
puts "----------"
  
# continue (next)
for i in 1..5 do
  if i == 2 then
    next
  end
  puts i
end
  
puts "---------"
  
for i in 1..5 do
  for j in 1..5 do
    if i == 3 then
      next
    end
    puts "i =  #{i}, j =  #{j}"
  end
end