<?php
    require("config.php");
    
    class Connection{
        protected $con_db;
        
        public function connection(){
            try{
                $this->con_db=new PDO("mysql:host=localhost; dbname=test", "root", "");
                $this->con_db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
                $this->con_db->exec("SET CHARACTER SET utf8");
                return $this->con_db;
            }catch(Exception $e){
                echo "La línea de error es " . $e->getLine();
            }finally{
                
            }
        }
    }
?>