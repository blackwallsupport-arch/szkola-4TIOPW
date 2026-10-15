<?php
// PRZYKLAD 50.5 - walidacja is_numeric + isset, bilety 27 i 18 zl
// Sprawdzenie, czy pola zostaly uzupelnione
if (isset($_POST['adult']) && isset($_POST['child']))
{
  if (is_numeric($_POST['adult']) && is_numeric($_POST['child']))
  {
    echo "<p>Dokonales nastepujacego zamowienia: </p>";
    $norm=$_POST['adult']; //pobranie liczby biletow normalnych
    $ulg=$_POST['child']; //pobranie liczby biletow ulgowych
    echo "<ul><li>bilety normalne: $norm sztuk</li></ul>";
    echo "<li>bilety ulgowe: $ulg sztuk</li></ul>";
    $koszt=$norm*27+$ulg*18;
    echo "<h3>Koszt Twojego zamowienia wynosi: $koszt zl.</h3>";
  }
}
else
{
  echo "Nie wprowadzono wszystkich danych";
}
?>
