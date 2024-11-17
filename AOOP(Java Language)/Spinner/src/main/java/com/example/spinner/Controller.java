package com.example.spinner;

import javafx.beans.value.ChangeListener;
import javafx.beans.value.ObservableValue;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.control.Spinner;
import javafx.scene.control.SpinnerValueFactory;

import java.net.URL;
import java.util.ResourceBundle;

public class Controller implements Initializable {

    @FXML
    private Spinner<Integer> mySpinner;
    @FXML
    private Label myLabel;

    int currentValue;

    @Override
    public void initialize(URL location, ResourceBundle resources) {
        //Creating the value factory
        SpinnerValueFactory<Integer> valueFactory = new SpinnerValueFactory.IntegerSpinnerValueFactory(1,10);

        valueFactory.setValue(1);

        mySpinner.setValueFactory(valueFactory); //Adding the value factory with our spinner
        currentValue = mySpinner.getValue();
        myLabel.setText(Integer.toString(currentValue));
        mySpinner.valueProperty().addListener(new ChangeListener<Integer>() {
            @Override
            public void changed(ObservableValue<? extends Integer> observable, Integer oldValue, Integer newValue) {
                currentValue = mySpinner.getValue();
                myLabel.setText(Integer.toString(currentValue));
            }
        });
    }
}
