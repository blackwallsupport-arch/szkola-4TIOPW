<?php
// PRZYKLAD 49.12 - ASORT (wg wartosci) i KSORT (wg klucza) dla asocjacyjnej
$tab=array("Alicja"=>"Kowalska","Paulina"=>"Nowak","Katarzyna"=>"Malinowska","Malgorzata"=>"Nowak","Agnieszka"=>"Czekalska","Jolanta"=>"Brzeczkowska","Celina"=>"Kowalska");
echo "<b>Tablica przed sortowaniem:</b><br>";
foreach ($tab as $klucz=>$x)
{
  echo "$x $klucz<br>";
}
asort($tab);
echo "<b>Tablica po sortowaniu wedlug wartosci:</b><br>";
foreach ($tab as $klucz=>$x)
{
  echo "$x $klucz<br>";
}
ksort($tab);
echo "<b>Tablica po sortowaniu wedlug klucza:</b><br>";
foreach ($tab as $klucz=>$x)
{
  echo "$x $klucz<br>";
}
?>
