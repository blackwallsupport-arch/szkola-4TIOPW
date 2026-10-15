<?php
// PRZYKLAD 48.6 - if..elseif..else zamiast switcha
$dzialanie='*';
$x=32;
$y=0;
if ($dzialanie=='+')
  echo "Suma $x oraz $y wynosi ".($x+$y);
elseif ($dzialanie=='-')
  echo "Roznica $x oraz $y wynosi ".($x-$y);
elseif ($dzialanie=='*')
  echo "Iloczyn $x oraz $y wynosi ".($x*$y);
elseif ($dzialanie=='/')
{
  if ($y!=0) echo "Iloraz $x przez $y wynosi ".($x/$y);
  else echo "Nie moge wykonac dzielenia po y=0!";
}
elseif ($dzialanie=='%')
  echo "Reszta z dzielenia $x przez $y wynosi ".($x%$y);
else
  echo "Nie wybrales zadnego dzialania";
?>
