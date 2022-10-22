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
	
	$query="INSERT INTO DATOS (NOMBRE, APELLIDO, EDAD, PAÍS) VALUES ('$nombre', '$apellido', '$edad', '$pais')";
	
	$resultado=mysqli_query($conexion, $query);

	if($resultado==false){
		echo "Error";
	}else{
		echo "Register saved!";
	}
	
	mysqli_close($conexion);
?>