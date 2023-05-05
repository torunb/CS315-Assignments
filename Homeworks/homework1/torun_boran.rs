use std::collections::HashMap;

// Function definition of foo in Rust
fn foo(key: &str, value: &str)
{
    println!("({} : {})", key, value);
}

fn main() {
    // Initial array
    println!("Initial array");
    let mut assoc_array = HashMap::from([("cloth type", "t-shirt"), ("size", "XL")]);
    for (k, v) in &assoc_array
    {
        foo(k, v);
    }
    
    println!();
    
    // Get the value for a given key
    println!("Get the value for a given key");
    print!("Cloth type is ");
    println!("{}", assoc_array["cloth type"]);
    println!();
    
    // Add a new element
    println!("Add a new element");
    assoc_array.insert("brand", "Network");
    for (k, v) in &assoc_array
    {
        foo(k, v);
    }
    println!();
    
    // Remove an element
    println!("Remove an element");
    assoc_array.remove("size");
    for (k, v) in &assoc_array
    {
        foo(k, v);
    }
    println!();
    
    // Modify the value of an existing element
    println!("Modify the value of an existing element");
    assoc_array.insert("cloth type", "jacket");
    println!();
    
    // Search for the existence of a key
    println!("Search for the existence of a key");
    if assoc_array.contains_key("brand")
    {
        println!("This associative array contains this key");
    }
    else
    {
        println!("This associative array doesn't contain this key");
    }
    println!();
    
    // Search for the existence of a value
    println!("Search for the existence of a value");
    let mut i = 0;
    for v in assoc_array.values()
    {
        if v == &"jacket"
        {
            i = 1;
            println!("This associative array contains this value");
        }
    }
    if i != 1
    {
        println!("This associative array doesn't contain this value");
    }
}