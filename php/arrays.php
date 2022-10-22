<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Document</title>
</head>
<body>
<?php
   /* $semana[1]="Lunes";
    $semana[1]="Martes";
    $semana[2]="Miércoles";
	
	echo $semana[1];*/ //Primera sintaxis de array indexado.
	
	/*$semana=array("Lunes", "Martes", "Miércoles", "Jueves");
	
	echo $semana[3];*/ //Segunda sintaxis
	
	//$datos=array("Nombre"=>"Mariangel", "Apellido"=>"Yajure", "Edad"=>17); //Array asociativo
	
	//$datos["Pais"]="España"; //Así se agrega un elemento al array asociativo.
	
	//echo $datos["Apellido"];
	
	/*if(is_array($datos)){ //Comprueba si es un array.
		echo "Is array";
	}
	*/

	/*foreach($datos as $clave=>$valor){ //Bucle para los arrays asociativos.
		echo "<div style='background-color:#006BFD; color:#FFF; margin: auto; text-align: center; width: 50%; border-radius: 20px; padding: 10px;'> 
		
		A $clave le corresponde $valor 
		
		</div><br>";
	}*/
	
	/*$semana[]="Lunes";
    $semana[]="Martes";
    $semana[]="Miércoles";
	$semana[]="Jueves";
	
	for($i=0; $i<count($semana); $i++){ //count cuenta los elemntos que tiene el array.
		echo $semana[$i] . "<br>";
	}
	
	$semana[]="Viernes"; //Así se agrega elemento a un array indexado.*/
	

	$semana=array("Lunes", "Martes", "Miércoles", "Jueves");
	
	sort($semana); //Funcion predefinida para ordenar un array alfabeticamente.
	
	for($i=0; $i<count($semana); $i++){
		echo $semana[$i] . "<br>";
	}
	
	

?>
</body>
</html>