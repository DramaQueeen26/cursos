<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
</head>
<body>
<?php
    $nombre=$_GET["nombre"];
    $pais=$_GET["pais"];
  try{
      $base=new PDO("mysql:host=localhost; dbname=test", "root", ""); 
      $base->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
      $base->exec("SET CHARACTER SET utf8");
      $sql="SELECT * FROM DATOS WHERE NOMBRE = :nom AND PAÍS = :pais"; //Marcador : ...... ?
      $resultado=$base->prepare($sql); //Consulta preparada
      $resultado->execute(array(":nom"=>$nombre, ":pais"=>$pais));
      while($registro=$resultado->fetch(PDO::FETCH_ASSOC)){
          echo "<table><tr><td>";
		echo $registro["NOMBRE"] . "</td><td>";
		echo $registro["APELLIDO"] . "</td><td>";
            echo $registro["EDAD"] . "</td><td>";
		echo $registro["PAÍS"] . "</td><td><tr></table>";
		echo "<br>";
      }
      $resultado->closeCursor();
  }catch(Exception $e){
      //die("Error: " . $e->GetMessage());
      echo $e->getCode(); //. $e->getLine();
  }finally{
      $base=null;
  }
?> 
</body>
</html>