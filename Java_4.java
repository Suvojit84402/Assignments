//package Program;
import java.util.Scanner;
public class Java_4 {
    public static void main(String[] args) throws Exception {
        float pi=3.14f;
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter Radius : ");
        float r=sc.nextFloat();
        float ar=pi*r*r;
        System.out.println(String.format("Area is : %.3f",ar));
        sc.close();
    }
    
}
