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
    $var1=true;
    $var2=false;
    $resultado=$var1 && $var2; //Almacenar en resultado=false

    if($resultado){
        echo "Correcto";
    }else{
        echo "Incorrecto";
    }
?>
</body>
</html>