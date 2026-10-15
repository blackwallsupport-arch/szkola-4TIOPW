<?php
// PRZYKLAD 49.3 - zasieg lokalny (blad: undefined variable)
$x=7;
function pole()
{
  $pole=$x*$x;
  echo "Pole kwadratu o boku $x wynosi ".$pole;
}
pole();
?>
