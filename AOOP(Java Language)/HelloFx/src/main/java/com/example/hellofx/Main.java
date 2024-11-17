package com.example.hellofx;

import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.image.Image;
import javafx.scene.input.KeyCombination;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

public class Main extends Application {

    /* Stage is like JFrame in java swing
    Scene is drawing surface for graphical contents like JPanel
    Scene Graph is hierarchical tree to hold nodes, nodes are like components such as buttons, textboxes, images.
    And they are arranged like a tree like Root node, branch node, leaf node. But we at least need a root node to create
    a scene and then we add the scene to our Stage. */

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage stage) throws Exception {

        Group root = new  Group();
        Scene scene = new Scene(root, Color.BLACK);

        try {
            Image img = new Image(getClass().getResource("/book reading.png").toExternalForm());
            stage.getIcons().add(img);
        } catch (NullPointerException e) {
            System.out.println("Image not found. Please check the path and filename.");
        }
        stage.setTitle("Stage Demo");
        stage.setHeight(420);
        stage.setWidth(420);
        stage.setResizable(false);
        //stage.setX(50);
        stage.setFullScreen(true);
        stage.setFullScreenExitHint("Press x");
        stage.setFullScreenExitKeyCombination(KeyCombination.valueOf("x"));

        stage.setScene(scene);
        stage.show();
    }
}