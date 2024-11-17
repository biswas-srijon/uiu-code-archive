package com.example.choicebox;

import javafx.event.Event;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.ChoiceBox;
import javafx.scene.control.Label;

import java.net.URL;
import java.util.ResourceBundle;

public class Controller implements Initializable {
    @FXML
    ChoiceBox myChoicebox;
    @FXML
    Label myLabel;

    private String [] food = {"Pizza", "Burger", "Ramen"};

    @Override
    public void initialize(URL location, ResourceBundle resources) {
        myChoicebox.getItems().addAll(food);
        myChoicebox.setOnAction(this::getFood); // :: is a method reference operator
    }

    private void getFood(Event event) {
        String myFood = (String) myChoicebox.getValue();
        myLabel.setText(myFood);
    }
}
