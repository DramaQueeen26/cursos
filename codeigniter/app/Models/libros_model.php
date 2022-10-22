<?php

    namespace App\Models;

    use CodeIgniter\Model;

    class libros_model extends Model
    {
        public function mostrar_libros()
        {
            $libros = $this->db->query("SELECT * FROM t_libros");
            return $libros->getResult();
        }
    }