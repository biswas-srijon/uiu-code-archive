package com.example.listview;

import javafx.beans.value.ChangeListener;
import javafx.beans.value.ObservableValue;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.control.ListView;

import java.net.URL;
import java.util.ResourceBundle;


public class ListViewController implements Initializable {
    @FXML
    private Label myLabel;
    @FXML
    private ListView<String> myList;

    String[] food = {"Chocolate", "Drinks", "Ramen", "Pizza"};

    String currentFood;


    @Override
    public void initialize(URL location, ResourceBundle resources) {
        myList.getItems().addAll(food);

        myList.getSelectionModel().selectedItemProperty().addListener(new ChangeListener<String>() {
            @Override
            public void changed(ObservableValue<? extends String> observable, String oldValue, String newValue) {
                currentFood = myList.getSelectionModel().getSelectedItem();
                myLabel.setText(currentFood);
            }
        });
    }
}
