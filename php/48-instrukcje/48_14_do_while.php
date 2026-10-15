<?php
// PRZYKLAD 48.14 - DO..WHILE wykona sie min. raz
$i=1;
do
{
  if($i%2==0)
    echo $i."\t";
  $i++; //zwiekszenie i o jeden
} while($i<=50); //warunek zakonczenia petli
?>
