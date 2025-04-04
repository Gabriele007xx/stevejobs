package util;

import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class Window {
	JFrame window;
	GiocoImpiccato gioco;
	JTextField input;
	JLabel tentativi;
	JLabel parola;
	JButton button;
	
	public Window(String title, int width, int heigth)
	{
		window = new JFrame(title);
		window.setSize(width, heigth);
		window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		window.setLayout(new GridLayout(4,2,7,7));
		gioco=new GiocoImpiccato();
		setupComponents();
		addComponents();
	}
	
	private void setupComponents() {
		input=new JTextField();
		tentativi=new JLabel("Inserisci lettera (Tentativi rimasti: " + gioco.getTentativiRimasti() + ": ");
		parola=new JLabel(gioco.getParolaIndovinata());
		button=new JButton("Indovina");
		button.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e)
			{
				char lettera=(char)input.getText().charAt(0);
				gioco.input(lettera);
			}
		});
	}

	public void show()
	{
		window.setVisible(true);
		run();
	}
	private void run()
	{
		while(gioco.canContinue())
		{
			update();
		}
	}
	private void addComponents()
	{
		window.add(parola);
		window.add(tentativi);
		window.add(input);
		window.add(button);
	}
	
	private void update()
	{
		tentativi.setText("Inserisci lettera (Tentativi rimasti: " + gioco.getTentativiRimasti() + ": ");
		parola.setText(gioco.getParolaIndovinata());
	}
}
