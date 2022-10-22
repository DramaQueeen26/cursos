<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Document</title>
</head>
<body>
	<?php 
		$id = "";
		$tipo = "";
		$contenido = "";

		require("conexion.php");

		$conexion=mysqli_connect($db_host, $db_user, $db_password, $db_name);

		if(mysqli_connect_errno()){
			echo "No puede conectar";
			exit();
		}

		$query = "SELECT * FROM ARCHIVOS WHERE ID = '1'";

		$resultado=mysqli_query($conexion, $query);

		while($fila=mysqli_fetch_array($resultado)){
			$id = $fila["ID"];
			$tipo = $fila["Tipo"];
			$contenido = $fila["Contenido"];
		}

		echo "Id: " . $id . "<br>";
		echo "Tipo " . $tipo . "<br><br>";
		echo "<img src='data:image/jpeg; base64," . base64_encode($contenido) . "'>";
	?>
</body>
</html>