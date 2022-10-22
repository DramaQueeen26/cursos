<?php
    require("conexion.php");

    class Dev extends Connection {
        public function dev(){
            parent::__construct();
        }
        
        public function get_datos($dato){
            $resultado=$this->con_db->query('SELECT * FROM DATOS WHERE PAÍS ="' . $dato . '"');
            $datos=$resultado->fetch_all(MYSQLI_ASSOC);
            return $datos;
        }
    }
?>