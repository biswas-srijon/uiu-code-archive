package com.example.hellofx;

import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.scene.shape.Line;
import javafx.scene.shape.Polygon;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Font;
import javafx.scene.text.Text;
import javafx.stage.Stage;

import javax.swing.*;

public class JavaFxScene extends Application {

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage stage) throws Exception {
        Group root = new Group();
        Scene scene = new Scene(root,600,600, Color.SKYBLUE);

        Text text = new Text();
        text.setText("Noice!!");
        text.setX(50);
        text.setY(50);
        text.setFont(Font.font("Verdana", 40));
        text.setFill(Color.CORAL);

        Line line = new Line();
        line.setStartX(200);
        line.setStartY(200);
        line.setEndX(500);
        line.setEndY(200);
        line.setStroke(Color.RED);
        line.setStrokeWidth(5);
        line.setOpacity(0.5);
        line.setRotate(45);

        Rectangle rectangle = new Rectangle();
        rectangle.setHeight(100);
        rectangle.setWidth(50);
        rectangle.setX(100);
        rectangle.setY(100);
        rectangle.setFill(Color.BISQUE);
        rectangle.setStroke(Color.BLACK);
        rectangle.setStrokeWidth(5);

        Polygon triangle = new Polygon();
        triangle.getPoints().setAll(
                200.0, 200.0,
                300.0,300.0,
                200.0, 300.0
                );
        triangle.setFill(Color.YELLOW);

        Circle circle = new Circle();
        circle.setCenterX(350);
        circle.setCenterY(350);
        circle.setRadius(50);
        circle.setFill(Color.GRAY);

        Image img = new Image("/pizza.png");
        ImageView imageView = new ImageView(img);
        imageView.setX(290);
        imageView.setY(290);

        root.getChildren().add(text);
        root.getChildren().add(line);
        root.getChildren().add(triangle);
        root.getChildren().add(rectangle);
        root.getChildren().add(circle);
        root.getChildren().add(imageView);
        stage.setScene(scene);
        stage.show();
    }
}
