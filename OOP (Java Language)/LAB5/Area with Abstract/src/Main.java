package Abstract;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double x,y,p,q,r;

        System.out.println("Enter 2 dimensions of Rectangle.");
        System.out.print("X : ");
        x=sc.nextDouble();
        System.out.print("Y : ");
        y=sc.nextDouble();

        System.out.println("Enter base and height of Triangle.");
        System.out.print("P : ");
        p=sc.nextDouble();
        System.out.print("Q : ");
        q=sc.nextDouble();

        System.out.println("Enter radius of circle.");
        System.out.print("r : ");
        r=sc.nextDouble();
        System.out.println("\n");

        Shape sp;  // sp is the object variable for abstract class Shape

        sp = new Rectangle(x,y);
        sp.area();

        sp = new Triangle(p,q);
        sp.area();

        sp = new Circle(r,r);
        sp.area();
    }
}
