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
    if(isset($_POST["submit"])){
        $pass=$_POST["pass"];
        $nombre=$_POST["nombre"];

        switch (true){
            case $nombre=="Mariangel" && $pass=="1234":
                echo "Usuario autorizado. Hola Mariangel.";
                break; 
            case $nombre=="Josué" && $pass=="5678":
                echo "Usuario autorizado. Hola Josué.";
                break;
            case $nombre=="Juan" && $pass=="90":
                echo "Usuario autorizado. Hola Juan.";
                break;
            default:
                echo "Usuario no autorizado";
        }
    }
?>
    <form action="" method="post" name="datos_usuarios" id="form">
        <table>
            <tr><td>Nombre: </td><td><input type="text" name="nombre" id="nombre"></td></tr>
            <tr><td>Contraseña: </td><td><input type="password" name="pass" id="pass"></td></tr>
            <tr><td><input type="submit" value="Enviar" name="submit"></td></tr>
        </table>
    </form>
</body>
</html>