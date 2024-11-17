module com.example.agesubmitting {
    requires javafx.controls;
    requires javafx.fxml;


    opens com.example.agesubmitting to javafx.fxml;
    exports com.example.agesubmitting;
}