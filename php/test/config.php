<?php
$db='';
$password='';
$host='localhost';
$username='root';

try
{
    $conn=new PDO("mysql:host=$host;dbname=$db",$username,$password);
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
}
catch(PDOException $e)
{
    echo "Errore: ".$e->getMessage();
}
?>