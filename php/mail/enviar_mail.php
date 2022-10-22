<?php
	$texto = $_POST["comentarios"];
	$asunto = $_POST["asunto"];
	$destino = $_POST["email"];
    /*$headers = "MIME-Version: 1.0\r\n";
    $headers. = "Content-type: text/html; charset=iso-8859-1\r\n";
    $headers. = "From Prueba Mariangel < mariangel.yajure@gmail.com > \r\n";*/
    $mail = mail($destino, $asunto, $texto);

    if($mail){
        echo "Se ha enviado correctamente";
    }else{
        echo "Ha habido un error";
    }
?>