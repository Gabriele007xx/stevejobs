package com.example.bankapi.controller;

import com.example.bankapi.model.ContoBancario;
import com.example.bankapi.repository.ContoRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;
import java.util.List;
import java.util.Optional;

@RestController
@RequestMapping("/conti")
public class ContoController {
@Autowired
private ContoRepository contoRepository;
// GET tutti i conti
@GetMapping
public List<ContoBancario> getAll() 
{
	return contoRepository.findAll();
}
// POST nuovo conto
@PostMapping
public ContoBancario create(@RequestBody ContoBancario conto) 
{
	return contoRepository.save(conto);
}
// DELETE per ID
@DeleteMapping("/{id}")
public String delete(@PathVariable Long id) 
{
if (contoRepository.existsById(id)) 
{
	contoRepository.deleteById(id);
	return "Conto eliminato.";
	} 
	else 
	{
	return "Conto non trovato.";
	}
}
// Ricerca per intestatario
@GetMapping("/ricerca")
public List<ContoBancario> ricercaPerNome(@RequestParam String nome) 
{
	return contoRepository.findByIntestatarioContainingIgnoreCase(nome);
}
// Filtro per tipo conto
@GetMapping("/tipo")
public List<ContoBancario> filtraPerTipo(@RequestParam String tipo) 
{
	return contoRepository.findByTipoConto(tipo);
}
}