<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Document</title>
</head>
<body>
<?php
	$alimentos=array("fruta"=>array("tropical"=>"kiwi",
								   "citrico"=>"mandarina",
								   "otros"=>"manzana"),
					 "leche"=>array("animal"=>"vaca",
									"vegetal"=>"coco"), 
					 "carne"=>array("vacuno"=>"lomo",
								   "porcino"=>"pata"));
	
	//echo $alimentos["carne"] ["vacuno"];
	
	/*foreach($alimentos as $clave=>$nombre){
		echo "$clave: <br>";
		
		while(list($clave1, $valor)=each($nombre)){
			echo "$clave1 = $valor <br>";
		}
		
		echo "<br>";
	}
	*/
	
	echo var_dump($alimentos);
	
?>
</body>
</html>