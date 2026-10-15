<?php
// PRZYKLAD 47.6 - heredoc
$pytanie="<br>Czy znasz odpowiedz?";
$zagadka=<<<EOD
Co stanie sie o polowe wieksze, gdy postawimy to do gory nogami? $pytanie
EOD;
echo $zagadka;
?>
