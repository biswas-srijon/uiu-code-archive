package com.example.communicatebetweencontrolers;

import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Node;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.TextField;
import javafx.stage.Stage;

import javafx.event.ActionEvent;
import java.io.IOException;

public class Scene1Controller {
    @FXML
    private TextField nameTextField;

    private Scene scene;
    private Stage stage;
    private Parent root;

    public void login(javafx.event.ActionEvent actionEvent) throws IOException {
        String username = nameTextField.getText();

        FXMLLoader loader = new FXMLLoader(getClass().getResource("Scene2.fxml"));
        root = loader.load(); //The line root = loader.load(); is responsible for loading the FXML file (Scene2.fxml) and setting it as the root node of the scene.

        Scene2Controller scene2Controller = loader.getController();
        /*loader.getController() retrieves the instance of Scene2Controller created by the FXMLLoader when it loaded
         Scene2.fxml. You can then use this scene2Controller instance to access methods in Scene2Controller—for example,
          to set labels, update text fields, or pass data to Scene2.fxml.*/

        scene2Controller.displayName(username);

        stage = (Stage) ((Node)actionEvent.getSource()).getScene().getWindow();
        /* actionEvent.getSource(): Gets the source of the event. In this case, it’s the Node (e.g., a Button)
        that triggered the action.
        ((Node) actionEvent.getSource()).getScene(): Retrieves the Scene that the event source belongs to. This is the scene currently displayed on the Stage.
        .getWindow(): Gets the Window object from the scene, which is cast to a Stage since Stage is a subclass of Window. */

        scene = new Scene(root);
        stage.setScene(scene);
        stage.show();
    }
}
