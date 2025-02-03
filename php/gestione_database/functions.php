<?php
require_once 'config.php';

function getTableData($table)
{
    global $conn;
    $stmt=$conn->prepare("SELECT * FROM $table");
    $stmt->execute();
    return $stmt->fetchAll();

}
?>