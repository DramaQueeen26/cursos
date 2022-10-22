<?php


	$db_host="localhost";
	$db_user="root";
	$db_password="";
	$db_name="test";
	
	$conexion=mysqli_connect($db_host, $db_user, $db_password, $db_name);
	
	if(mysqli_connect_errno()){
		echo "No puede conectar";
		exit();
	}

	$nombre=mysqli_real_scape_string($conexion, $_GET["nombre"]);
	$apellido=mysqi_real_scape_string($conexion, $_GET["apellido"]);
	$edad=addslashes($conexion, $_GET["edad"]);
	$pais=addslashes($conexion, $_GET["pais"]); 

	//Evita inyeccion sql
	
	mysqli_set_charset($conexion, utf8);
	
	$query="DELETE FROM DATOS WHERE NOMBRE='$nombre'";
	
	$resultado=mysqli_query($conexion, $query);

	if($resultado==false){
		echo "Error";
	}else{
		//echo "Data delete";
		//echo mysqli_affected_rows($conexion);
		
		if(mysqli_affected_rows($conexion)==0){
			echo "No hay registro que eliminar";
		}else{
			echo "Se han eliminado " . mysqli_affected_rows($conexion) . " registros";
		}
	}
	mysqli_close($conexion);
?>

