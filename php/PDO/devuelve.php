<?php
    require("conexion.php");

    class Dev extends Connection {
        public function dev(){
            parent::__construct();
        }
        
        public function get_datos($dato){
            $sql="SELECT * FROM DATOS WHERE PAÍS ='" . $dato . "'";
            $sentencia=$this->con_db->prepare($sql);
            $sentencia->execute(array());
            $resultado=$sentencia->fetchAll(PDO::FETCH_ASSOC);
            $sentencia->closeCursor();
            return $resultado;
            $this->con_db=null;
        }
    }
?>