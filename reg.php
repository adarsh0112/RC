<?php
$file = 'reg.txt';

$row = $_POST["name"] . $_POST["email"] . $_POST["college"] . $_POST["phno"] . $_POST["username"] . "\n"; 
$ret = file_put_contents($file, $row, FILE_APPEND | LOCK_EX);
if($ret === false) {
        die('There was an error writing this file');
    }
    else {
        echo "$ret bytes written to file";
    }
echo "You have been alloted the id";
?>
