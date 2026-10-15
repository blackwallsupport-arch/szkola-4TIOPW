<?php
// PRZYKLAD 53.2 - losowe 10 liczb do pliku
$plik=fopen("liczby.txt","a");
for($i=0;$i<10;$i++)
{
  $tab[$i]=rand(10,20);
  fwrite($plik,$tab[$i]."\n");
}
fclose($plik);
?>
