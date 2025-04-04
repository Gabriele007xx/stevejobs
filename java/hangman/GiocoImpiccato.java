package util;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;


public class GiocoImpiccato
{
	private char parola[];
	private char parolaIndovinata[];
	private int tentativi=0;
	private final int tentativi_max=6;
	private ArrayList<Character> lettere_inserite = new ArrayList<>();
	private boolean win = false;
	private boolean canContinue=true;
	
	public GiocoImpiccato()
	{
		setupWord();
	}
	public String getParolaIndovinata()
	{
		String output="";
		for(int i=0;i<parolaIndovinata.length;i++)
		{
			output=output+parolaIndovinata[i];
		}
		return output;
	}
	public void input(char lettera)
	{
		if(lettere_inserite.contains(new Character(lettera)))
		{
			System.out.println("Hai già inserito questa lettera!");
		}
		else
		{
			lettere_inserite.add(new Character(lettera));
			int count=0;
			for(int i=0;i<parola.length;i++)
			{
				if(parola[i]==lettera)
				{
					parolaIndovinata[i]=lettera;
					count++;
				}
			}
			if(count==0)
			{
				tentativi++;
			}
			if(!HasNotGuessed())
			{
				canContinue=false;
			}
			if(checkAttempts())
			{
				canContinue=false;
			}
			
		}

	}
	
	public boolean canContinue()
	{
		return canContinue;
	}
	
	private boolean HasNotGuessed()
	{
		for(int i=0;i<parolaIndovinata.length;i++)
		{
			if(parolaIndovinata[i]=='-')
			{
				return true;
			}
		}
		win=true;
		return false;
	}
	
	public String getMessage()
	{
		return win ? "Hai vinto!" : "Hai perso!";
	}
	
	public int getTentativiRimasti()
	{
		return tentativi_max-tentativi;
	}
	
	/*
	 * public void printParolaIndovinata() { for(int
	 * i=0;i<parolaIndovinata.length;i++) { System.out.print(parolaIndovinata[i]); }
	 * }
	 */
	
	private boolean checkAttempts()
	{
		return tentativi>=tentativi_max;
	}
	
	private void setupWord()
	{
		List<String> parole;
		try
		{
			parole = Files.readAllLines(Paths.get("resources/words.txt"));
			Random random=new Random();
			String word = parole.get(random.nextInt(parole.size()));
			parola = word.toCharArray();
			String empty="";
			for(int i=0;i<parola.length;i++)
			{
				empty=empty+"-";
			}
			parolaIndovinata=empty.toCharArray();
		}
		catch(IOException e)
		{
			e.printStackTrace();
		}
	}
}