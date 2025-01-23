In ordine di esercizio:

-Scrivere un programma in C per calcolare l'area di un rettangolo.
nota: utilizzare solo variabili di tipo int

-Il programma deve richiedere l'introduzione di 5 voti di tipo intero e restituire la media matematica

-Il programma richiede di inserire i coefficienti a,b,c di tipo intero e restituirà le due soluzioni. Si ignori la possibilità che il delta sia minore di 0 o altre eccezioni

-Il programma richiede di inserire i coefficienti a,b,c di tipo intero e restituirà le due soluzioni. Gestire la condizione con delta minore di 0

-Il programma chiederà all'operatore l'inserimento di a,b,c sotto forma di interi e restituirà le soluzioni. Gestire il caso Delta<0 e a =0

-Il programma chiede all'operatore di inserire 3 interi. Il programma deve indicare il valore del numero massimo tra quelli inseriti

-Utilizzando il ciclo FOR richiedere all'utente l'immissione di 8 numeri interi. Il programma alla fine restituirà il valore del più piccolo e del più grande.

-Il programma all'avvio chiederà all'utente il numero di voti da mediare. Successivamente tramite un ciclo FOR verrà richiesto l'inserimento dei voti. Il programma infine restituirà il valore della media (il valore in generale sarà un numero decimale con virgola)

-Il programma richiederà all'utente se si desidera l'alfabeto con lettere piccole o lettere maiuscole. Dopo il programma stamperà l'alfabeto su una riga separando ogni lettera dall'altra con un spazio.

-Il programma richiederà all'operatore la dimensione del lato. Successivamente il programma stamperà, tramite una serie di caratteri *, un quadrato pieno e dopo un quadrato vuoto (cioè stamperà solo i lati del quadrato)

-Creare un programma con quattro scelte: 1) disegna un quadrato pieno 2) disegna un quadrato vuoto 3) disegna un triangolo rettangolo pieno 4) disegna un quadrato semipieno (tipo bicchiere) Il programma richiederà di inserire il lato utilizzare la struttura switch

-Scrivere un programma in C che presenti il seguente menù: 1) Calcolare la media di due valori 2) Scambiare i due valori memorizzati nelle variabili 3) Dati i due valori dei cateti di un triangolo rettangolo, calcolare il valore dell'ipotenusa  4) Dati due valori verificare se sono uguali altrimenti indicare il maggiore dei due Se la scelta è errata si ripresenta il menù L'operatore sceglierà le voci di menù e successivamente il programma richiederà i due valori per potere effettuare i calcoli

-Il primo operatore inserisce un numero intero tra 1 e 9. Se viene inserito un numero al di fuori di questo intervallo verrà richiesto al primo operatore di reinserire un numero valido. Il gioco passa al secondo operatore che tenterà di indovinarlo.  Se lo indovina il programma esce altrimenti chiede di ritentare. Quando il secondo operatore indovinerà il valore il programma uscendo stamperà il numero di tentativi effettuati.

-All'operatore verrà richiesto di inserire 5 valori interi (che verranno memorizzati in un vettore).
Il programma stamperà orizzontalmente il vettore.
In seguito restituirà il valore Max, Min indicando le relative posizioni di inserimento
Infine stamperà il valore calcolato della Media

-All'operatore verrà richiesto di inserire un vettore di 5 elementi  (utilizzare il #define)
Dopo si presenterà un menù che proporrà:
1) Rotazione a destra del vettore
2) Rotazione a sinistra del vettore
3) Uscita
La rotazione a destra funziona che tutti gli elementi del vettore scorrono di una posizione verso destra (verso l'indice più elevato). Il valore che c'era inizialmente nell'indice più elevato verrà riportato nel valore con indice 0.
La rotazione a sinistra funziona che tutti gli elementi del vettore scorrono di una posizione verso sinistra (verso l'indice più basso). Il valore che c'era inizialmente nell'indice 0 verrà riportato nel valore con indice più alto. 
Ogni volta che si fa la scelta 1) o 2) si stamperà il vettore ruotato
esempio:
 -  dato il vettore [ 1, 2, 3, 4, 5 ]  se si selezione rotazione a destra diventa  [5, 1, 2, 3, 4]
 -  dato il vettore [ 1, 2, 3, 4, 5 ]  se si selezione rotazione a sinistra diventa  [2, 3, 4, 5, 1]

-Si definisca un valore N (numero pari).Dato un vettore di input N elementi preinizializzato il programma generarà tre vettori:
1) il primo vettore avrà i primi N/2 elementi del vettore scambiati con gli ultimi N/2 elementi del vettore .
    Ad esempio
    1 2 3 4 5 6 7 8 9 10  diventerà  6 7 8 9 10 1 2 3 4 5
