<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Document</title>
</head>
<body>
	<?php 

	include("../model/set_contenido.php");

	try{
		$base = new PDO('mysql:host=localhost; dbname=test', 'root', '');
		$base->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
		$base->exec("SET CHARACTER SET UTF8");

		$manejo_objetos = new Manejo_Objeto($base);

		$tabla_blog = $manejo_objetos->get_contenido();

		if(empty($tabla_blog)){
			echo "No hay nada";
		}else{
			foreach ($tabla_blog as $valor) {
				
				echo "<h1>" . $valor->get_titulo() . "</h1>";
				echo "<h3>" . $valor->get_fecha() . "</h3>";
				echo "<div style='width:400px'>" . $valor->get_comentarios() . "</div>";
				
				if($valor->get_img()!=""){
					echo "<img src='../img/" . $valor->get_img() . "' width='300px' height='200px'>";
				}

				echo "<hr>";

			}
		}


	}catch(Exception $e){

		die("Error... " . $e->getMessage());

	}

	?>

	<br>

	<a href="formulario.php">Volver a la página</a>
</body>
</html>