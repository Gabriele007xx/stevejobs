#! /bin/bash/
function addizione()
{
clear
somma=0
echo "Quanti numeri vuoi sommare?"
read n
for ((i=0; i<n; i++))
do
    echo "Inserisci il valore $((i+1))"
    read num
    somma=$((somma+num))
done
echo "La somma è $somma"
read -p "Premi un tasto per continuare..."
}