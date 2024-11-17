package com.example.datepicker;

import javafx.fxml.FXML;
import javafx.scene.control.DatePicker;
import javafx.scene.control.Label;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

public class Controller {
    @FXML
    private DatePicker myDatePicker;
    @FXML
    private Label myLabel;

    public void getDate (javafx.event.ActionEvent event) {
        try {
            LocalDate myDate = myDatePicker.getValue();
            String myFormattedDate = myDate.format(DateTimeFormatter.ofPattern("dd-MMM-yyyy"));
            myLabel.setText(myFormattedDate);
        } catch (Exception e)
        {
            e.printStackTrace();
        }

    }
}
