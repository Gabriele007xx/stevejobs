package entity;

import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.regex.Pattern;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.JTextField;

public class Application {
	private JFrame frame;
	private ArrayList<Utente> utenti;
	
	private JTextField txtNome, txtCognome, txtEmail, txtEta;
	private JTextArea txtAreaUtenti;
	private static final String FILE_UTENTI = "utenti.dat";
	
	public Application()
	{
		frame = new JFrame("Form");
		frame.setSize(640,480);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setLayout(new GridLayout(7,2,7,7));
		
		utenti=caricaUtentiDaFile();
		setupComponents();
		aggiornaLista();
	}
	
	private void setupComponents()
	{		
		JLabel lblNome = new JLabel("Nome:");
		txtNome = new JTextField();
		JLabel lblCognome = new JLabel("Cognome:");
		txtCognome = new JTextField();
		JLabel lblEmail = new JLabel("Email:");
		txtEmail = new JTextField();
		txtEta=new JTextField();
		JButton btnRegistrati = new JButton("Registra Utente");
		txtAreaUtenti = new JTextArea();
		txtAreaUtenti.setEditable(false);
		
		btnRegistrati.addActionListener(new ActionListener() {
		@Override
		public void actionPerformed(ActionEvent e) {
				registraUtente();
		}
		});

		frame.add(lblNome);
		frame.add(txtNome);
		frame.add(lblCognome);
		frame.add(txtCognome);
		frame.add(lblEmail);
		frame.add(txtEmail);
		frame.add(new JLabel("Età:"));
		frame.add(txtEta);
		frame.add(btnRegistrati);
		frame.add(new JLabel(" "));
		frame.add(new JLabel("Utenti registrati:"));
		frame.add(new JScrollPane(txtAreaUtenti));
	}
	
	public void show()
	{
		frame.setVisible(true);
	}
	
	private boolean registraUtente() 
	{
		String nome = txtNome.getText().trim();
		String cognome = txtCognome.getText().trim();
		String email = txtEmail.getText().trim();
		String etaText = txtEta.getText().trim();

		// Validazione: campi non vuoti e email valida
		if (nome.isEmpty() || cognome.isEmpty() || email.isEmpty()) {
		JOptionPane.showMessageDialog(frame, "Tutti i campi sono obbligatori!", "Errore",
		JOptionPane.ERROR_MESSAGE);
		return false;
		}
		if(!validaEmail(email))
		{
			JOptionPane.showMessageDialog(frame, "Email non valida", "Errore",
					JOptionPane.ERROR_MESSAGE);
			return false;
		}
		int eta;
		try
		{
			eta=Integer.parseInt(etaText);
			if(eta<0)
			{
				throw new NumberFormatException();
			}
		}
		catch(NumberFormatException e)
		{
			System.out.println(e);
			JOptionPane.showMessageDialog(frame, "Inserisci un'età valida!", "Errore", JOptionPane.ERROR_MESSAGE);
			return false;
		}
		utenti.add(new Utente(nome,cognome,email,eta));
		salvaUtentiSuFile();
		// Pulizia dei campi dopo la registrazione
		txtNome.setText("");
		txtCognome.setText("");
		txtEmail.setText("");
		txtEta.setText("");
		aggiornaLista();
		return true;
	}
	
	private boolean validaEmail(String email) 
	{
		String regexEmail = "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$";
		return Pattern.matches(regexEmail, email);
	}
	
	private void aggiornaLista()
	{
		String s="";
		for(Utente u : utenti)
		{
			s=s+u.toString()+"\n";
		}
		txtAreaUtenti.setText(s);
	}
	
	private void salvaUtentiSuFile() 
	{
		try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(FILE_UTENTI))) 
		{
			oos.writeObject(utenti);
		} 
		catch (IOException e) 
		{
			e.printStackTrace();
		}
	}
	
	private ArrayList<Utente> caricaUtentiDaFile() 
	{
		File file = new File(FILE_UTENTI);
		if (!file.exists()) 
		{	
			return new ArrayList<>();
		}
		try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream(FILE_UTENTI))) 
		{
		return (ArrayList<Utente>) ois.readObject();
		} catch (IOException | ClassNotFoundException e) 
		{
		e.printStackTrace();
		return new ArrayList<>();
		}
	}
}