`require_once` memorizza e mantiene in memoria le variaibli del file php a differenza di `include`.

`__DIR__`: variabile che contiene il path assoluto.

Come in javascript c'è l'operatore `===` che confronta il tipo e contenuto.

## PARAMETRI FACOLTATIVI E DEFAULT

```
function saluta2($nome = "Ospite") {
return "Ciao, $nome!";
}
echo saluta2(); // "Ciao, Ospite!”
```

Un altro modo è usare null come valore predefinito e verificare se il parametro è stato passato.

```
function descriviPersona($nome, $eta = null) {
if ($eta === null) {
return "La persona si chiama $nome.";
} else {
return "La persona si chiama $nome ed ha $eta anni.";
}
}
```

## Query SQL

```
$sql = "INSERT INTO utenti (nome, email) VALUES ('Mario',
'mario@example.com')";
if ($conn->query($sql) === TRUE) {
echo "Nuovo record inserito con successo";
} else {
echo "Errore: " . $conn->error;
}
```

LEGGERE DATI:

```
$sql = "SELECT id, nome, email FROM utenti";
$result = $conn->query($sql);
if ($result->num_rows > 0) {
while ($row = $result->fetch_assoc()) {
echo "ID: " . $row["id"] . " - Nome: " . $row["nome"]
. " - Email: " . $row["email"] . "<br>";
}
} else {
echo "Nessun risultato";
}
```

AGGIORNARE DATI:

```
$sql = "UPDATE utenti SET email='nuovo@example.com' WHERE
id=1";
$conn->query($sql);
ELIMINARE DATI:
$sql = "DELETE FROM utenti WHERE id=1";
$conn->query($sql);
```

### Preparare Query Sicure con Prepared Statements

Per prevenire SQL Injection:
$stmt = $conn->prepare("INSERT INTO utenti (nome, email)
VALUES (?, ?)");
$stmt->bind_param("ss", $nome, $email);
$nome = "Luca";
$email = "luca@example.com";
$stmt->execute();

## Usare i cookie

```
setcookie("user", "Mario", time() + 3600); // Cookie dura 1 ora
echo $_COOKIE["user"]; // Leggere cookie
```