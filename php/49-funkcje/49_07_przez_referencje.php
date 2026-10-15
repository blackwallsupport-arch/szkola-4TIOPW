<?php
// PRZYKLAD 49.7 - przekazywanie przez referencje (&)
function zwieksz_liczbe(&$x)
{ //zwiekszenie liczby o 6
  $x+=6;
}
$x=5;
echo "Przed wywolaniem funkcji x=". $x;
zwieksz_liczbe($x);
echo "<br>Po wywolaniu funkcji x=". $x; // 11
?>
