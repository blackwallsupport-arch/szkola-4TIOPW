<?php
// PRZYKLAD 49.9 - funkcje w osobnym pliku + require/include
// plik funkcje.php:
function trojkat($a,$h)
{
  echo "Pole trojkata o podstawie $a i wysokosci $h wynosi: ".(($a*$h)/2);
}
function prostokat($a,$b)
{
  echo "Pole prostokata o bokach $a i $b wynosi: ".($a*$b);
}
function trapez($a,$b,$h)
{
  echo "Pole trapezu o podstawach $a oraz $b i wysokosci $h wynosi: ".((($a+$b)*$h)/2);
}
function kolo($r)
{
  echo "Pole kola o promieniu $r wynosi: ".(3.14*$r*$r);
}
?>
