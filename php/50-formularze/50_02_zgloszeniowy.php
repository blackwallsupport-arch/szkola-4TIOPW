<!DOCTYPE html>
<html>
<head><meta charset="utf-8"><title>Formularz zgloszeniowy</title></head>
<body>
<div id="formularz">
<!-- PRZYKLAD 50.2 - imie, nazwisko, wyksztalcenie, e-mail -->
<form action="" method="post">
<table>
<tr><td>Imie:</td><td><input type="text" name="imie"></td></tr>
<tr><td>Nazwisko:</td><td><input type="text" name="nazwisko"></td></tr>
<tr><td>Wyksztalcenie:</td><td><select name="wiedza">
<option>wyzsze</option><option>srednie</option><option>podstawowe</option>
</select></td></tr>
<tr><td>Adres e-mail:</td><td><input type="email" name="mail"></td></tr>
<tr><td colspan="2" style="text-align: right;"><input type="submit" value="Zapisz uczestnika"></td></tr>
</table>
</form>
</div>
<div id="wynik">
<?php
$imie=$_POST['imie'];
$nazwisko=$_POST['nazwisko'];
$wiedza=$_POST['wiedza'];
$mail=$_POST['mail'];
echo "<p>Zapisalismy uzytkownika o nastepujacych danych:</p>";
echo "<h3>$imie $nazwisko</h3>";
echo "<h4>Wyksztalcenie: $wiedza</h4>";
echo "<h4>E-mail: $mail</h4>";
?>
</div>
</body>
</html>
