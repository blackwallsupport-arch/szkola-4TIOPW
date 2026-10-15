<?php
// PRZYKLAD 52.4 - sesja: start + session_id + destroy
session_start();
echo "Identyfikator sesji: ".session_id();
session_destroy();
?>
