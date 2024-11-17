package com.example.keyevent;

import javafx.application.Application;
import javafx.event.EventHandler;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.input.KeyEvent;
import javafx.stage.Stage;

import java.io.IOException;

public class Main extends Application {
    @Override
    public void start(Stage stage) throws IOException {
        FXMLLoader loader = new FXMLLoader(getClass().getResource("Scene.fxml"));
        Parent root = loader.load();

        Controller controller = loader.getController();

        Scene scene = new Scene(root);
        scene.setOnKeyPressed(new EventHandler<KeyEvent>() {
            @Override
            public void handle(KeyEvent event) {
                switch (event.getCode()) {
                    case UP ->
                        controller.moveUp();
                    case DOWN ->
                        controller.moveDown();
                    case RIGHT ->
                        controller.moveRight();
                    case LEFT ->
                        controller.moveLeft();
                    default -> System.out.println(event.getCode());
                }
            }
        });

        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        launch();
    }
}