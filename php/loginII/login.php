<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
    <style>
    	*{
    		margin: 0;
    		padding: 0;
    	}
        body{
            /*background: radial-gradient(#006BFD 10%, #000BFD 200%); */
            background: linear-gradient(80deg, #006BFD 0%, #000BFD 200%);
            /*background-color: #000BFD;*/
            /*background-color: #006BFD;*/
            color: #FFF;
        }
        h1{
            text-align: center;
            color: #FFF;
            margin-top: 150px;
            
        }
        table{
            margin: auto;
            padding: 10px;
            width: 25%;
        }
        .right{
            text-align: right;
        }
        .left{
            text-align: left;
        }
        td{
            text-align: center;
            padding: 10px;
        }
        input{
            border-radius: 20px;
        }
        h2, p{
            text-align: center;
            margin-left: 10px;
        }
    </style>
</head>
<body>
<?php
    if(isset($_POST["submit"])){
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
            }else{
                echo "Usuario o Contraseña incorrectos";
            } 
            
        }catch(Exception $e){
            die ("Error: " . $e->getMessage());
        }
    }
?>
<?php 
    if(!isset($_SESSION["user"])){
        include("formulario.html");
    }else{
    echo "<h1>Hello " . $_SESSION["user"] . "</h1>";
}

?>
    <h2>Contenido</h2>
    <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod
    tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,
    quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo
    consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse
    cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non
    proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p><br><br>
    <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod
    tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,
    quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo
    consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse
    cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non
    proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
</body>
</html>