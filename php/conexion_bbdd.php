<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Document</title>
</head>
<body>
<?php
	$db_host="localhost";
	$db_user="root";
	$db_password="";
	$db_name="pruebas";
	
	$conexion=mysqli_connect($db_host, $db_user, $db_password, $db_name);
	
	if(mysqli_connect_errno()){
		echo "No puede conectar";
		exit();
	}
	
	mysqli_set_charset($conexion, utf8);
	
	$query="SELECT * FROM DATOSPERSONALES";
	
	$resultado=mysqli_query($conexion, $query);
	
	//mysqli_fetch_row funciona en el bucle
	
	while(($fila=mysqli_fetch_array($resultado, MYSQL_ASSOC))){
		
		echo "<table><tr><td>";
		echo $fila['NOMBRE'] . "</td><td>";
		echo $fila['APELLIDO'] . "</td><td>";
		echo $fila['EDAD'] . "</td><td><tr></table>";
		echo "<br>";
	}
	
	mysqli_close($conexion);
?>
</body>
</html>