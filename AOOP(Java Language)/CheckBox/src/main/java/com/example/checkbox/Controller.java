package com.example.checkbox;

import javafx.fxml.FXML;
import javafx.scene.control.CheckBox;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;


public class Controller {
    @FXML
    private Label myLabel;
    @FXML
    private CheckBox myCheckbox;
    @FXML
    private ImageView myImageview;

    Image img1 = new Image(getClass().getResourceAsStream("/bulb off.png"));
    Image img2 = new Image(getClass().getResourceAsStream("/bulb on.png"));

    public void onOff (javafx.event.ActionEvent event) {
        try {
            if (myCheckbox.isSelected()) {
                myLabel.setText("ON");
                myImageview.setImage(img2);
            }
            else {
                myLabel.setText("OFF");
                myImageview.setImage(img1);
            }
        } catch (Exception e)
        {
            System.out.println(e);
        }

    }
}
