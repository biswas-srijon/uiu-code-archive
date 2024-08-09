package Abstract;

public class Triangle extends Shape {

    public Triangle(double dim1, double dim2) {
        super(dim1, dim2);
    }

    @Override
    void area() {
        double area = .5 * dim1 * dim2;
        System.out.println("Area of Triangle : "+area+" sq meter");
    }
}
