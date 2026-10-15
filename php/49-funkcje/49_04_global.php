<?php
// PRZYKLAD 49.4 - global
$x=7;
function pole()
{
  global $x; // $x jest zmienna globalna
  $pole=$x*$x;
  echo "Pole kwadratu o boku $x wynosi ".$pole;
}
pole();
?>
