function menu() {
    clear
    echo "1) Addizione"
    echo "2) Sottrazione"
    echo "3) Moltiplicazione"
    echo "4) Divisione"
    echo "5) Esci"
}

# ciclo principale
while true
do
    menu
    read -p "Inserisci una scelta (1-5): " scelta 
    if [["$scelta" =~ ^[1-5]$ ]]; then
        case $scelta in 
            1) 
            addizione ;;
            2) 
            sottrazione ;;
            3) 
            moltiplicazione ;;
            4) 
            divisione ;;
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

function addizione() {
clear
somma=0
echo "Quanti numeri vuoi sommare?"
read n
while "$n" =! ^[1-99999]
do
    echo "non è un numero, inserire di nuovo un numero:"
    read n
done
for ((i=0; i<n; i++))
do
    echo "Inserisci il valore $((i+1))"
    read num
    while "$num" =! ^[-99999-99999]
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
echo "Quanti numeri vuoi sottrare?"
read n
while "$n" =! ^[1-99999]
do
    echo "non è un numero, inserire di nuovo un numero:"
    read n
done
for ((i=0; i<n; i++))
do
    echo "Inserisci il valore $((i+1))"
    read num
    while "$num" =! ^[-99999-99999]
    do
        echo "non è un numero, inserire di nuovo un numero:"
        read num
    done
    sottrazione=$((sottrazione-num))
done
echo "La sottrazione è $somma"
read -p "Premi un tasto per continuare..."
}

function moltiplicazione() {
clear
somma=1
echo "Quanti numeri vuoi sommare?"
read n
while "$n" =! ^[1-99999]
do
    echo "non è un numero, inserire di nuovo un numero:"
    read n
done
for ((i=0; i<n; i++))
do
    echo "Inserisci il valore $((i+1))"
    read num
    while "$num" =! ^[-99999-99999]
    do
        echo "non è un numero, inserire di nuovo un numero:"
        read num
    done
    somma=$((somma*num))
done
echo "La somma è $somma"
read -p "Premi un tasto per continuare..."
}

function divisione() {
    clear
    echo "Inserisci il primo numero"
    read num1
	echo "non è un numero, inserire di nuovo il numero:"        
    while "$numero" =! ^[-99999-99999]
    do
	read  num1
     done
     while "$num2" =! ^[-99999-99999]
     do
        echo "non è un numero, inserire di nuovo un numero:"
	read  num2
     done
    echo "La divisione è $((num1%num2))"
}
