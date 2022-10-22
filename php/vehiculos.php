<?php
    class Coche{
        protected $ruedas;
        var $color;
        protected $motor;
        
/*Private solo se accede desde aqui
Protected se accede desde aqui y las herencias
Public es publico*/

        function Coche(){ //Método constructor
            $this->ruedas=4;
            $this->color="";
            $this->motor=1600;

        }
        
        function get_motor(){
            return $this->motor;
        }
        function get_ruedas(){ //Método getter, accede a la propiedad.
            return $this->ruedas;
        }
        
        function arrancar(){
        	echo "Estoy arrancando <br>";
        }

        function girar(){
        	echo "Estoy girando <br>";
        }

        function frenar(){
        	echo "Estoy frenando <br>";
        }

        function establece_color($color_coche, $nombre_coche){ //Método setter, cambia la propiedad.
            $this->color=$color_coche;

            echo "El color del " . $nombre_coche . " es: " . $this->color;
        }
    }

//--------------------------------------------------------------------------------

    class Camion extends Coche{
        
        function Camion(){
            $this->ruedas=8;
            $this->color="gris";
            $this->motor=2600;
        }
        
        function establece_color($color_camion, $nombre_camion){
            $this->color=$color_camion;

            echo "El color del " . $nombre_camion . " es: " . $this->color . "<br>";
        }
        
        function arrancar(){
            parent::arrancar(); //Primero se ejecuta la instrucción padre.
            echo "Camión arrancado <br>";
        }
    }
/*para un campo estático se usa self::*/
?>


