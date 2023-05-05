fn main() {
    for i in 1..10{
        print!("i = {}, ", i);
    }
    
    println!("\n");
    
    // break
    for i in 1..10{
        if i == 6
        {
            break;
        }
        print!("i = {}, ", i);
    }
    
    println!("\n");
    
    for i in 1..5{
        for j in 1..5{
            if i == 3
            {
                break;
            }
            println!("i = {}, j = {}", i, j);
        }
    }
    
    println!("\n");
    
    'goto1: loop
    {
        for i in 1..5{
            if i == 3{
                break 'goto1;
            }
            print!("i = {}, ", i);
        }
    }
    
    println!("\n");
    
    'goto2: loop
    {
        for i in 1..5{
            for j in 1..5{
                if i == 3{
                    break 'goto2;
                }
                println!("i = {}, j = {}", i, j);
            }
        }
    }
    
    println!("\n");
    
    // continue
    for i in 1..5{
        if i == 3{
            continue;
        }
        print!("i = {}, ", i);
    }
    
    println!("\n");
    
    'goto3:
    for i in 1..5{
        if i == 3{
            continue 'goto3;
        }
        print!("i = {}, ", i);
    }
    
    println!("\n");
    
    'goto4:
    for i in 1..5{
        for j in 1..5{
            if i == 3{
                continue 'goto4;
            }
            println!("i = {}, j = {}", i, j);
        }
    }
    
}