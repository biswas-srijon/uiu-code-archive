import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Student implements Comparable<Student>{
    int id;
    String name;

    public Student(int id, String name) {
        this.id = id;
        this.name = name;
    }

    @Override
    public int compareTo(Student obj) {

        //SORT BASED ON ID
//        if(this.id == obj.id){
//            return 0;
//        }
//        else if(this.id > obj.id){    //ascending
//            return 1;
//        }
//        else
//            return -1;
        //return this.id - obj.id;    //ascending

        //SORT BASED ON NAME
        //return this.name.compareTo(obj.name); //Ascending

        if(this.name.compareTo(obj.name) !=0){
            return this.name.compareTo(obj.name);
        }
        else
            return this.id - obj.id;
    }
}

public class Main {
    public static void main(String[] args){
        ArrayList<Student> arr = new ArrayList<>();

        arr.add(new Student(120, "Rahul"));
        arr.add(new Student(128, "Tanmoy"));
        arr.add(new Student(122, "Srijon"));
        arr.add(new Student(110, "Srijon"));

        Collections.sort(arr);

        for(Student obj: arr){
            System.out.println(obj.id + " " +obj.name);
        }
    }
}
