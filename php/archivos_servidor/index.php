<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
</head>
<body>
    <form action="subir.php" method="post" enctype="multipart/form-data">
        <table>
            <tr>
                <td><label for="archivo">Archivos: </label></td>
                <td><input type="file" name="archivo" size="20"></td>
            </tr>
            <legend></legend>
            <tr>
                <td colspan="2" style="text-align:center"><input type="submit" value="enviar" name="enviar"></td>
            </tr>
        </table>
    </form>
</body>
</html>