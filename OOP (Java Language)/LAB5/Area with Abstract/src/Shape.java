abstract class Shape {
    int dim1;
    int dim2;

    Shape(int dim1)
    {
        this.dim1 = dim1;
    }

    public Shape(int dim1, int dim2) {
        this.dim1 = dim1;
        this.dim2 = dim2;
    }

    public abstract void printArea();
}