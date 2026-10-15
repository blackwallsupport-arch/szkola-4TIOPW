<?php
// PRZYKLAD 52.6 - logowanie.php: session + SELECT login,haslo + header
session_start();
if (isset($_POST['login']) && isset($_POST['haslo']))
{
  $login=$_POST['login'];
  $haslo=$_POST['haslo'];
  $_SESSION['rejestracja']=1;
  $conn=mysqli_connect('localhost','root','','baza1');
  $z1=mysqli_query($conn,"insert into uzytkownik values(NULL,'$login','$haslo')");
  header('location: logowanie.php');
  exit();
}
?>
<?php
// wyloguj.php
session_start();
if (isset($_SESSION['zalogowany']))
{
  echo "Jestes zalogowany jako: ".$_SESSION['zalogowany'];
}
session_destroy();
?>
<body>
<a href="rejestracja.php">Powrot do strony logowania</a>
</body>
