<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
    <style>
     body{
            background: radial-gradient(#003BFD 0%, #000BFD 100%); 
            color: #FFF;
        }
        h1{
            text-align: center;
            color: #FFF;
            
        }
    </style>
</head>
<body>
   <?php
        session_start();
        if(!isset($_SESSION["user"])){
            header("location:login.php");
        }
    ?>
    <h1>Bienvenido <?php echo $_SESSION["user"];?></h1>
    <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Sit impedit deleniti laborum. Nisi nulla optio amet aspernatur, aut est veniam, tenetur enim fuga, atque natus autem, numquam quidem alias dolore. <a href="cerrar.php">Cerrar</a></p>
    
</body>
</html>