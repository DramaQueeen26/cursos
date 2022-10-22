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
	
	$sql="INSERT INTO DATOS (NOMBRE, APELLIDO, EDAD, PAÍS) VALUES (?, ?, ?, ?) ";
	
	$resultado=mysqli_prepare($conexion, $sql);
	
	$ok=mysqli_stmt_bind_param($resultado, "ssss", $nombre, $apellido, $edad, $pais);

	$ok=mysqli_stmt_execute($resultado);

	if($ok==false){
		echo "error";
	}else{
		
		echo "Agregado nuevo registro";
		
		
		mysqli_stmt_close($resultado);
	}

	mysqli_close($conexion);
?>