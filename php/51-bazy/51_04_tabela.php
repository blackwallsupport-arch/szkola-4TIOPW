<!DOCTYPE html>
<html>
<head><meta charset="utf-8"><title>Baza danych o pracownikach</title>
<style>
table,td,th{border:2px solid grey;}
th{background-color:#dddddd;}
th,td{width:100px;}
</style>
</head>
<body>
<?php
// PRZYKLAD 51.4 - kobiety informatyczki? tabela Imie/Nazwisko/Data
$conn=mysqli_connect('localhost','root','','firma');
if (!$conn)
{
  exit("Blad polaczenia z serwerem");
}
else
{
  $pyt=mysqli_query($conn,'SELECT imie, nazwisko, data_urodzenia from pracownicy where zawod="informatyk" and plec="k"');
  $il_wierszy=mysqli_num_rows($pyt);
  echo "<table><tr><th>Imie</th><th>Nazwisko</th><th>Data urodzenia</th></tr>";
  for($i=0;$i<$il_wierszy;$i++)
  {
    $result=mysqli_fetch_array($pyt);
    echo "<tr><td>".$result['imie']."</td><td>".$result['nazwisko']."</td><td>".$result['data_urodzenia']."</td></tr>";
  }
  echo "</table>";
  mysqli_close($conn);
}
?>
</body>
</html>
