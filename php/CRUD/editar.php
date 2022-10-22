<?php
	include("conexion.php");

    if(!isset($_POST["submit"])){
        $id=$_GET["id"];
        $nombre=$_GET["nombre"];
        $apellido=$_GET["apellido"];
        $direccion=$_GET["direccion"];
    }else{
        $id=$_POST["id"];
        $nombre=$_POST["nombre"];
        $apellido=$_POST["apellido"];
        $direccion=$_POST["direccion"];
        $sql="UPDATE DATOS_USUARIOS SET Nombre=:nombre, Apellido=:apellido, Dirección=:direccion WHERE id=:id";
        $resultado=$base->prepare($sql);
        $resultado->execute(array(":id"=>$id, ":nombre"=>$nombre, ":apellido"=>$apellido, ":direccion"=>$direccion));
        header("Location:index.php");
    }
	
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
</head>
<body>
   <form action="<?php echo $_SERVER['PHP_SELF'];?>" method="post">
    <p>Id</p>
    <input type="hidden" name="id" value="<?php echo $id?>"> 
    <p>Nombre</p>
    <input type="text" id="nombre" name="nombre"> <?php echo $nombre?>
    <p>Apellido</p>
    <input type="text" id="apellido" name="apellido"><?php echo $apellido?>
    <p>Dirección</p>
    <input type="text" id="direccion" name="direccion"><?php echo $direccion?>
    <input type="submit" id="submit" name="submit">
    </form>
</body>
</html>