<?php
// PRZYKLAD 51.7 - PDO laczenie
$conn="mysql:host=localhost;dbname=firma";
try
{
  $pol=new PDO($conn,"root","");
  echo "Udalo sie polaczyc z serwerem";
}
catch(PDOException $x)
{
  echo 'Blad polaczenia '.$x->getMessage();
  exit;
}
?>
