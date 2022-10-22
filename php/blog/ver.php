<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Blog</title>
</head>
<body>
	<h2>Blog</h2>
	<hr>
	<?php 
		$conexion = mysqli_connect("localhost", "root", "", "test");

		//Comprobar conexion

		if(!$conexion){
			echo "La conexión ha fallado" . mysqli_errno();
			exit();
		}

		$sql = "SELECT * FROM BLOG ORDER BY FECHA DESC";

		if($resultado = mysqli_query($conexion, $sql)){

			while($registro = mysqli_fetch_assoc($resultado)){
				echo "<h2>" . $registro["Titulo"] . "</h2>";
				echo "<h3>" . $registro["Fecha"] . "</h3>";
				echo "<div style='width:400px'>" . $registro["Comentario"] . "</div><br><hr>";
				
				if($registro["Imagen"]!=""){

					echo "<img src='img/" . $registro["Imagen"] . "' width='300px'>";
				}

				echo "<hr>";
			}
		} 

	?>
</body>
</html>