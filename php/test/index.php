<?php
include('config.php');
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Test</title>
</head>
<body>
    <div>
        <h1>Test</h1>
        <?php
          if(isset($_POST['descrizione']))
          {
              echo $_POST['descrizione'];
              $conn->query("INSERT INTO cose_da_fare (descrizione) VALUES ('".$_POST['descrizione']."')");
          }
        ?>
        <form method="post" id="form">
            <input type="text" name="descrizione" id="descrizione"><br>
            <input type="submit" value="Submit">
        </form>
    </div>
    <script>
        document.getElementById("form").addEventListener('submit', onSubmit);
        function onSubmit() {
            if (ValidateInput()) {
                document.getElementById("form").submit();
            }
        }

        function ValidateInput() {
            let descrizione = document.getElementById('descrizione').value;
            if (descrizione == '') {
                alert('Inserisci una descrizione');
                return false;
            }
            return true;
        }
        </script>
</body>
</html>