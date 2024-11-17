package com.example.progressbar;

import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.ProgressBar;

import java.net.URL;
import java.util.ResourceBundle;


public class Controller implements Initializable {
    @FXML
    Button myButton;
    @FXML
    ProgressBar myProgressbar;
    @FXML
    Label myLabel;

    double progress;

    public void changeProgress () {

        progress += 0.1;
        if (progress > 1.0) {
            progress = 1.0; // Limit progress to 100%
        }
        myProgressbar.setProgress(progress);
        myLabel.setText(Integer.toString((int)Math.round(progress * 100)) + "%");
    }

    @Override
    public void initialize(URL location, ResourceBundle resources) {
        myProgressbar.setStyle("-fx-accent: #00FF00;");
        myLabel.setText(Integer.toString((int)Math.round(progress*100)) + "%");
    }
}
