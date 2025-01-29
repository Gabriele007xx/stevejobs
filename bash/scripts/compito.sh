#!/bin/bash
#Compito:
#Gli studenti devono creare uno script Bash che gestisca un archivio di libri. Lo script deve
#permettere di aggiungere più libri in una sola sessione, verificare la presenza di duplicati, ordinarl
#per anno di pubblicazione e salvarli in un file di testo. Inoltre, deve includere una funzione pe
#ottimizzare il file, ordinando i libri e rimuovendo i duplicati.

function aggiungi_libri(){
    # controlla se il file esiste
    if [[ ! -f archivio_libri.txt ]]
    then
        echo "Archivio non presente. Creazione di esso in corso..."
        touch archivio_libri.txt
    fi

    # controlli sui dati
    read -p "Inserisci il titolo del libro: " titolo
    until [[ "$titolo" =~ ^[A-Za-z]+$ ]]
    do
        echo "Titolo non valido. Inserire un titolo valido: "
        read titolo
    done
    read -p "Inserisci l'autore del libro: " autore
    until [[ "$autore" =~ ^[A-Za-z]+$ ]]
    do
        echo "Autore non valido. Inserire un autore valido: "
        read autore
    done
    read -p "Inserisci anno di publicazione: " anno
    until [[ $anno =~ ^[0-9]{4}$ ]]
    do
        echo "Anno non valido. Inserire un anno valido: "
        read anno
    done

    echo "$titolo, $autore, $anno" >> archivio_libri.txt
    echo "Libro aggiunto con successo!"
    read -p "Premi un tasto per continuare..."
}

function cerca_libro(){
    read -p "Inserisci il titolo del libro da cercare: " titolo
    until [[ $titolo =~ ^[A-Za-z]+$ ]]
    do
        echo "Titolo non valido. Inserire un titolo valido: "
        read titolo
    done
    # l'opzione -i sta per case insensitive
    grep -i $titolo archivio_libri.txt
    read -p "Premi un tasto per continuare..."
}

function visualizza_libri(){
    # controlla se il file esiste
    if [[ ! -f archivio_libri.txt ]]
    then
        echo "Archivio non presente. Creazione di esso in corso..."
        touch archivio_libri.txt
    fi
    echo "Contenuti dell'archivio: "
    echo "------------------------"
    content=$(<"archivio_libri.txt");
    echo "$content"
    read -p "Premi un tasto per continuare..."
}

function ottimizza_archivio(){
    # controlla se il file esiste
    if [[ ! -f archivio_libri.txt ]]
    then
        echo "Archivio non presente. Creazione di esso in corso..."
        touch archivio_libri.txt
    fi
    # sort ha anche l'opzione di rimuovere i duplicati, userò quello 

    sort archivio_libri.txt -u > archivio_libri_temp.txt
    # rinomina il file
    mv archivio_libri_temp.txt archivio_libri.txt
    echo "Archivio ottimizzato con successo!"
    read -p "Premi un tasto per continuare..."
}

# ciclo principale
while [[ scelta -ne 5 ]]; 
do
echo "Benvenuto nell'archivio di libri!"

echo "1.Aggiungi libro"
echo "2.Cerca libro"
echo "3.Visualizza tutti i libri"
echo "4.Ottimizza archivio"
echo "5.Esci"

read -p "La tua scelta: " scelta

# fino a quando scelta non è un numero tra 1 e 5 (se lo è già skip)
until [[ $scelta =~ ^[1-5]$ ]]
do
    echo "Scelta non valida. Inserire un numero valido: "
    read -p scelta
done

case $scelta in
    1)
        aggiungi_libri
    ;;
    2)
        cerca_libro
    ;;
    3)
        echo "Visualizzazione di tutti i libri..."
        visualizza_libri
    ;;
    4)
        ottimizza_archivio        
    ;;
    5)
        echo "Arrivederci!"
        break
    ;;
    esac
clear    
done