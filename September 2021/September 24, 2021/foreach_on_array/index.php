<?php
$myArray = [
    "TEB", 
    "Edukacja", 
    "Szkoła", 
    "Lasy Państwowe", 
    "Donald Tusk", 
    "Jego Pluralistyczność", 
    "Polski samochód elektryczny"
];

echo "<ol>";
foreach($myArray as $element) {
    echo "<li>$element</li>";
}
echo "</ol>";
