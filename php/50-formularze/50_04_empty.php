<?php
// PRZYKLAD 50.4 - empty() - puste vs uzupelnione
if (!empty($_POST['imie']) && !empty($_POST['nazwisko']) && !empty($_POST['mail']))
{
  echo "Wpisales wszystkie dane";
}
?>
