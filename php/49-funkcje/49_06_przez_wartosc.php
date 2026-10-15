<?php
// PRZYKLAD 49.6 - przekazywanie przez wartosc (kopia)
function zwieksz_liczbe($x)
{ //zwiekszenie liczby o 6
  $x+=6;
}
$x=5;
echo "Przed wywolaniem funkcji x=". $x;
zwieksz_liczbe($x);
echo "<br>Po wywolaniu funkcji x=". $x; // nadal 5
?>
