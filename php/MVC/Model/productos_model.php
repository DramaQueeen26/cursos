<?php
    class Productos_model{
        private $db;
        private $produc;
        public function __construct(){
            require_once("Model/conexion.php");
            
            $this->db=Conectar::conexion();
            
            $this->productos=array();
        }
        public function getproductos(){
            
            $consulta=$this->db->query('SELECT * FROM DATOS_USUARIOS');
            
            while($fila=$consulta->fetch(PDO::FETCH_ASSOC)){
                $this->produc[]=$fila;
            }
            
            return $this->produc;
    
            
        }
    }
?> 