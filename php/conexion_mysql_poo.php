<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Document</title>
</head>
<body>
<?php
	$conexion=new mysqli("localhost", "root", "", "test");
	
	if($conexion->connect_errno){
		echo "Falló la conexión " . $conexion->connect_errno;
	}

	$conexion->set_charset("utf8");
	
	$sql="SELECT * FROM DATOS";
	$resultado=$conexion->query($sql);
	
	if($conexion->errno){
		die($conexion->error);//mate el error.
	} 
	
	while($fila=$resultado->fetch_array()){ //fetch_assoc para array asociativo(con nombre)
		echo "<table><tr><td>";
		echo $fila[0] . "</td><td>";
		echo $fila[1] . "</td><td>";
		echo $fila[2] . "</td><td><tr></table>";
		echo "<br>";
	}
	
	$conexion->close();
?>
</body>
</html>