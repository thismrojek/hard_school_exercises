<?php
// TWORZENIE POŁĄCZENIA Z SERWEREM MYSQL
$con = mysqli_connect('HOSTNAME','USERNAME','PASSWORD', 'DATABASE');

// OBSŁUGA BŁĘDU Z POŁĄCZENIEM (JEŻELI WYSTĘPUJE)
if (!$con) {
    echo mysql_connect_error();
}

// ZAPYTANIE SQL
$sql = "SELECT * FROM table_name";

// WYSYŁANIE ZAPYTANIA DO BAZY
$result = mysqli_query($con, $sql);

// WYŚWIETLANIE WIERSZY ZA POMOCĄ PĘTLI
while ($row = mysql_fetch_array($result)) {
    echo $row['column1'];
    echo $row['column2'];
    echo ', ';
}