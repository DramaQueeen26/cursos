<?php

namespace App\Database\Seeds;

use CodeIgniter\Database\Seeder;

class libros_seeder extends Seeder
{
        public function run()
        {
            //Para eliminar
            //Para más información buscar en query builder

            $this->db->table('t_libros')->where('id_libro >', 0)->delete();
            //$this->db->table('t_libros')->truncate(); //PARA REINICIAR TODO A 0

            for($i = 0; $i < 50; $i++){
                $data = [
                        'nombre' => 'Libro '.$i,
                        'description' => 'Este es el libro '.$i
                ];

                // Simple Queries
                //$this->db->query("INSERT INTO users (username, email) VALUES(:username:, :email:)", $data);

                // Using Query Builder
                $this->db->table('t_libros')->insert($data);
            }
        }
}