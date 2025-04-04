package entity;

import java.io.Serializable;

public class Utente implements Serializable{
	
	private String nome;
	private String cognome;
	private String email;
	private int eta;

	public Utente(String nome, String cognome, String email,int eta)
	{
		this.nome=nome;
		this.cognome=cognome;
		this.email=email;
		this.eta=eta;
	}
	
	public String getNome()
	{
		return this.nome;
	}
	
	public String getCognome()
	{
		return this.cognome;
	}
	
	public String getEmail()
	{
		return this.email;
	}
	
	public int getEta()
	{
		return this.eta;
	}
	
	public void stampaDati()
	{
		System.out.println("Nome: " + nome);
		System.out.println("Cognome: " + cognome);
		System.out.println("Email: " + email);		
		System.out.println("Età: " + eta);
	}
	@Override
	public String toString()
	{
		return nome + " " + " " + cognome + " " + email + " " + eta;
	}
}
