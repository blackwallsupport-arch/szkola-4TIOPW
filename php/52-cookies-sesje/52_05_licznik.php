<?php
// PRZYKLAD 52.5 - licznik odwiedzin w sesji
session_start();
if (!isset($_SESSION['liczba']))
{
  $_SESSION['liczba']=0;
}
else
{
  $_SESSION['liczba']=$_SESSION['liczba']+1;
  echo 'Odwiedziles nas: '.$_SESSION['liczba'];
}
?>
