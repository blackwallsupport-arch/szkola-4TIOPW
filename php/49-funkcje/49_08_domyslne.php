<?php
// PRZYKLAD 49.8 - argumenty domyslne
function pole_trojkata($x=6, $y=4)
{
  return ($x*$y)/2;
}
$pole1=pole_trojkata();
echo "Funkcja z argumentami domyslnymi daje wartosc: ".$pole1;
$pole2=pole_trojkata(7,8);
echo "<br>Funkcja bez argumentow domyslnych daje wartosc: ".$pole2;
?>
