public class Box {
        double length;
        double width;
        double height;
        double volume;

        //    public Box(double length, double width, double height){
        //        this.length=length;
        //        this.width=width;
        //        this.height=height;
        //    }
        public double getVolume(double length, double width, double height){
            volume = length*width*height;
            return volume;
        }
}
