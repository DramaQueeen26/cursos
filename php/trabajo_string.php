<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Document</title>
	<style>
		.resaltar{
			color: #F00;
			font-weight: bold;
		}
	</style>
<body>
<?php  

	$nombre="Mariangel";
	echo "<p class=\"resaltar\">Esto es un ejemplo de frase</p>";

	echo "Hola $nombre <br>";

	$variable1="Casa";
	$variable2="CASA";

	$resultado=strcmp($variable1, $variable2); //Devuelve 1 si no son iguales y 0 si son iguales. Compara mayus con minus.
	//strcasecmp compara el valor sin tomar en cuenta mayus o minus.

	if($resultado){
		echo "No coinciden";
	}else{
		echo "Coinciden";
	}

?>



</body>
</html>