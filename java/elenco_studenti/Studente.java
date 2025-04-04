package prova;

import javafx.beans.property.StringProperty;
import javafx.beans.property.IntegerProperty;
import javafx.beans.property.SimpleStringProperty;
import javafx.beans.property.SimpleIntegerProperty;

public class Studente {
    private StringProperty nome;
    private StringProperty cognome;
    private IntegerProperty eta;

    public Studente(String nome, String cognome, int eta) {
        this.nome = new SimpleStringProperty(nome);
        this.cognome = new SimpleStringProperty(cognome);
        this.eta = new SimpleIntegerProperty(eta);
    }

    public String getNome() {
        return nome.get();
    }

    public void setNome(String nome) {
        this.nome.set(nome);
    }

    public StringProperty nomeProperty() {
        return nome;
    }

    public String getCognome() {
        return cognome.get();
    }

    public void setCognome(String cognome) {
        this.cognome.set(cognome);
    }

    public StringProperty cognomeProperty() {
        return cognome;
    }

    public int getEta() {
        return eta.get();
    }

    public void setEta(int eta) {
        this.eta.set(eta);
    }

    public IntegerProperty etaProperty() {
        return eta;
    }
}
