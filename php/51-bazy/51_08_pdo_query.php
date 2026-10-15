<?php
// PRZYKLAD 51.8 - PDO query + foreach
$conn="mysql:host=localhost;dbname=firma";
try
{
  $pol=new PDO($conn,"root","");
  $query=$pol->query('SELECT imie, nazwisko, pensja FROM pracownicy WHERE zawod="grafik" ORDER BY pensja DESC');
  foreach ($query as $wiersz)
  {
    echo $wiersz['imie']." ".$wiersz['nazwisko']." ".$wiersz['pensja']."<br>";
  }
}
catch(PDOException $x)
{
  echo 'Blad polaczenia '.$x->getMessage();
  exit;
}
?>
