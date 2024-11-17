package com.example.imageview;

import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;


public class Controller {
    @FXML
    private ImageView myImageview;
    @FXML
    private Button myButton;

    Image myImage = new Image(getClass().getResourceAsStream("/tom2.jpg"));

    public void displayImage () {
        myImageview.setImage(myImage);
    }
}
