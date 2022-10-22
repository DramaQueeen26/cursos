<?php
    $user=$_POST["user"];
    $pass=$_POST["pass"];
    $pass_hash=password_hash($pass, PASSWORD_DEFAULT, array("cost"=>12));

  try{
      $base=new PDO("mysql:host=localhost; dbname=test", "root", ""); 
      $base->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
      $base->exec("SET CHARACTER SET utf8");
      $sql="INSERT INTO LOGIN (USUARIO, PASSWORD) VALUES (:user, :pass)"; //Marcador : ...... ?
      $resultado=$base->prepare($sql); //Consulta preparada
      $resultado->execute(array(":user"=>$user, ":pass"=>$pass_hash));
      echo "Registro insertado";
      $resultado->closeCursor();
  }catch(Exception $e){
      //die("Error: " . $e->GetMessage());
      echo $e->getLine(); //. $e->getCode();
  }finally{
      $base=null;
  }
?>