<?php
    // Definuję tablicę
    $myVeryFirstArray = [2, 1, 3, 7, 0];

    // Sortuję tablicę (opcjonalnie)
    sort($myVeryFirstArray);

    // Sprawdzam, czy z formularza "przyszła jakakolwiek wartość - metoda isset()
    if (isset($_POST['value'])) {
        $topValue = max($myVeryFirstArray);
        $valueToCheck = $_POST['value'];

        // Sprawdzam, czy element istnieje w tablicy
        if (in_array($valueToCheck, $myVeryFirstArray)) {
            echo "Ta wartość istnieje w tablicy. ";
        } else {
            echo "Ta wartość nie istnieje w tablicy. ";
        }

        // Sprawdzam, czy potęga podanej liczby jest mniejsza od największej wartości w tablicy
        if ($topValue > pow($valueToCheck, 2)) {
            echo "Potęga podanej liczby jest mniejsza od największej wartości w tablicy.";
        }
    }
?>

<!-- Formularz do zadania -->
<form method="POST">
    <input name="value" placeholder="Podaj wartość" required>
    <input type="submit" value="Sprawdź!">
</form>

