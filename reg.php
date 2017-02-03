<?php
$temp1 = fopen("uploads/reg", "a+") or die("Unable to process");
$a = $a . "	";
$a = $a . $_POST["name"];
$a = $a . "	";
$a = $a . $_POST["email"];
$a = $a . "	";
$a = $a . $_POST["college"];
$a = $a . "	";
$a = $a . $_POST["phno"];
$a = $a . "
";
fwrite($temp1, $a);
fclose($temp1);
echo "You have been alloted the id<br><h1><pre>$output</pre></h1>";
?>
