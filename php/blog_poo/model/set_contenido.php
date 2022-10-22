<?php 

	include_once("objeto_blog.php");

	class Manejo_Objeto{

		private $conexion;
		
		public function __construct($conexion){

			$this->set_conexion($conexion);

		}

		public function set_conexion(PDO $conexion){

			$this->conexion = $conexion;

		}

		public function get_contenido(){

			$matriz = array();
			$contador = 0;
			$resultado = $this->conexion->query("SELECT * FROM BLOG ORDER BY FECHA DESC");

			while ($registro = $resultado->fetch(PDO:: FETCH_ASSOC)){
				
				$blog = new Objeto_Blog();

				$blog->set_id($registro["ID"]);
				$blog->set_titulo($registro["Titulo"]);
				$blog->set_fecha($registro["Fecha"]);
				$blog->set_comentarios($registro["Comentario"]);
				$blog->set_img($registro["Imagen"]);

				$matriz[$contador] = $blog;

				$contador++;
			}

			return $matriz;

		}

		public function set_contenido(Objeto_Blog $blog){

			$sql = "INSERT INTO BLOG (Titulo, Fecha, Comentario, Imagen) VALUES ('" . $blog->get_titulo() . "', '" . $blog->get_fecha() . "', '" . $blog->get_comentarios() . "', '" . $blog->get_img() . "')";

			$this->conexion->exec($sql); 

		}

	}

?>