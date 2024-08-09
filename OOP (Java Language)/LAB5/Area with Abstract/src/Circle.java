package Abstract;

public class Circle extends Shape{
    double r;
    public Circle(double dim1, double dim2) {
        super(dim1, dim2);
        r = dim1 = dim2 ;
    }

    @Override
    void area() {
        double area = 3.1416 * r * r;
        System.out.println("Area of Circle : "+area+" sq meter");
    }
}
