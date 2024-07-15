abstract class Animal{
    // instance variables
    String name, color;
    double weight;
    // Constructors
    Animal(){ }
    Animal(String name, String color, double weight){
        this.name = name;
        this.color = color;
        this.weight = weight;
    }
    Animal(String name, String color){
        this.name = name;
        this.color = color;
    }
    // Concrete methods
    public void eat(){ System.out.println(name + " eats."); }
    // abstract methods
    public abstract void makeSound();
}


class Bird extends Animal{
    public Bird(String name, String color) {
        super(name, color);
    }
    @Override
    public void makeSound() { System.out.println("Chirp"); }
}
class Tiger extends Animal{
    public Tiger(String name, String color) {
        super(name, color);
    }
    @Override
    public void makeSound() { System.out.println("Roar"); }
    public void methodTiger() { System.out.println("methodTiger"); }
}
public class TestAnimal {
    public static void main(String[] args) {
        Bird b = new Bird("Bird","Green");
        Animal t = new Tiger("Tiger","Black");
        b.eat();
        t.eat();
        b.makeSound();
        t.makeSound();


    }
}
