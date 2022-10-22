<?php
    require("config.php");
    
    class Connection{
        protected $con_db;
        
        public function connection(){
            $this->con_db=new mysqli(DB_HOST, DB_USER, DB_PASSWORD, DB_NAME);
            if($this->con_db->connect_errno){
                echo "Fallo al conectar a MySql" . $this-$connection_db->connent_error;
                return;
            }
            
            $this->con_db->set_charset(DB_CHARSET);
        }
    }
?>