package com.example.bankapi.model;

public class ContoBancario {
	private int id;
	private double saldo;
	private String intestatario;
	
	public ContoBancario(int id, String intestatario)
	{
		this.id=id;
		this.intestatario=intestatario;
	}
	
	public void diventaRicco()
	{
		this.saldo=999999.99;
	}
	
	public int getID()
	{
		return id;
	}
	
	public String getIntestatario()
	{
		return intestatario;
	}
	public double getSaldo()
	{
		return saldo;
	}
}
