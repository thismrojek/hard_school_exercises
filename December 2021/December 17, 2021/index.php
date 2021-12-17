<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Rejestracja | MojaStrona.pl</title>
    <link rel="stylesheet" href="./style.css">
</head>
<body>
    <main>
        <h2>Dodaj swojego użytkownika!</h2>
        <section class="register">
            <form action="/register.php" method="post">
                <input type="text" name="firstname" placeholder="Imię">
                <input type="text" name="lastname" placeholder="Nazwisko">
                <input type="email" name="email" placeholder="Adres email">
                <input type="submit" value="Dodaj użytkownika">
            </form>
        </section>
    </main>
</body>
</html>