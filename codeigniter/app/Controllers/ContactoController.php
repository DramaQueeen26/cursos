<?php

namespace App\Controllers;

class ContactoController extends BaseController
{
    public function index()
    {
        $data = ['title' => 'Inicio'];
        $view = view('contacto/header', $data).
                view('contacto/index').
                view('contacto/footer');
        
        return $view;

    }

    //Pasando parámetros por URL

    public function catalogo($numeroCatalogo)
    {
        $data = ['title' => 'Catalogo', 'numero' => $numeroCatalogo];
        //Otra manera de hacerlo
        echo view('contacto/header', $data);
        echo view('contacto/catalogo');
        echo view('contacto/footer');
    }

    public function formulario()
    {
        $data = ['title' => 'Formulario'];
        //Otra manera de hacerlo
        echo view('contacto/header', $data);
        echo view('contacto/formulario');
        echo view('contacto/footer');
    }

    public function getForm()
    {

        // print_r($_POST); //Obtener todos los post

        $valor1 = $_POST['valor1'];
        $valor2 = $_POST['valor2'];

        echo $valor1 + $valor2;

    }
}
