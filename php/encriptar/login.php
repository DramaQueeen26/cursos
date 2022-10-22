<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
    <style>
    	*{
    		margin: 0;
    		padding: 0;
    	}
        body{
            /*background: radial-gradient(#006BFD 10%, #000BFD 200%); */
            background: linear-gradient(80deg, #006BFD 0%, #000BFD 200%);
            /*background-color: #000BFD;*/
            /*background-color: #006BFD;*/
            color: #FFF;
        }
        h1{
            text-align: center;
            color: #FFF;
            margin-top: 150px;
            
        }
        table{
            margin: auto;
            padding: 10px;
            width: 25%;
        }
        .right{
            text-align: right;
        }
        .left{
            text-align: left;
        }
        td{
            text-align: center;
            padding: 10px;
        }
        input{
            border-radius: 20px;
        }
    </style>
</head>
<body>
    <h1>Login</h1>
    <form action="comprueba.php" method="post">
        <table>
            <tr>
                <td class="left">User: </td>
                <td class="right"><input type="text" name="user"></td>
            </tr>
            <tr>
                <td class="left">Password: </td>
                <td class="right"><input type="password" name="pass"></td>
            </tr>
            <tr>
                <td colspan="2"><input type="submit" name="submit" value="Login" id="login"></td>
            </tr>
        </table>
    </form>
</body>
</html>