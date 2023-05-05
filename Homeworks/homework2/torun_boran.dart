void main() { 
  for(var i = 0; i < 5; i++)
  {
    print(i);
  }
  
  print("--------------------");
    
  // break 
  for(var i = 0; i < 5; i++)
  {
    print(i);
    break;
  }
  
   print("--------------------");
  
  goto1:
  for(var i = 0; i < 5; i++)
  {
    print(i);
    break goto1;
  } 
  
  print("--------------------");
  
  goto2:
  for(var i = 0; i < 5; i++)
  {
    for(var j = 0; j < 5; j++)
    {
      print("i = " + i.toString() + " j = " + j.toString());
      if(i == 2)
      {
        break goto2;
      }
    }
  }
  
  print("--------------------");
  
  // continue 
  for(var i = 0; i < 5; i++)
  {
    print(i);
    continue;
  }
   
  print("--------------------");
  
  goto3:
  for(var i = 0; i < 5; i++)
  {
    if(i == 2)
    {
      continue goto3;
    }
    print(i);
  }  
  
  print("--------------------");
  goto4:
  for(var i = 0; i < 5; i++)
  {
    for(var j = 0; j < 5; j++)
    {
      if(i == 2)
      {
        continue goto4;
      }
      print("i = " + i.toString() + " j = " + j.toString());
    }
  }
}