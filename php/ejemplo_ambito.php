<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Document</title>
</head>
<body>
<?php

	$nombre="Mariangel";

	function dameNombre(){
		global $nombre; //Se accede a la variable que está fuera de la función. Y tiene que estar dentro de la función.

		$nombre="El nombre es " . $nombre;

	}

	dameNombre();

	echo $nombre;

?>	
</body>
</html>