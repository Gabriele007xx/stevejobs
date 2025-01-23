function menu() {
    clear
    echo "1) Addizione"
    echo "2) Sottrazione"
    echo "3) Moltiplicazione"
    echo "4) Divisione"
    echo "5) Esci"
}

function addizione() {
clear
somma=0
echo "Quanti numeri vuoi sommare?"
read n
until [[ "$n" =~ ^[0-9]+$ ]];
do
    echo "non è un numero, inserire di nuovo un numero:"
    read n
done
for ((i=0; i<n; i++))
do
    echo "Inserisci il valore $((i+1))"
    read num
    until [[ "$num" =~ ^[0-9]+$ ]];
    do
        echo "non è un numero, inserire di nuovo un numero:"
        read num
    done
    somma=$((somma+num))
done
echo "La somma è $somma"
read -p "Premi un tasto per continuare..."
}

function sottrazione() {
clear
sottrazione=0
echo "Quanti numeri vuoi sottrarre?"
read n
until [[ "$n" =~ ^[0-9]+$ ]];
do
    echo "non è un numero, inserire di nuovo un numero:"
    read n
done
read num
until [[ "$num" =~ ^[0-9]+$ ]];
do
    echo "non è un numero, inserire di nuovo un numero:"
    read nm
done
sottrazione=n
for ((i=1; i<n; i++))
do
    echo "Inserisci il valore $((i+1))"
    read num
    until [[ "$num" =~ ^[0-9]+$ ]];
    do
        echo "non è un numero, inserire di nuovo un numero:"
        read num
    done
    somma=$((somma+num))
done
echo "La sottrazione è $sottrazone"
read -p "Premi un tasto per continuare..."
}

function moltiplicazione() {
clear
prodotto=1
echo "Quanti numeri vuoi moltiplicare?"
read n
until [[ "$n" =~ ^[0-9]+$ ]];
do
    echo "non è un numero, inserire di nuovo un numero:"
    read n
done
for ((i=0; i<n; i++))
do
    echo "Inserisci il valore $((i+1))"
    read num
    until [[ "$num" =~ ^[0-9]+$ ]];
    do
        echo "non è un numero, inserire di nuovo un numero:"
        read num
    done
    prodotto=$((somma+num))
done
echo "Il prodotto è $prodotto"
read -p "Premi un tasto per continuare..."
}

function divisione() {
    clear
    echo "Inserisci il primo numero"
    read num1
    until [[ "$num1" =~ ^[0-9]+$ ]];
    	do
        echo "non è un numero, inserire di nuovo un numero:"
        read num
    done
    echo "Inserire il secondo numero:"
    read num2
    until [[ "$num2" =~ ^[0-9]+$ ]];
    do
        echo "non è un numero, inserire di nuovo un numero:"
        read num
    done
    if [[ $num2 -eq 0 ]]; then
    	echo "La divisione è impossibile"
    else
    	echo "La divisione è $((num1/num2))"
     fi
     read -p "Premi un tasto per continuare..."
}

# ciclo principale
while true
do
    menu
    read -p "Inserisci una scelta (1-5): " scelta 
    if [[ "$scelta" =~ ^[1-5]$ ]]; then
        case $scelta in 
            1) 
            addizione
            ;;
            2) 
            sottrazione
            ;;
            3) 
            moltiplicazione
            ;;
            4) 
            divisione
            ;;
            5) 
            echo "Uscita dal programma..." 
        break 
        ;;
        esac
    else
        echo "Scelta non valida"
        sleep 2
    fi
    done
