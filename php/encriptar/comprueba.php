<?php
    try{
        $user=htmlentities(addslashes($_POST["user"]));
        $pass=htmlentities(addslashes($_POST["pass"]));
        $count=0;
        $base=new PDO("mysql:host=localhost; dbname=test", "root", "");
        $base->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
        $sql="SELECT * FROM LOGIN WHERE USUARIO = :user";
        $resultado=$base->prepare($sql);
        $resultado->execute(array(":user"=>$user));
        while($registro=$resultado->fetch(PDO::FETCH_ASSOC)){
            if(password_verify($pass, $registro["PASSWORD"])){
                $count++;
            }
        }
        if($count>0){
            echo "Usuario registrado";
        }else{
            echo "Usuario no registrado";
        }
        $resultado->closeCursor();
    }catch(Exception $e){
        die ("Error: " . $e->getMessage());
    }
?>