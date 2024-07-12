public class Main {
    public static void main(String[] args) {

        Box box1 = new Box();
        Box box2 = new Box();

        box1.getVolume(25, 10, 5);
        box2.getVolume(20, 15, 8);

        System.out.println("Volume1 : " + box1.volume);
        System.out.println("Volume2 : " + box2.volume);
    }
}
