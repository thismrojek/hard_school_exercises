<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="./style.css">
</head>
<body>
    <main>
        <?php
        $con = mysqli_connect('localhost','root','', 'my_users');

        if (!$con) {
            echo mysql_connect_error();
        }

        if (isset($_POST['firstname']) && isset($_POST['lastname']) && isset($_POST['email'])) {
            $firstname = $_POST['firstname'];
            $lastname = $_POST['lastname'];
            $email = $_POST['email'];

            $sql = "INSERT INTO from_webapp VALUES ('$firstname', '$lastname', '$email');";
            $result = mysqli_query($con, $sql);
            
            if ($result) {
                echo "<h1>Użytkownik $firstname został pomyślnie dodany!</h1>";
            }
        }
        ?>
    </main>
</body>
</html>

