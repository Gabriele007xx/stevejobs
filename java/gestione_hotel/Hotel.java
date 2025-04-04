package app;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.List;


public class Hotel {
	private ArrayList<Camera> camere=new ArrayList<>();
	private ArrayList<Prenotazione> prenotazioni=new ArrayList<>();
	private final String FILE_PRENOTAZIONI = "prenotazioni.dat";
	
	public Hotel()
	{
		prenotazioni=LoadFromFile();
	}
	
	public void aggiungiCamera(Camera c)
	{
		camere.add(c);
	}
	
	public List<Camera> getCamereDisponibili()
	{
		List<Camera> camereLibere=new ArrayList<>();
		
		for(Camera c : camere)
		{
			if(!c.isOccupata())
			{
				camereLibere.add(c);
			}
		}
		return camereLibere;
	}
	
	public void nuovaPrenotazione(Prenotazione p)
	{
		prenotazioni.add(p);
	}
	
	public void mostraPrenotazioni()
	{
		for(Prenotazione p : prenotazioni)
		{
			System.out.println(p.toString());
		}
	}
	
	public double incassoTotale()
	{
		double somma=0;
		for(Prenotazione p : prenotazioni)
		{
			somma=somma+p.calcolaTotale();
		}
		return somma;
	}
	
	public List<Prenotazione> cercaPrenotazioniPerCliente(String codiceFiscale)
	{
		List<Prenotazione> prenotazioni = new ArrayList<>();
		for(Prenotazione p : this.prenotazioni)
		{
			if(p.getCliente().getCodiceFiscale().compareTo(codiceFiscale)==0)
			{
				prenotazioni.add(p);
			}
		}
		return prenotazioni;
	}
	
	private ArrayList<Prenotazione> LoadFromFile()
	{

		File file = new File(FILE_PRENOTAZIONI);
		if (!file.exists()) 
		{	
			return new ArrayList<>();
		}
		try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream(FILE_PRENOTAZIONI))) 
		{
		return (ArrayList<Prenotazione>) ois.readObject();
		} catch (IOException | ClassNotFoundException e) 
		{
		e.printStackTrace();
		return new ArrayList<>();
		}
	}
}
