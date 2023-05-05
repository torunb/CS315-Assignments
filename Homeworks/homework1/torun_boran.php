<?php
// Function definition of foo in php
function foo($key, $value)
{
    echo $key . ":" . $value;
    echo "\n";
}

// Initial array
echo "Initial array";
echo "\n";
$assocArr = array("School" => "Bilkent", "City" => "Ankara", "Year" => 1984);
foreach ($assocArr as $key => $value)
{
    foo($key, $value);
}
echo "\r\n";

// Get the value for a given key
echo "Get the value for a given key";
echo "\r\n";
echo "School is ". $assocArr["School"];
echo "\r\n";
echo "\r\n";

// Add a new element
echo "Add a new element";
echo "\n";
$assocArr += array("District" => "Çankaya");
foreach ($assocArr as $key => $value)
{
    foo($key, $value);
}
echo "\r\n";

// Remove an element
echo "Remove an element";
echo "\n";
unset($assocArr["Year"]);
foreach ($assocArr as $key => $value)
{
    foo($key, $value);
}
echo "\r\n";

// Modify the value of existing element
echo "Modify the value of existing element";
echo "\r\n";
$assocArr["School"] = "METU";
foreach ($assocArr as $key => $value)
{
    foo($key, $value);
}
echo "\r\n";

// Search for the existence of a key
echo "Search for the existence of a key";
echo "\r\n";
if(array_key_exists("Founder", $assocArr))
{
    echo "This associative array contains this key";
    echo "\r\n";
}
else
{
    echo "This associative array doesn't contain this key";
    echo "\r\n";
}
echo "\r\n";

// Search for the existence of a value
echo "Search for the existence of a value";
echo "\r\n";
if(in_array("METU", $assocArr))
{
    echo "This associative array contains this value";
    echo "\r\n";
}
else
{
    echo "This associative array doesn't contain this value";
    echo "\r\n";
}

echo "\r\n";

echo "Print the key-value pairs";
echo "\r\n";
foreach ($assocArr as $key => $value)
{
    foo($key, $value);
}

?>

