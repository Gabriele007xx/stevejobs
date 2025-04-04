package util;

import java.util.Scanner;

public class Gioco
{
	public static void main(String args[])
	{
		Window window = new Window("Gioco dell'impiccato", 640, 480);
		window.show();
		/*
		 * GiocoImpiccato gioco = new GiocoImpiccato(); Scanner scanner = new
		 * Scanner(System.in); while(gioco.canContinue()) {
		 * gioco.printParolaIndovinata(); System.out.println();
		 * System.out.println("Inserisci lettera (Tentativi rimasti: " +
		 * gioco.getTentativiRimasti() + ": "); char
		 * lettera=(char)scanner.next().charAt(0); gioco.input(lettera); }
		 * System.out.println(gioco.getMessage()); scanner.close();
		 */
	}
}