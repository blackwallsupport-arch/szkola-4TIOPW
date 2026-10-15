<?php
// PRZYKLAD 51.3 - mysqli_query + mysqli_fetch_array + mysqli_num_rows
$conn=mysqli_connect('localhost','root','','firma');
if (!$conn)
{
  exit("Blad polaczenia z serwerem");
}
else
{
  $pyt=mysqli_query($conn,'SELECT nazwisko,imie,pensja FROM pracownicy WHERE nazwisko like "A%" ORDER by nazwisko');
  echo "<ol>";
  while ($result=mysqli_fetch_array($pyt))
  {
    echo "<li>".$result['nazwisko']." ".$result['imie']." ".$result['pensja']." zl</li>";
  }
  echo "</ol>";
  mysqli_close($conn);
}
?>
