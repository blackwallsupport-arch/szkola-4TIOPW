<?php
// PRZYKLAD 48.5 - switch kalkulator
$dzialanie='*';
$x=32;
$y=5;
switch($dzialanie)
{
  case '+':
    echo "Suma $x oraz $y wynosi ".($x+$y);
    break;
  case '-':
    echo "Roznica $x oraz $y wynosi ".($x-$y);
    break;
  case '*':
    echo "Iloczyn $x oraz $y wynosi ".($x*$y);
    break;
  case '/':
    if ($y!=0) echo "Iloraz $x przez $y wynosi ".($x/$y);
    else echo "Nie moge wykonac dzielenia po y=0!";
    break;
  case '%':
    echo "Reszta z dzielenia $x przez $y wynosi ".($x%$y);
    break;
  default:
    echo "Nie wybrales zadnego dzialania";
    break;
}
?>
