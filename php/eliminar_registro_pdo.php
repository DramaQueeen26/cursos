<?php
    $nombre=$_GET["nombre"];

  try{
      $base=new PDO("mysql:host=localhost; dbname=test", "root", ""); 
      $base->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
      $base->exec("SET CHARACTER SET utf8");
      $sql="DELETE FROM DATOS WHERE NOMBRE = :nombre"; //Marcador : ...... ?
      $resultado=$base->prepare($sql); //Consulta preparada
      $resultado->execute(array(":nombre"=>$nombre));
      /*while($registro=$resultado->fetch(PDO::FETCH_ASSOC)){
          echo "<table><tr><td>";
		echo $registro["NOMBRE"] . "</td><td>";
		echo $registro["APELLIDO"] . "</td><td>";
            echo $registro["EDAD"] . "</td><td>";
		echo $registro["PAÍS"] . "</td><td><tr></table>";
		echo "<br>";
      }*/
      echo "Registro eliminado";
      $resultado->closeCursor();
  }catch(Exception $e){
      //die("Error: " . $e->GetMessage());
      echo $e->getLine(); //. $e->getCode();
  }finally{
      $base=null;
  }
?>