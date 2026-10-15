<?php
// PRZYKLAD 47.4 - apostrof vs cudzyslow
$kolor1="blond";
$kolor2='rude';
echo "Kasia ma wlosy $kolor1<br>"; // interpretuje zmienna -> blond
echo 'Basia ma wlosy $kolor2';     // nie interpretuje -> $kolor2
?>
