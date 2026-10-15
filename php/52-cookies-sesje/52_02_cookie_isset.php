<?php
// PRZYKLAD 52.2 - odczyt $_COOKIE + isset
if (!isset($_COOKIE['moje']))
{
  setcookie('moje','ciachol');
  $info="Ciasteczko nie jest ustawione";
}
else
{
  $info="Ciasteczko jest ustawione, a jego wartoscia jest ".$_COOKIE['moje'];
}
?>
<!doctype html>
<html>
<head>
<meta charset="utf-8" />
<title>Ciasteczka</title>
</head>
<body>
<?php
echo $info;
?>
</body>
</html>
