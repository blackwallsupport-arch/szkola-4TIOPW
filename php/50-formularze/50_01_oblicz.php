<?php
// oblicz.php do 50.01
$norm=$_POST['adult']; //pobranie liczby biletow normalnych
$ulg=$_POST['child']; //pobranie liczby biletow ulgowych
echo "<p>Dokonales nastepujacego zamowienia: </p>";
echo "<ul><li>bilety normalne: $norm sztuki</li><li>bilety ulgowe: $ulg sztuki</li></ul>";
$koszt=$norm*27+$ulg*18;
echo "<h3>Koszt Twojego zamowienia wynosi: $koszt zl.</h3>";
?>
