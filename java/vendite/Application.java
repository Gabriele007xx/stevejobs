package world;

import java.util.Random;

public class Application 
{
	static Random random=new Random();
	static double[][] prodotti=new double[5][4];
	
	public static void main(String args[])
	{
		double max;
		int indice=0;
		riempi();
		max=vendite(0);
		for(int i=1;i<5;i++)
		{
			double totale=vendite(i);
			if(totale>max)
			{
				max=totale;
				indice=i;
			}
		}
		double top;
		int sett;
		top=venditeSett(0);
		sett=0;
		for(int i=1;i<4;i++)
		{
			double totale=venditeSett(i);
			if(totale>top)
			{
				top=totale;
				sett=i;
			}
		}
		System.out.println("Vendite mensili: ");
		System.out.println("--------------------");
		System.out.println("Prodotto\tSet. 1\tSet. 2\tSet. 3\tSet. 4 Totale");
		for(int i=0;i<5;i++)
		{
			System.out.print("P" + (i+1) + "\t");
			for(int j=0;j<4;j++)
			{
				System.out.print(prodotti[i][j] + "\t");
			}
			System.out.println(vendite(i));
			
		}
		System.out.println("Settimana migliore: " + (sett+1) + " (totale: " + top + ")");
		System.out.println("Prodotto migliore: " + (indice+1) + " (totale: " + max + ")");

	}
	
	private static void riempi()
	{
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<4;j++)
			{
				prodotti[i][j]=random.nextInt(1000);
			}
		}
	}
	
	private static double vendite(int riga)
	{
		double somma=0;
		for(int i=0;i<4;i++)
		{
			somma=somma+prodotti[riga][i];
		}
		return somma;
	}
	private static double venditeSett(int colonna)
	{
		double somma=0;
		for(int j=0;j<5;j++)
		{
			somma=somma+prodotti[j][colonna];
		}
		return somma;
	}
}