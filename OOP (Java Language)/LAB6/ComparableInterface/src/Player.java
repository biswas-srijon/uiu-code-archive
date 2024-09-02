import java.util.ArrayList;
import java.util.Scanner;

public class Player implements Comparable<Player> {
    String name;
    int score;

    public Player(String name, int score) {
        this.name = name;
        this.score = score;
    }

    @Override
    public int compareTo(Player o) {
        return 0;
    }
}

class Maain {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter how many players : ");
        

        ArrayList<Player>  arr = new ArrayList<>();


    }
}
