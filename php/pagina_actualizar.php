<?php    
    $busqueda=$_GET["buscar"];

    $db_host="localhost";
	$db_user="root";
	$db_password="";
	$db_name="test";
	
	$conexion=mysqli_connect($db_host, $db_user, $db_password, $db_name);
	
	if(mysqli_connect_errno()){
		echo "No puede conectar";
		exit();
	}
	
	mysqli_set_charset($conexion, utf8);
	
	$query="SELECT * FROM DATOS WHERE NOMBRE = ?";
	
	$resultado=mysqli_prepare($conexion, $query);
	
	$ok=mysqli_stmt_bind_param($resultado, "s", $busqueda);

	$ok=mysqli_stmt_execute($resultado);

	if($ok==false){
		echo "error";
	}else{
		$ok=mysqli_stmt_bind_result($resultado, $nombre, $apellido, $edad, $pais);
		
		echo "Encontrado<br>";
		
		while(mysqli_stmt_fetch($resultado)){
			echo $nombre . " " . $apellido . " " . $edad . " " . $pais . " ";
		}
		mysqli_stmt_close($resultado);
	}

	/*$resultado=mysqli_query($conexion, $query);

    while($fila=mysqli_fetch_array($resultado)){
        //echo "<table><tr><td>";
        echo "<form action='actualizar.php' method='get'>";
        echo "<input type='text' name='nombre' value='$fila[0]'><br>";
        echo "<input type='text' name='apellido' value='$fila[1]'><br>";
        echo "<input type='text' name='edad' value='$fila[2]'><br>";
        echo "<input type='text' name='pais' value='$fila[3]'><br>";
        echo "<input type='submit' value='Updated!'>";
        echo "</form>";
       
        // echo $fila[0] . "</td><td>";
        // echo $fila[1] . "</td><td>";
        // echo $fila[2] . "</td><td>";
        // echo $fila[3] . "</td><td></tr></table>";
        // echo "<br><br>";
    }
	*/
    mysqli_close($conexion);
    
    ?>