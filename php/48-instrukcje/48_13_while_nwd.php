<?php
// PRZYKLAD 48.13 - WHILE NWD (odejmowanie) - aby roznica byla dodatnia zamiana
$x = 345;
$y = 27;
while ($x != $y)
{
  if ($x < $y)
  //zamiana liczb miejscami, aby roznica byla dodatnia
  {$pomoc = $x; $x = $y; $y = $pomoc;}
  $x = $x - $y;
}
echo "Najwiekszy wspolny dzielnik wynosi: $x";
?>
