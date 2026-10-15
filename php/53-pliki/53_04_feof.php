<?php
// PRZYKLAD 53.4 - feof + fgets: wyswietl kazda cyfre w oddzielnym wierszu
$plik=fopen("liczby.txt","r");
while(!feof($plik))
{
  $linia=fgets($plik);
  echo $linia."<br>";
}
fclose($plik);
?>
