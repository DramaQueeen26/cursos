<?php
    require_once("Model/productos_model.php");

    $producto=new Productos_model();
    $matrizProductos=$producto->getproductos();

    require_once("View/productos_view.php");



?>