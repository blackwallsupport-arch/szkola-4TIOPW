<?php
// PRZYKLAD 48.15 - FOREACH suma tablicy
$s=0;
$tab=[7,45,23,78,90,12,34,7,-4,3];
foreach ($tab as $w)
{
  echo $w."<br>";
  $s+=$w;
}
echo "Suma wartosci w tablicy wynosi $s";
?>
