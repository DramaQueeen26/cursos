<?php
    setcookie("idioma", $_GET["idioma"], time()-1);
    header("Location:vercookie.php");
?>