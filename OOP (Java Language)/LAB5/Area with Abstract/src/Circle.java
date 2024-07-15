public class Circle extends Shape {

    public Circle(int dim1){
        super(dim1);
    }
    public void printArea(){
        double areaa= 3.14*dim1*dim1;
        System.out.println("Area of Circle : "+areaa);
    }
}