<?php
// PRZYKLAD 49.5 - $GLOBALS
$x=7;
function pole()
{
  $x=$GLOBALS['x'];
  $pole=$x*$x;
  echo "Pole kwadratu o boku $x wynosi ".$pole;
}
pole();
?>
