package com.example.bankapi.controller;

import org.springframework.web.bind.annotation.*;

import com.example.bankapi.model.ContoBancario;

import java.util.ArrayList;
import java.util.List;

@RestController
@RequestMapping("/conti")
public class ContoController 
{
	private List<ContoBancario> conti = new ArrayList<>();
	@GetMapping
	public List<ContoBancario> getTuttiIConti() 
	{
		return conti;
	}
	@PostMapping
	public String aggiungiConto(@RequestBody ContoBancario conto) 
	{
		conti.add(conto);
		return "Conto aggiunto con successo.";
	}
	@GetMapping("/{id}")
	public ContoBancario getContoPerId(@PathVariable int id) 
	{
		for (ContoBancario conto : conti) 
		{
			if (conto.getID() == id) 
			{
				return conto;
			}
		}
		return null;
	}
	@GetMapping("/saldo-maggiore-di/{soglia}")
	public List<ContoBancario> filtraPerSaldo(@PathVariable double soglia) 
	{
		List<ContoBancario> risultati = new ArrayList<>();
		for (ContoBancario c : conti) 
		{
			if (c.getSaldo() > soglia) risultati.add(c);
		}
		return risultati;
	}
}