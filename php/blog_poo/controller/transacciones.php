<?php 

	include_once("../model/objeto_blog.php");		
	include_once("../model/set_contenido.php");

	try{
			
		$base = new PDO('mysql:host=localhost; dbname=test', 'root', '');
		$base->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
		$base->exec("SET CHARACTER SET UTF8");


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

			$destino = "../img/";

			move_uploaded_file($_FILES['imagen']['tmp_name'], $destino . $_FILES['imagen']['name']);

			echo "El archivo " . $_FILES['imagen']['name'] . " se ha subido correctamente <br>";
		}else{
			echo "El archivo no se ha podido subir";
		}

		$manejo_objetos = new Manejo_Objeto($base);

		$blog = new Objeto_Blog();

		$blog->set_titulo(htmlentities(addslashes($_POST["campo_titulo"]), ENT_QUOTES));
		$blog->set_fecha(Date("Y-m-d H:i:s"));
		$blog->set_comentarios(htmlentities(addslashes($_POST["area_comentarios"]), ENT_QUOTES));
		$blog->set_img($_FILES["imagen"]["name"]);

		$manejo_objetos->set_contenido($blog);

		echo "<br>Entrada de blog agregada con éxito<br>";


	}catch(Exception $e){

		die("Error... " . $e->getMessage());

	}

	?>