<?php
// PRZYKLAD 53.3 - fread
$plik=fopen("wizytowka.txt","r");
$tresc=fread($plik,4);
echo $tresc;
fclose($plik);
?>
