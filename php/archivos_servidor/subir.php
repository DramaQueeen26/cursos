<?php

    $nombreArchivo=$_FILES['archivo']['name'];
    $tipoArchivo=$_FILES['archivo']['type'];
    $tamArchivo=$_FILES['archivo']['size'];

    echo $tipoArchivo . " " . $tamArchivo . "<br>";

    $destino=$_SERVER['DOCUMENT_ROOT'] . '/PHP/archivos_servidor/archivos/';

    $fichero_subido = $destino . $nombreArchivo;

		if (move_uploaded_file($_FILES['archivo']['tmp_name'], $fichero_subido)) {
		    echo "El fichero es válido y se subió con éxito.\n";
		} else {
		    echo "¡Posible ataque de subida de ficheros!\n";
		}

	require("conexion.php");

	$conexion=mysqli_connect($db_host, $db_user, $db_password, $db_name);

	if(mysqli_connect_errno()){
		echo "No puede conectar";
		exit();
	}

	mysqli_set_charset($conexion, utf8);

	$archivo_objetivo = fopen($destino . $nombreArchivo, "r");

	$contenido = fread($archivo_objetivo, $tamArchivo);

	$contenido = addslashes($contenido);

	fclose($archivo_objetivo);

	$query="INSERT INTO ARCHIVOS (ID, Nombre, Tipo, Contenido) VALUES (0, '$nombreArchivo', '$tipoArchivo', '$contenido')";
	
	$resultado=mysqli_query($conexion, $query);

	if(mysqli_affected_rows($conexion)>0){
		echo "Se ha insertado el registro con éxito";
	}else{
		echo "No se ha podido insertar el registro";
	}

	
	mysqli_close($conexion);
	



?>