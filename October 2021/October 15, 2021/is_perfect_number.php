<?php
function isPerfectNumber($number) {
	$sum = 0;
	
	for ($i = 1; $i < $number; $i++) {
		if ($number % $i == 0) {
			$sum = $sum + $i;
		}	
	}
	
	return $sum == $number;
}

// Przykładowe wywołanie
echo isPerfectNumber(6);
echo isPerfectNumber(210);