<?php 
    require("devuelve.php");
    $pais=$_GET["pais"];
    $datos=new Dev();
    $array_datos=$datos->get_datos($pais);
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
</head>
<body>
<?php
    foreach($array_datos as $fila){
        echo "<table><tr><td>";
        echo $fila['NOMBRE'] . "</td><td>";  
        echo $fila['APELLIDO'] . "</td><td>";
        echo $fila['EDAD'] . "</td><td>";
        echo $fila['PAÍS'] . "</td><td><tr></table>";
        echo "<br>";
    }
?>
</body>
</html>