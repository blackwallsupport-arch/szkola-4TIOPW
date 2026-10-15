<?php
// PRZYKLAD 52.3 - usuwanie cookie: czas w przeszlosci
setcookie('moje','ciasteczko',time()-100);
setcookie("moje","");
setcookie("moje", FALSE);
?>
