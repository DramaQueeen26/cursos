<?php

    namespace App\Controllers;

    use App\Models\libros_model;

    class Home extends BaseController
    {
        public function index()
        {
            $data = [
                'titulo' => 'Curso de CodeIgniter'
            ];
            return view('welcome_message', $data);
        }

        public function page()
        {
            return "Hola mundo";
        }

        public function libros()
        {
            $libros = new libros_model();

            $datos = $libros->mostrar_libros();
            
            $data = ['datos' => $datos];

            return view("libros", $data);
        }
    }
