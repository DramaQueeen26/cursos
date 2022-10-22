<?php
    if(!$_COOKIE["idioma"]){
        header("Location:index.php");
    }else if($_COOKIE["idioma"]=="es"){
        header("Location:español.php");
    }else if($_COOKIE["idioma"]=="en"){
        header("Location:english.php");
    }
?>