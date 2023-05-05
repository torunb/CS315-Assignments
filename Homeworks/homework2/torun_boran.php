<?php
for($i = 0; $i < 5; $i++)
{
    echo ("i = $i");
    echo("\r\n");
}

echo("-------------------");
echo("\r\n");

// break
for($i = 0; $i < 5; $i++)
{
    if($i == 3)
    {
        break;
    }
    echo ("i = $i");
    echo("\r\n");
}

echo("-------------------");
echo("\r\n");

for($i = 0; $i < 5; $i++)
{
    for($j = 0; $j < 5; $j++)
    {
        if($i == 3)
        {
            break 2;
        }
        echo ("i = $i, j = $j ");
        echo("\r\n");
    }
}

echo("-------------------");
echo("\r\n");

// continue
for($i = 0; $i < 5; $i++)
{
    echo "i = $i";
    echo "\r\n";
    continue;
}

echo("-------------------");
echo("\r\n");

for($i = 0; $i < 5; $i++)
{
    if($i == 3)
    {
        continue;
    }
    echo "i = $i";
    echo "\r\n";
}

echo("-------------------");
echo("\r\n");

for($i = 0; $i < 5; $i++)
{
    for($j = 0; $j < 5; $j++)
    {
        if($i == 3)
        {
            continue;
        }
        echo ("i = $i, j = $j ");
        echo("\r\n");
    }
}

?>

