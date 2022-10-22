<?php 

	class Objeto_Blog{

		//Propiedades del blog
		private $id;
		private $titulo;
		private $fecha;
		private $comentarios;
		private $img;

		//Métodos de acceso

		public function get_id(){

			return $this->id;

		}

		public function set_id($id){

			$this->id = $id;

		}
		public function get_titulo(){

			return $this->titulo;

		}

		public function set_titulo($titulo){

			$this->titulo = $titulo;

		}
		public function get_fecha(){

			return $this->fecha;

		}

		public function set_fecha($fecha){

			$this->fecha = $fecha;

		}
		public function get_comentarios(){

			return $this->comentarios;

		}

		public function set_comentarios($comentarios){

			$this->comentarios = $comentarios;

		}
		public function get_img(){

			return $this->img;

		}

		public function set_img($img){

			$this->img = $img;

		}

	}

?>