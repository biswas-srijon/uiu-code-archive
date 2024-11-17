package com.example.treeview;

import javafx.beans.value.ChangeListener;
import javafx.beans.value.ObservableValue;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.control.TreeItem;
import javafx.scene.control.TreeView;
import javafx.scene.input.ContextMenuEvent;

import java.net.URL;
import java.util.ResourceBundle;

public class Controller implements Initializable{
    @FXML
    private TreeView<String> myTreeView;
    @FXML
    private Label myLabel;

    public String selectedItem;


    @Override
    public void initialize(URL location, ResourceBundle resources) {
        TreeItem<String> rootItem = new TreeItem<>("Files");

        TreeItem<String> branchItem1 = new TreeItem<>("Pictures");
        TreeItem<String> branchItem2 = new TreeItem<>("Video");
        TreeItem<String> branchItem3 = new TreeItem<>("Music");

        TreeItem<String> leafItem1 = new TreeItem<>("picture1");
        TreeItem<String> leafItem2 = new TreeItem<>("picture2");
        TreeItem<String> leafItem3 = new TreeItem<>("video1");
        TreeItem<String> leafItem4 = new TreeItem<>("video2");
        TreeItem<String> leafItem5 = new TreeItem<>("music1");
        TreeItem<String> leafItem6 = new TreeItem<>("music2");

        branchItem1.getChildren().addAll(leafItem1, leafItem2);
        branchItem2.getChildren().addAll(leafItem3, leafItem4);
        branchItem3.getChildren().addAll(leafItem5, leafItem6);
        rootItem.getChildren().addAll(branchItem1, branchItem2, branchItem3);
        myTreeView.setRoot(rootItem);

        myTreeView.getSelectionModel().selectedItemProperty().addListener(new ChangeListener<TreeItem<String>>() {
            @Override
            public void changed(ObservableValue<? extends TreeItem<String>> observable, TreeItem<String> oldValue, TreeItem<String> newValue) {
                if (newValue != null) {
                    selectedItem = String.valueOf(myTreeView.getSelectionModel().getSelectedItem());
                    myLabel.setText(selectedItem);
                }
            }
        });
    }
    public void selectItem () {
        TreeItem<String> item = myTreeView.getSelectionModel().getSelectedItem();
        if (item != null)
        {
            System.out.println(item);
        }
    }
}
