<?php
// PRZYKLAD 53.1 - fopen+fwrite+fclose
$plik=fopen("wizytowka.txt","a");
$dane="Anna Kowalska";
fwrite($plik,$dane);
fclose($plik);
?>
