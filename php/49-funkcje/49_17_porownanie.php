<?php
// PRZYKLAD 49.17 - strstr, substr, strtok, strcmp
$tekst="Anna Nowak, ul. Jana Kochanowskiego 50, 92-510 Lodz, tel. 654-654-654";
echo "<u>Adres:</u> ".strstr($tekst, "ul.")."<br>";
echo "<u>Telefon:</u> ".substr($tekst,58)."<br>";
echo "<b>PODZIELONY TEKST:</b><br>";
$podciag=strtok($tekst,",");
while(is_string($podciag))
{
  if($podciag)
  {
    echo $podciag."<br>";
  }
  $podciag=strtok(";");
}
?>