2) Il secondo vettore sarà il vettore con gli elementi tutti ribaltati.
    Ad esempio:
    1 2 3 4 5 6 7 8 9 10  diventerà  10 9 8 7 6 5 4 3 2 1
3) Il terzo vettore negli elementi conterrà il valore 1 se il corrispondente elemento del vettore di input è pari, altrimenti conterrà 0
    Ad esempio:
    1 2 5 7 5 6 2 8 9 12  diventerà  0 1 0 0 0 1 1 1 0 1

-Dato un vettore precaricato di 10 elementi (si usi il #define N 10) si vuole generare il vettore calcolato come segue:
- ogni elemento del vettore calcolato è la media i 5 elementi
- l’elemento i-esimo è dato dalla media dei seguenti 5 elementi: vett[i-2] vett[i-1] vett[i] vett[i+1] vett[i+2]
- gli elementi che sono fuori dal vettore sono da considerarsi nulli
Si pensi il programma per N generico
In allegato esempio di calcolo

-Creare due matrici che contengono le tabelline una seguendo l'esempio dell'allegato 1 e l'altra seguendo l'esempio dell'allegato 2.
Il programma stamperà entrambe le due matrici

-Scrivere un programma che utilizzi le funzioni per il calcolo della media, del minino e del massimo. 
Il programma chiederà di inserire 5 valori che verranno memorizzati in un vettore.
Successivamente verrà proposto il seguente menù:
1) Calcola Media
2) Calcola Minino
3) Calcola Massimo
4) Esci
Effettuando la scelta il programma richiamerà la funzione relativa e stamperà il risultato e ripresenterà il menù

-Si dichiarino due vettori VETT1 e VETT2 di numeri interi di 4 elementi. 
Il programma
dovrà restituire a video:
1)      il   VETT3 = VETT1+VETT2
2)      il    valore del prodotto scalare VETT1*VETT2
Si ricorda
che in geometria analitica, dati due vettori
a = [a1, a2, …, an] e b = [b1, b2, …, bn],
di definisce prodotto scalare: a * b = a1b1 + a2b2 + … + anbn.

-Dato un vettore precaricato di 10 elementi, implementare l'algoritmo Selection sort e stampare via via il vettore ad ogni giro di scansione alla ricerca del minimo

-Dato un vettore precaricato di 20 numeri interi che possono assumere valori da 0 a 9, scrivere un programma che restituisca per ogni valore le occorrenze presenti nel vettore. Il programma stamperà:
1)  per ogni valore 0 - 9 le occorrenze trovate nel vettore 
2) se vengono individuati valori fuori range stamperà il numero di valori fuori range

-Definire una stringa di 100 char inizializzata come segue: "oggi è una bella giornata"
1) contare le parole e stampare il valore
2) sostituire le vocali con la seguente logica:
sostituire a con e
sostituire e con i
sostituire i con o
sostituire o con u
sostituire u con a
infine stampare la nuova stringa

-Data una stringa prefissata creare una funzione che conta le parole considerando le seguenti eccezioni:
1) la stringa può contenere spazi multipli
2) la stringa può avere uno spazio iniziale
3) la stringa può avere lunghezza nulla
4) la striga può avere spazi in coda

-Un file di testo contiene un elenco di nomi
Un altro file di testo contiene il rispettivo elenco di cognomi
Scrivere un programma n C in grado di generare un altro file di testo contenente l'elenco di Nomi e Cognomi (un nominativo per riga)

-Dato il file allegato "articolo_giornale.txt", scrivere un programma in C che restituisca il numero di occorrenze della parola "alunni" nel file.
Proporre una soluzione senza l'uso della libreria string.h

-Dato il file di testo allegato, scrivere u programma in C in grado di sostituire la parola 
 "alunni" con la parola "allievi" in tutto il file generando un nuovo file denominato articolo_giornale_new.txt
 Non utilizzare la libreria string.h

 -Dato il file "articolo_giornale.txt" ricopiare le prime 30 parole su una matrice 30x50 di char. Le parole vano ricopiate una per riga e vanno memorizzate in formato stringa.
Il programma infine stamperà le stringhe (una per riga) memorizzate nella matrice

-Scrivere un programma in C che interpreti i numeri a 4 cifre contenuti nel file numeri.txt. Ogni numero a 4 cifre letto si deve trovare nel valore intero e  stamparlo a video.
