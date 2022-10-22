<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Document</title>
</head>
<body>
	<?php 

		$conexion = mysqli_connect("localhost", "root", "", "test");

		//Comprobar conexion

		if(!$conexion){
			echo "La conexión ha fallado" . mysqli_errno();
			exit();
		}

		if($_FILES['imagen']['error']){

			switch ($_FILES['imagen']['error']){

				case 1: //error de exceso de tamaño
					echo "El tamñano excede";
					break;

				case 2: //Error tamaño archivo marcado desde html
					echo "El tamaño del archivo excede 2MB";
					break;

				case 3: //Corrupción de archivos
					echo "El envio de archivos se ha interrumpido";
					break;

				case 4: //No hay fichero
					echo "No se ha enviado ningún arvhivo";
					break;
			}

		}else{
			echo "Fichero subido correctamente <br>";
		}	

		if((isset($_FILES['imagen']['name']) && ($_FILES['imagen']['error']==UPLOAD_ERR_OK))){

			$destino = "img/";

			move_uploaded_file($_FILES['imagen']['tmp_name'], $destino . $_FILES['imagen']['name']);

			echo "El archivo " . $_FILES['imagen']['name'] . " se ha subido correctamente <br>";
		}else{
			echo "El archivo no se ha podido subir";
		}


		$titulo = $_POST["campo_titulo"];
		$fecha = date("Y-m-d H:i:s");
		$comentario = $_POST["area_comentarios"];
		$imagen = $_FILES['imagen']['name'];

		$sql = "INSERT INTO BLOG (Titulo, Fecha, Comentario, Imagen) VALUES ('" . $titulo . "', '" . $fecha . "', '" . $comentario . "', '" . $imagen . "')";

		$resultado = mysqli_query($conexion, $sql);

		mysqli_close($conexion);

		echo "<br> Se ha agregado correctamente <br><br><hr>"; 
	?>
</body>
</html>