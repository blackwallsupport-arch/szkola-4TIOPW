<?php
// PRZYKLAD 49.13 - GETDATE
$data=getdate();
$dzien=$data["mday"]; //pobranie dnia miesiaca
$miesiac=$data["mon"]; //pobranie miesiaca
$rok=$data["year"]; //pobranie roku
if ($dzien<10) $dzien="0".$dzien;
if ($miesiac<10) $miesiac="0".$miesiac;
echo "Dzisiaj jest $dzien-$miesiac-$rok";
?>
