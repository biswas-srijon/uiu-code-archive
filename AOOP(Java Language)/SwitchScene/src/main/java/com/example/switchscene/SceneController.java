package com.example.switchscene;

import javafx.fxml.FXMLLoader;
import javafx.scene.Node;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

import javax.imageio.IIOException;
import java.awt.event.ActionEvent;
import java.io.IOException;

public class SceneController {
    private Stage stage;
    private Scene scene;
    private Parent root;

    public void switchtoScene1(javafx.event.ActionEvent actionEvent) throws IOException{
        root = FXMLLoader.load(getClass().getResource("Scene1.fxml"));
        stage = (Stage)((Node)actionEvent.getSource()).getScene().getWindow();
        scene = new Scene(root);
        stage.setScene(scene);
        stage.show();
    }

    public void switchtoScene2(javafx.event.ActionEvent actionEvent) throws IOException {
        root = FXMLLoader.load(getClass().getResource("Scene2.fxml"));
        stage = (Stage)((Node)actionEvent.getSource()).getScene().getWindow();
        scene = new Scene(root);
        stage.setScene(scene);
        stage.show();
    }
}
