<?php
// PRZYKLAD 49.2 - return
function wyrazenie($x, $y, $z)
{
  $wynik=2*$x-0.5*$y+$z/2;
  echo "Wartosc wyrazenia dla liczb $x, $y, $z wynosi $wynik";
  return $wynik;
}
wyrazenie(1,2,4);
?>
