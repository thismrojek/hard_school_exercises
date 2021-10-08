<!-- Formularz do zadania -->
<form method="POST">
    <input name="values" placeholder="Podaj wartości oddzielone przecinkami (np. 2,3,4,6)" required style="width: 350px">
    <input type="submit" value="Sprawdź!">
</form>


<?php
    $userInput = isset($_POST['values']) ? $_POST['values'] : '';
    $data = explode(',', $userInput);
    sort($data);

    function getMinThreeElements($array) {
        sort($array);
        return implode(', ', array_splice($array, 0, 3));
    };

    function getMaxThreeElements($array) {
        arsort($array);
        return implode(', ', array_splice($array, 0, 3));
    };

    function getMedian($array) {
        if (count($array) % 2 == 1) {
            return $array[count($array) / 2];
        } else {
            return ($array[count($array) / 2] + $array[count($array) / 2 - 1]) / 2;
        }
    }

    if ($userInput) {
        echo 'Najmniejszy element w tablicy: '.min($data).'<br>';
        echo 'Najwiekszy element w tablicy: '.max($data).'<br>';
        echo 'Średnia wartość elementów w tablicy: '.array_sum($data) / count($data).'<br>';
        echo 'Liczba 3 wystepuje w tablicy '.array_count_values($data)['3'].' razy<br>';
        echo 'Posortowana tablica w porzadku rosnacym: '.implode(', ', $data).'<br>';
        echo 'Mediana tej tablicy wynosi: '.getMedian($data).'<br>';
        echo 'Trzy najmniejsze elementy: '.getMinThreeElements($data).'<br>';
        echo 'Trzy największe elementy: '.getMaxThreeElements($data).'<br>';

        foreach ($data as $index => $number) {
            $data[$index] = pow($number, 2);
        }

        echo 'Elementy po podniesieniu do kwadratu: '.implode(', ', $data).'<br>';

        $evenNumbersCount = 0;
        $divisedBy3Count = 0;

        foreach ($data as $number) {
            $number % 2 == 0 ? $evenNumbersCount++ : null;
            $number % 3 == 0 ? $divisedBy3Count++ : null;
        }

        $oddNumbersCount = count($data) - $evenNumbersCount;

        echo 'Liczba elementow parzystych: '.$evenNumbersCount.'<br>';
        echo 'Liczba elementow nieparzystych: '.$oddNumbersCount.'<br>';
        echo 'Liczba elementow podzielnych bez reszty przez 3: '.$divisedBy3Count.'<br>';
    }