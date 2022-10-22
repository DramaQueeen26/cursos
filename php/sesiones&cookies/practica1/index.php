<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
    <style>
        body{
            font-family: Verdana;
            background-color: azure;
        }
        h1{
            text-align: center;
            font-size: 30px;
            margin-top: 50px;
        }
        .lang{
            text-align: center;
            border: dashed 3px #009;
            padding: 20px;
            margin: 150px auto;
            width: 60%;
            display: flex;
            justify-content: space-between;
        }
        .eng{
            background-color: #005;
            width: 30%;
            padding: 50px;
            color: #FFF;
        }
        .esp{
            background-color: #F00;
            width: 30%;
            padding: 50px;
            color: #FFF;
        }
        a{
            text-decoration: none;
            color: #FFF;
        }
        
    </style>
</head>
<body>
   <?php
        if(isset($_COOKIE["idioma"])){
            if($_COOKIE["idioma"]=="es"){
                header("Location:español.php");
            }   else if($_COOKIE["idioma"]=="en"){
                header("Location:english.php");
            }
        }
    ?>
    <h1>Choose a language/Elige un idioma</h1>
    <div class="lang">
        <div class="eng"><a href="creacookie.php?idioma=en">English</a></div>
        <div class="esp"><a href="creacookie.php?idioma=es">Español</a></div>
    </div>
</body>
</html>