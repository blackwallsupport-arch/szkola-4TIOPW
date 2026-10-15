<?php
// PRZYKLAD 49.11 - SORT rosnaco + FOREACH
$tab=array("Alicja","Paulina","Katarzyna","Malgorzata","Agnieszka","Jolanta","Celina");
$dl=count($tab);
echo "<b>Tablica przed posortowaniem:</b><br>";
foreach ($tab as $x)
{
  echo "$x ";
}
sort($tab);
echo "<br><b>Tablica po posortowaniu:</b><br>";
foreach ($tab as $x)
{
  echo "$x ";
}
?>
