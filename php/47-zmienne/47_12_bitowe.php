<?php
// PRZYKLAD 47.12 - operatory bitowe: & | ^ ~ << >>
$x=125;
$y=41;
$iloczyn_bitowy=$x & $y;
$suma_bitowa=$x | $y;
$roznica_sym=$x^$y;
$negacja=~$x;
echo "Iloczyn bitowy $x i $y wynosi $iloczyn_bitowy<br>";
echo "Suma bitowa $x i $y wynosi $suma_bitowa<br>";
echo "Roznica bitowa $x i $y wynosi $roznica_sym<br>";
echo "Negacja $x wynosi $negacja<br>";
// 125 i 41 -> iloczyn 41, suma 125, roznica 84, negacja -126
?>
