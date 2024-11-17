package com.example.switchscene2;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

import java.io.IOException;

public class Main extends Application {
    @Override
    public void start(Stage stage) throws IOException {
        Group root = new Group();
        Scene scene1 = new Scene(root, Color.BROWN);

        //Button for scene change
        Button button1 = new Button("To Scene2");
        button1.setLayoutX(200);
        button1.setLayoutY(250);

        Group root2 = new Group();
        Scene scene2 = new Scene(root2);

        Button button2 = new Button("To scene 1");
        root2.getChildren().add(button2);

        //Set button action using lambda expression
        button1.setOnAction(e-> {
            stage.setScene(scene2);
        });

        button2.setOnAction(e-> {
            stage.setScene(scene1);
        });

        root.getChildren().add(button1);



        stage.setWidth(500);
        stage.setHeight(500);
        stage.setX(300);
        stage.setY(300);
        stage.setTitle("Switching Scene");

        stage.setScene(scene1);
        stage.show();
    }

    public static void main(String[] args) {
        launch();
    }
}