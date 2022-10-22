<?php
    try{
        $base=new PDO("mysql:host=localhost; dbname=test", "root", "");
        $base->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
        $sql="SELECT * FROM LOGIN WHERE USUARIO = :usuario AND PASSWORD = :password";
        $resultado=$base->prepare($sql);
        $usuario=htmlentities(addslashes($_POST["user"]));
        $password=htmlentities(addslashes($_POST["pass"]));
        $resultado->bindValue(":usuario", $usuario); 
        $resultado->bindValue(":password", $password);
        /*bindParam es para parámetros ?*/
        $resultado->execute();
        $numero_registro=$resultado->rowCount();
        if($numero_registro!=0){
            session_start();
            $_SESSION["user"]=$_POST["user"];
            header("location:usuarios_registrados.php");
        }else{
            header("location:login.php");
        }
        
    }catch(Exception $e){
        die ("Error: " . $e->getMessage());
    }
?>