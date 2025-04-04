package app;

public class Cliente {
	private String nome;
	private String cognome;
	private String codiceFiscale;
	
	Cliente(String nome, String cognome, String codiceFiscale)
	{
		this.nome=nome;
		this.cognome=cognome;
		this.codiceFiscale=codiceFiscale;
	}
	
	public void setNome(String nome)
	{
		this.nome=nome;
	}
	
	public String getNome()
	{
		return nome;
	}
	
	public void setCognome(String cognome)
	{
		this.cognome=cognome;
	}
	
	public String getCognome()
	{
		return cognome;
	}
	
	public void setCodiceFiscale(String codiceFiscale)
	{
		this.codiceFiscale=codiceFiscale;
	}
	
	public String getCodiceFiscale()
	{
		return codiceFiscale;
	}
	
	public String toString()
	{
		return nome + " " + cognome + " " + codiceFiscale;
	}
}
