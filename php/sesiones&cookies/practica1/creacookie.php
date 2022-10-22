<?php
    setcookie("idioma", $_GET["idioma"], time()+86400);
    header("Location:vercookie.php");
?>