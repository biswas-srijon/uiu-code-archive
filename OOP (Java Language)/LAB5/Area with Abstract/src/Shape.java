package Abstract;

public abstract class Shape {

    double dim1, dim2;

    public Shape(double dim1, double dim2) {
        this.dim1 = dim1;
        this.dim2 = dim2;
    }

    abstract void area ();

    void testing() {}; // Non abstract method is not a must implementation thing
}
