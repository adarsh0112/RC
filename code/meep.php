<?php

if(isset($_POST['input']))
{
    $input = preg_replace('/[^A-Za-z0-9\ ]/', '', $_POST['input']);
    
    $cwd = NULL;
    $env = NULL;
    //$prog = preg_replace('/\.php$/', '', __FILE__);
    $proc= proc_open("java q4", array(
                    array("pipe","r"),
                    array("pipe","w")
            ),  $pipes, $cwd, $env);
    if (is_resource($proc)) 
    {
        fwrite($pipes[0], $input );
        fclose($pipes[0]);
        echo stream_get_contents($pipes[1]);
        fclose($pipes[1]);
        $return_value = proc_close($process);
    }
}
?>


