<?php
// PRZYKLAD 51.2 - test polaczenia + close
$conn=@mysqli_connect('localhost','root','','firma');
if (!$conn)
{
  exit("Blad polaczenia z serwerem");
}
else
{
  echo "Polaczyles sie z baza FIRMA";
}
mysqli_close($conn);
?>
