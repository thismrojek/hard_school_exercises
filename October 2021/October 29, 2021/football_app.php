<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Montserrat&display=swap" rel="stylesheet">
    <title>Fans app</title>
    <style>
        * {
            font-family: Montserrat;
        }

        header h1 {
            width: fit-content;
            border-bottom: 1px solid #8b2c2c;
            padding: 1rem;
        }

        header,
        main {
            display: flex;
            justify-content: center;
        }
        main {
            margin-bottom: 2rem;
        }

        .addMatch {
            width: fit-content;
            margin-right: 4rem;
        }

        .addMatch h2 {
            margin: 0;
        }

        .inputGroup {
            display: flex;
            flex-direction: column;
            max-width: 300px;
        }

        .inputGroup .twoSubmits {
            display: flex;
        }

        label {
            margin: .25rem 0;
        }

        input[type=text] {
            outline: none;
            border: 1px solid gray;
            background: lightgray;
            height: 20px;
            border-radius: 4px;
        }

        input[type=submit] {
            outline: none;
            border: none;
            border-radius: 2px;
            color: white;
            width: 150px;
            background: #8b2c2c;
            margin-top: .25rem;
            margin-right: .25rem;
            cursor: pointer;
        }
    </style>
</head>
<body>
    <header>
        <h1>Fans app</h1>
    </header>
    <main>
        <section class="addMatch">
            <h2>Wprowadź nowy mecz:</h2>
            <form method="POST">
                <div class="inputGroup">
                    <label for="klub1">Nazwa klubu numer 1:</label>
                    <input id="klub1" name="klub1" type="text">
                </div>
                <div class="inputGroup">
                    <label for="klub2">Nazwa klubu numer 2:</label>
                    <input id="klub2" name="klub2" type="text">
                </div>
                <div class="inputGroup">
                    <label for="gole1">Liczba bramek klubu nr 1:</label>
                    <input id="gole1" name="gole1" type="text">
                </div>
                <div class="inputGroup">
                    <label for="gole2">Liczba bramek klubu nr 2:</label>
                    <input id="gole2" name="gole2" type="text">
                </div>
                <div class="inputGroup">
                    <label for="data">Data meczu:</label>
                    <input id="data" name="data" type="text">
                </div>
                <input type="submit" value="Dodaj">
            </form>
        </section>
        <section class="searchMatch">
            <form action="">
                <div class="inputGroup">
                    <label for="gole">Wszystkie mecze, gdy liczba bramek:</label>
                    <input id="gole" name="gole" type="text">
                    <div class="twoSubmits">
                        <input name="mniej" type="submit" value="Mniej">
                        <input name="wiecej" type="submit" value="Więcej">
                    </div>
                </div>
            </form>
            <form>
                <div class="inputGroup">
                    <label for="klub">Nazwa klubu nr 1 lub 2:</label>
                    <input id="klub" name="klub" type="text">
                    <input type="submit" value="Pobierz mecze">
                </div>
            </form>
        </section>
    </main>
</body>
</html>

<?php
    // TWORZENIE POŁĄCZENIA Z SERWEREM MYSQL
    $con = mysqli_connect('localhost', 'root', '', 'football');

    // OBSŁUGA BŁĘDU Z POŁĄCZENIEM (JEŻELI WYSTĘPUJE)
    if (!$con) {
        echo mysql_connect_error();
    }

    if (isset($_POST['klub1']) && isset($_POST['klub2']) && isset($_POST['gole1']) && isset($_POST['gole2']) && isset($_POST['data'])) {
        $klub1 = $_POST['klub1'];
        $klub2 = $_POST['klub2'];
        $gole1 = $_POST['gole1'];
        $gole2 = $_POST['gole2'];
        $data = $_POST['data'];
        $matchResult = ''.$gole1.' - '.$gole2.'';

        // ZAPYTANIE SQL
        $sql = "INSERT INTO kluby_pilkarskie (id, klub1, klub2, gole1, gole2, data, wynik) VALUES (NULL, '$klub1', '$klub2', '$gole1', '$gole2', '$data', '$matchResult');";

        // WYSYŁANIE ZAPYTANIA DO BAZY
        if ($con->query($sql)) {
            echo "Mecz został dodany pomyślnie! <br>";
        }
    }

    if (isset($_GET['gole'])) {
        $gole = $_GET['gole'];

        if (isset($_GET['mniej'])) {
            $sql = "SELECT * FROM kluby_pilkarskie WHERE gole1 < '$gole' AND gole2 < '$gole'";
        } else if (isset($_GET['wiecej'])) {
            $sql = "SELECT * FROM kluby_pilkarskie WHERE gole1 > '$gole' AND gole2 > '$gole'";
        }  

        $result = mysqli_query($con, $sql);
        while ($row = mysqli_fetch_array($result)) {
            $klub1 = $row['klub1'];
            $klub2 = $row['klub2'];
            $matchResult = $row['wynik'];
            $data = $row['data'];
            echo "Mecz zespołów <b>$klub1</b> oraz <b>$klub2</b> z dnia <b>$data</b> zakończył się wynikiem <b>$matchResult</b> <br>";
        } 
    }

    if (isset($_GET['klub'])) {
        $klub = $_GET['klub'];
        $sql = "SELECT * FROM kluby_pilkarskie WHERE klub1 = '$klub' OR klub2 = '$klub';";
        $result = mysqli_query($con, $sql);
        while ($row = mysqli_fetch_array($result)) {
            $klub1 = $row['klub1'];
            $klub2 = $row['klub2'];
            $matchResult = $row['wynik'];
            $data = $row['data'];
            echo "Mecz zespołów <b>$klub1</b> oraz <b>$klub2</b> z dnia <b>$data</b> zakończył się wynikiem <b>$matchResult</b> <br>";
        }
    }

    