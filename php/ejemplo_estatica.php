<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Document</title>
</head>
<body>
<?php
	function incrementaVariable(){
		static $contador=0; //Static para que pueda incrementar, para que conserve su valor al salir de la funcion.

		$contador++;

		echo $contador . "<br>";
	}

	incrementaVariable();
	incrementaVariable();
	incrementaVariable();

?>
</body>
</html>