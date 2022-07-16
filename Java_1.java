
import java.util.Scanner;
public class Java_1{
    public static void main(String[] arg){
            Scanner sc=new Scanner(System.in);
            short a,b;
            System.out.print("Enter a and b:");
            a=sc.nextShort();
            b=sc.nextShort();
    
            System.out.println();
            int c=a+b;
            System.out.println("Sum is "+c);
            sc.close();
    }
}