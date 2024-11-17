package com.example.agesubmitting;

import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

public class Controller {
    @FXML
    private Label myLabel;
    @FXML
    private Button myButton;
    @FXML
    private TextField myTextfield;

    int age;

    public void submit (javafx.event.ActionEvent event) {
        try {
            age = Integer.parseInt(myTextfield.getText());
            //System.out.println(age);
            if(age >= 18) {
                myLabel.setText("You are now signed up");
            }
            else {
                myLabel.setText("F*ckOff kiddo! Come when you are 18");
            }

        } catch (NumberFormatException e) {
            myLabel.setText("Enter only f*cking numbers");
        } catch (Exception e) {
            System.out.println(e);
        }
    }

}
