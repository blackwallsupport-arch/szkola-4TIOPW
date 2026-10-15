<?php
// PRZYKLAD 47.7 - nowdoc (jak heredoc ale nie interpretuje zmiennych)
$liczba=5*5-16/8;
$komunikat=<<<'EOD'
Wartosc zmiennej liczba wynosi $liczba
EOD;
echo $komunikat;
$nowy=<<<'EOD'
<br>Wartosc zmiennej liczba wynosi $liczba
EOD;
echo $nowy;
?>
