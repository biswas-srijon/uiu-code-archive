public class Rectangle extends Shape{

    public Rectangle(int dim1, int dim2){
        super(dim1,dim2);
    }
    public void printArea(){
        int area= dim1*dim2;
        System.out.println("Area of Rectangle : "+area);
    }
}