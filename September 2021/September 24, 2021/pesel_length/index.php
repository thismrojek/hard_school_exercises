<?php
// PESEL pobieram z adresu url (np. http://desktop.localhost/index.php?pesel=72090678632), za pomoca parametru
// Sprawdzam tez, czy nie jest pusty i przypisuje go do zmiennej
$pesel = isset($_GET['pesel']) ? $_GET['pesel'] : 0;

// Teraz sprawdzam, czy dlugosc PESEL jest prawidlowa
if (strlen($pesel) == 11) {
	echo 'PESEL jest poprawny.';
} else {
	echo 'PESEL jest niepoprawny.';
}