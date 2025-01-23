echo "Editor di testo"
echo "Dammi il nome del file: "
read nome
while [[ -f "$nome" ]]
do
echo "Il file già esiste, inserire un nuovo nome:"
read nome
done
touch $nome
echo "Inserire prima riga:"
read riga
echo $riga > $nome

until [[ "$opzione" =~ "fine" ]]
do
echo "Dammi la riga:"
read riga
echo $riga >> $nome
echo "Hai finito? Scrivi fine per finire"
read opzione
done

content=$(<"$nome");
echo "Contenuto del file:"
echo " "
echo $content
echo " "

echo "Numero righe: "
wc -l $nome
echo "Numero caratteri:"
wc -c $nome
echo "Numero parole:"
wc -w $nome

echo "Inserire il nome della copia del file:"
read nuovo
while [[ -f "$nuovo" ]]
do
echo "Il file esiste già. Inserire un nome."
read nuovo
done

cp $nome $nuovo
echo "File copiato!"

echo "Inserire il nuovo nome del file:"
read n
while [[ -f "$n" ]]
do
echo "Il file esiste già. Inserire un nome."
read n
done

mv $nome $n
echo "File rinominato!"

rm $nuovo

echo "File eliminato!"




