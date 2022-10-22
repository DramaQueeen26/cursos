<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Document</title>
</head>
<body>
<?php
    for ($i=0; $i<=20; $i++) { 
        echo "Hemos entrado en el bucle";
        
        if($i==6){
            echo "Bucle interrumpido";
            break; //continue para continuar el bucle.
        }
    }
    echo "Fin del bucle"; 
?>


</body>
</html>