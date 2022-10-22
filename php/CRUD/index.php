<?php
	include("conexion.php");
    
    //------Pag------
    $tam_pag=5;
    if(isset($_GET["pag"])){
        if($_GET["pag"]==1){
            header("Location:index.php");
        }else{
            $pag=$_GET["pag"];
        }
    }else{
        $pag=1;
    }
    $empezar=($pag-1)*$tam_pag;
    $sql_pag="SELECT * FROM DATOS_USUARIOS";
    $resultado=$base->prepare($sql_pag);
    $resultado->execute(array());
    $num_fila=$resultado->rowCount();
    $total_pag=ceil($num_fila/$tam_pag);

    //Imprimir en pantalla lo que hay en el base de datos
	$conexion=$base->query("SELECT * FROM DATOS_USUARIOS LIMIT $empezar,$tam_pag");
	$registro=$conexion->fetchAll(PDO::FETCH_OBJ);
    //Insertar en la base de datos
    if(isset($_POST["submit"])){
        $nombre=$_POST["nombre"];
        $apellido=$_POST["apellido"];
        $direccion=$_POST["direccion"];
        $sql="INSERT INTO DATOS_USUARIOS (NOMBRE, APELLIDO, DIRECCIÓN) VALUES (:nombre, :apellido, :direccion)";
        $resultado=$base->prepare($sql);
        $resultado->execute(array(":nombre"=>$nombre, ":apellido"=>$apellido, ":direccion"=>$direccion));
        header("Location:index.php");
    }
?>
<!DOCTYPE html>
<html>
<head>
	<title>CRUD</title>
	<style>
		td{
			border: 1px solid #000BFD;
			padding: 10px;
		}
	</style>
</head>
<body>
	<h1 style="text-align: center">CRUD: Create Read Update Delete</h1>
	<form action="<?php echo $_SERVER['PHP_SELF']?>" method="post">
	<table width="50%" align="center" style="border: 1px solid #000BFD">
		<tr>
			<td class="primera_fila">Id</td>
			<td class="primera_fila">Nombre</td>
			<td class="primera_fila">Apellido</td>
			<td class="primera_fila">Dirección</td>
			<td class="sin">&nbsp;</td>
			<td class="sin">&nbsp;</td>
		</tr>
		<?php 
			foreach ($registro as $persona)://Por cada obj que hay dentro de $registro?>
		<tr>
			<td><?php echo $persona->id?></td>
			<td><?php echo $persona->Nombre?></td>
			<td><?php echo $persona->Apellido?></td>
			<td><?php echo $persona->Dirección?></td>
			<td class="bot"><a href="borrar.php?id=<?php echo $persona->id?>"><input type="button" name="del" id="del" value="Borrar"></a></td>
			<td class="bot"><a href="editar.php?id=<?php echo $persona->id?> & nombre=<?php echo $persona->Nombre?> & apellido=<?php echo $persona->Apellido?> & direccion=<?php echo $persona->Dirección?>"><input type="button" name="up" id="up" value="Actualizar"></a></td>
		</tr>
	<?php endforeach;?>
		<tr>
			<td></td>
			<td><input type="text" name="nombre" class="centrado" size="10"></td>
			<td><input type="text" name="apellido" class="centrado" size="10"></td>
			<td><input type="text" name="direccion" class="centrado" size="10"></td>
			<td class="bot"><input type="submit" name="submit" class="submit" value="Insertar"></td>
		</tr>
	</table>
    </form>
    <?php
        for ($i=1; $i<=$total_pag; $i++){
            echo "<a href='?pag=" . $i . "'>" . $i . "</a>  ";
        }
    ?>
</body>
</html>