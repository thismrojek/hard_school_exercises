<?php
    $number = isset($_POST['number']) ? $_POST['number'] : '';
    $digit = isset($_POST['digit']) ? $_POST['digit'] : '';

    $digits = [];

    if ($number) {
        $digits = str_split($number);
        $digitsString = implode(', ', $digits);
        $numberLength = strlen($number);
        echo "Liczba $number składa się z $numberLength cyfr, są to: $digitsString.";
    }

?>

<form action="" method="POST">
    <input type="text" name="number">
    <input type="text" name="digit">
    <input type="submit" value="Sprawdź">
</form>