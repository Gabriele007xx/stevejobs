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
              echo "<p>Descrizione: ".$_POST['descrizione'] . "</p>";
          }
        ?>
        <form method="post">
            <input type="text" name="descrizione"><br>
            <input type="submit" value="Submit">
        </form>
    </div>
</body>
</html>