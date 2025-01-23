#!/bin/bash

echo "Dammi il nome del file"
read file

if [[ ! -f "$file" ]]; then
echo "Il file $file non è stato trovato. Uscita..."
exit 1
fi

content=$(<"$file");

echo "Contenuto del file:"
echo " "
echo "$contenuto"
echo " "

read -p "Premere un pulsante per continuare..."

echo "$content" > calcolatrice.txt
