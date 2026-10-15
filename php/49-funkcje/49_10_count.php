<?php
// PRZYKLAD 49.10 - COUNT / SIZEOF
$tab=array("Alicja","Jolanta","Katarzyna","Malgorzata","Agnieszka");
$dl=count($tab); //lub sizeof($tab)
echo "W tablicy znajduje sie $dl elementow i sa nimi:<br>";
for($i=0;$i<$dl;$i++)
{
  echo "tab[$i]=$tab[$i]<br>";
}
?>
