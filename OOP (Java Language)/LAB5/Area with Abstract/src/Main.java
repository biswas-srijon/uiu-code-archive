import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter value for Rectangle : ");

        Shape rec = new Rectangle(10,20);
        Shape tri = new Triangle(5,8);
        Shape cir = new Circle(5);

        rec.printArea();
        tri.printArea();
        cir.printArea();
    }
}