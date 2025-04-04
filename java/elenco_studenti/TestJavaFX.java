package prova;

import javafx.application.Application;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.scene.Scene;
//import javafx.scene.control.Label;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.cell.PropertyValueFactory;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class TestJavaFX extends Application {
@Override
public void start(Stage primaryStage) {
	
	TableView<Studente> table = new TableView<>();
	TableColumn<Studente, String> columnName = new TableColumn<>("Nome"); 
	columnName.setCellValueFactory(new PropertyValueFactory<>("nome"));
	
	TableColumn<Studente, Integer> columnAge = new TableColumn<>("Età"); 
	columnAge.setCellValueFactory(new PropertyValueFactory<>("eta"));
	
	TableColumn<Studente, String> columnSurname = new TableColumn<>("Cognome"); 
	columnSurname.setCellValueFactory(new PropertyValueFactory<>("cognome"));
	
	ObservableList<Studente> studenti = FXCollections.observableArrayList(
			new Studente("Sofia", "Liggiosa", 30),
			new Studente("Valerio", "Càlibro", 31),
			new Studente("PUSSY_DESTROYER", "bar", 16)
			);
	
	table.getColumns().addAll(columnName, columnSurname, columnAge);
	
	table.setItems(studenti);
	VBox layout = new VBox(10);
	layout.getChildren().add(table);
	
Scene scene = new Scene(layout, 300, 200);
primaryStage.setScene(scene);
primaryStage.setTitle("Studenti");
primaryStage.show();
}
public static void main(String[] args) {
launch(args);
}
}