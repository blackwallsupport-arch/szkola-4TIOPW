<?php
// PRZYKLAD 51.5 - INSERT + affected_rows
$conn=mysqli_connect('localhost','root','','firma');
if (!$conn)
{
  exit("Blad polaczenia z serwerem");
}
else
{
  mysqli_query($conn,"INSERT into placowki(id_placowki,nazwa,miasto,adres) VALUES (7,'Iks','Warszawa','Mickiewicza 8')");
  $ile_dodano=mysqli_affected_rows($conn);
  echo "Liczba dodanych rekordow: ".$ile_dodano;
}
mysqli_close($conn);
?>
