<?php
// PRZYKLAD 49.16 - strtoupper, strtolower, ucfirst, ucwords, strlen, trim
$tekst="Alicja w krainie czarow i Alicja po drugiej stronie lustra.";
echo "<u>Oryginalny tekst:</u><br>".$tekst."<br>";
echo "<u>Tekst po zastosowaniu strtoupper:</u><br>".strtoupper($tekst)."<br>";
echo "<u>Tekst po zastosowaniu strtolower:</u><br>".strtolower($tekst)."<br>";
echo "<u>Tekst po zastosowaniu ucfirst:</u><br>".ucfirst($tekst)."<br>";
echo "<u>Tekst po zastosowaniu ucwords:</u><br>".ucwords($tekst)."<br>";
echo "Dlugosc tekstu wynosi: ".strlen($tekst);
?>
