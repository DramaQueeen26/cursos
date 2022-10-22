<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Document</title>
</head>
<body>
    <p>&nbsp;</p>
    <form name="form1" action="calculadora.php" method="post">
        <p>
            <label for="num1"></label>
            <input type="text" name="num1" id="num1">
            <label for="num2"></label>
            <input type="text" name="num2" id="num2">
            <label for="operacion"></label>
            <select name="operacion" id="operacion">
                <option>Suma</option>
                <option>Resta</option>
                <option>Multiplicación</option>
                <option>División</option>
                <option>Módulo</option>
                <option>Incremento</option>
                <option>Decremento</option>
            </select> 
        </p>
        <p>
        <input type="submit" value="Enviar" name="button" id="button" onClick="prueba">
        </p>
    </form>
    <p>&nbsp</p>
<?php
    include("calculadora.php");
<?
</body>
</html>