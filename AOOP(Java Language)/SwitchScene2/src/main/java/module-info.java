module com.example.switchscene2 {
    requires javafx.controls;
    requires javafx.fxml;


    opens com.example.switchscene2 to javafx.fxml;
    exports com.example.switchscene2;
}