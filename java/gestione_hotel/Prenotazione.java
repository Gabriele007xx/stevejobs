package app;

public class Prenotazione {
	private Cliente cliente;
	private Camera camera;
	private int numeroNotti;
	
	public Prenotazione(Cliente cliente, Camera camera, int numeroNotti)
	{
		this.cliente=cliente;
		this.camera=camera;
		this.numeroNotti=numeroNotti;
		camera.setOccupata(true);
	}
	
	public double calcolaTotale()
	{
		return camera.getPrezzoPerNotte()*numeroNotti;
	}
	
	public String toString()
	{
		return "Prenotazione per " + numeroNotti + " notti " + camera.toString() + " Cliente: " + cliente.toString();
	}
	
	public Cliente getCliente()
	{
		return cliente;
	}
}
