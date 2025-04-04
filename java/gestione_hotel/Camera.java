package app;

public class Camera {
	private int numero;
	private String tipo;
	private double prezzoPerNotte;
	private boolean occupata;
	private Cliente cliente;
	
	Camera(int numero, String tipo, double prezzoPerNotte, Cliente cliente)
	{
		this.numero=numero;
		this.tipo=tipo;
		this.prezzoPerNotte=prezzoPerNotte;
		this.occupata=false;
		this.cliente=cliente;
	}
	
	public void setNumero(int numero)
	{
		this.numero=numero;
	}
	
	public int getNumero()
	{
		return numero;
	}
	
	public void setTipo(String tipo)
	{
		this.tipo=tipo;
	}
	
	public String getTipo()
	{
		return tipo;
	}
	
	public void setPrezzoPerNotte(double prezzo)
	{
		this.prezzoPerNotte=prezzo;
	}
	
	public double getPrezzoPerNotte()
	{
		return prezzoPerNotte;
	}
	
	public void setOccupata(boolean occupata)
	{
		this.occupata=occupata;
	}
	
	public boolean isOccupata()
	{
		return occupata;
	}
	
	public void setCliente(Cliente cliente)
	{
		this.cliente=cliente;
	}
	
	public Cliente getCliente()
	{
		return cliente;
	}
	
	@Override
	public String toString()
	{
		return "Stanza numero " + numero + " Tipo: " + tipo + " Prezzo per notte: " + prezzoPerNotte + " Occupata: " + occupata;
	}
}
