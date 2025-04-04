package app;

import java.util.List;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Hotel hotel=new Hotel();
		int scelta;
		Scanner scanner=new Scanner(System.in);
		do
		{
		System.out.println("===== HOTEL IL GIRASOLE =====");
		System.out.println("1. Aggiungi una camera\r\n"
				+ "2. Mostra camere disponibili\r\n"
				+ "3. Effettua una nuova prenotazione\r\n"
				+ "4. Mostra tutte le prenotazioni\r\n"
				+ "5. Mostra incasso giornaliero\r\n"
				+ "6. Cerca prenotazioni per codice fiscale\r\n"
				+ "7. Esci\r\n"
				+ "Scelta:");
		scelta=scanner.nextInt();
		
		switch(scelta)
		{
			case 1:
				System.out.print("Digitare il numero della camera: ");
				int numero=scanner.nextInt();
				System.out.print("Digitare il tipo della camera: ");
				String tipo=scanner.next();
				System.out.print("Digitare il prezzo per notte della camera: ");
				double prezzo=scanner.nextDouble();
				hotel.aggiungiCamera(new Camera(numero,tipo,prezzo,null));
			break;
			case 2:
				System.out.println(hotel.getCamereDisponibili().toString());
			break;
			case 3:
				System.out.print("Inserire nome del cliente: ");
				String nome=scanner.next();
				System.out.print("Inserire cognome del cliente: ");
				String cognome=scanner.next();
				System.out.print("Inserire codice fiscale: ");
				String codice=scanner.next();
				System.out.print("Inserire numero della camera: " );
				int n=scanner.nextInt();
				System.out.print("Inserire numero di notti: ");
				int notti=scanner.nextInt();
				hotel.nuovaPrenotazione(new Prenotazione(new Cliente(nome, cognome,codice),findCamera(n, hotel),notti));
			break;
			case 4:
				hotel.mostraPrenotazioni();
			break;
			case 5:
				System.out.println("Incasso totale di oggi: " + hotel.incassoTotale());
			break;
			case 6:
				System.out.print("Inserire il codice fiscale: ");
				String fiscale=scanner.next();
				List<Prenotazione> prenotazioni = hotel.cercaPrenotazioniPerCliente(fiscale);
				System.out.println(prenotazioni.toString());
			break;
			case 7:
				System.out.println("Uscita...");
			break;	
			default:
				System.out.println("Scelta sbagliata");
		}

	}
	while(scelta!=7);
	scanner.close();
	}
	
	private static Camera findCamera(int numero, Hotel hotel)
	{
		List<Camera> camere = hotel.getCamereDisponibili();
		for(Camera c : camere)
		{
			if(c.getNumero()==numero)
			{
				return c;
			}
		}
		return null;
	}

}
