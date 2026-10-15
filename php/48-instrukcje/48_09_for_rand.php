<?php
// PRZYKLAD 48.9 - FOR losuje 20 liczb 1..20 i sumuje
$suma=0;
for ($i=1;$i<=20; $i++)
{
  $tab[$i]=rand(1,20);
  echo $tab[$i]."\t";
  $suma+=$tab[$i];
}
echo "<br>Suma wartosci tablicy wynosi $suma";
?>
