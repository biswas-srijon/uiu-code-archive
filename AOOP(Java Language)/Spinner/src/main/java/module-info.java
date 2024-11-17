module com.example.spinner {
    requires javafx.controls;
    requires javafx.fxml;


    opens com.example.spinner to javafx.fxml;
    exports com.example.spinner;
}