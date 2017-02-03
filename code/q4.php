<?php

if(isset($_POST['input']))
{
    $input = preg_replace('/[^A-Za-z0-9\ ]/', '', $_POST['input']);
    $prog = preg_replace('/\.php$/', '', __FILE__);
    echo shell_exec("echo {$input} | {$prog}");
}
?>


