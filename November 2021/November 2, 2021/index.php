<form>
    <input name="name" type="text" placeholder="Podaj imię...">
    <input type="submit" value="Sprawdź po imieniu">
</form>

<form>
    <input name="age" type="text" placeholder="Podaj wiek...">
    <input type="submit" name="mniej" value="Mniej">
    <input type="submit" name="wiecej" value="Więcej">
</form>

<?php
    // Tworzymy połączenie
    $connection = mysqli_connect('localhost', 'root', '', 'adrian');

    // Sprawdzam, czy jest błąd = jeżeli jest, wyświetlam Error
    if (!$connection) {
        echo 'Error';
    }
    
    if(isset($_GET['name'])) {
        $name = $_GET['name'];

        // Zapytanie
        $sql = "SELECT * FROM users WHERE name = '$name'";

        // Wysyłanie zapytania do bazy
        $result = mysqli_query($connection, $sql);

        while ($user = mysqli_fetch_array($result)) {
            $firstname = $user['name'];
            $lastname = $user['surname'];
            $age = $user['age'];
            $nickname = $user['nickname'];
            
            echo "<p>Użytkownik <b>$nickname</b> ($firstname $lastname), ma $age lat.</p>";
        }
    }

    if(isset($_GET['age'])) {
        $age = $_GET['age'];

        // Zapytanie
        if (isset($_GET['mniej'])) {
            $sql = "SELECT * FROM users WHERE age < '$age'";
        } else if (isset($_GET['wiecej'])) {
            $sql = "SELECT * FROM users WHERE age > '$age'";
        }
        
        // Wysyłanie zapytania do bazy
        $result = mysqli_query($connection, $sql);

        while ($user = mysqli_fetch_array($result)) {
            $firstname = $user['name'];
            $lastname = $user['surname'];
            $nickname = $user['nickname'];
            $userAge = $user['age'];
            
            echo "<p>Użytkownik <b>$nickname</b> ($firstname $lastname), ma $userAge lat.</p>";
        }
    }
?>