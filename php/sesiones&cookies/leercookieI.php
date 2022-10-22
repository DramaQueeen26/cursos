<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
</head>
<body>
    <?php
        if(isset($_COOKIE["Prueba"])){
            echo $_COOKIE["Prueba"];
        }else{
            echo "Error";
        }
    ?>
</body>
</html>