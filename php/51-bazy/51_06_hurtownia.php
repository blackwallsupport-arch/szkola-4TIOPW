<!DOCTYPE html>
<html>
<head><meta charset="utf-8"><title>Hurtownia owocow</title></head>
<body>
<section id="kontener">
<section id="baner">Hurtownia owocow</section>
<section id="prawy">
<?php
// PRZYKLAD 51.6 - hurtownia: firmy + zamowienia (SELECT + drugi SELECT)
$conn=mysqli_connect('localhost','root','','skupow');
$z1=mysqli_query($conn,'select * from firma');
echo "<p>FIRMY KORZYSTAJACE Z HURTOWNI</p>";
while ($row=mysqli_fetch_array($z1))
{
  echo "<b>".$row['Nazwa'].'</b>, '.$row['Miasto'].' '.$row['Adres'].'<br>';
}
$z2=mysqli_query($conn,'SELECT Nazwa, ilosc, Data_zamowienia from owoce, zamowienie where IdFirmy=1 and owoce.IdOwocu=zamowienie.IdOwocu order by Nazwa');
echo "<p>ZAMOWIENIA FIRMY Nowak&Kowalski</p>";
echo '<table><tr><th>Nazwa owocu</th><th>Ilosc w kg</th><th>Data</th></tr>';
while ($row=mysqli_fetch_array($z2))
{
  echo "<tr><td>".$row['Nazwa']."</td><td>".$row['ilosc']."</td><td>".$row['Datazamowienia']."</td></tr>";
}
echo "</table>";
mysqli_close($conn);
?>
</section>
</section>
</body>
</html>
