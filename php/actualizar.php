<?php

	$nombre=$_GET["nombre"];
	$apellido=$_GET["apellido"];
	$edad=$_GET["edad"];
	$pais=$_GET["pais"];

	$db_host="localhost";
	$db_user="root";
	$db_password="";
	$db_name="test";
	
	$conexion=mysqli_connect($db_host, $db_user, $db_password, $db_name);
	
	if(mysqli_connect_errno()){
		echo "No puede conectar";
		exit();
	}
	
	mysqli_set_charset($conexion, utf8);
	
	$query="UPDATE DATOS SET NOMBRE='$nombre', APELLIDO='$apellido', EDAD='$edad', PAÍS='$pais' WHERE NOMBRE='$nombre'";
	$resultado=mysqli_query($conexion, $query);

	if($resultado==false){
		echo "Error";
	}else{
		echo "Register update!";
	}
	
	mysqli_close($conexion);
?>