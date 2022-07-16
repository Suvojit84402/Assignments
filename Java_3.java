//package Program;
import java.util.Scanner;
public class Java_3 {
    public static void main(String[] args){
Scanner sc=new Scanner(System.in);
System.out.println("Enter the length in cm: ");
int a=sc.nextInt();
double h1=a/2.54;
double h2=a/30.5;
//System.out.println(String.format("The length in inches: %.3f",h1));
System.out.format("The length in inches: %.3f%n",h1);
//System.out.println(String.format("The length in feet: %.3f",h2));
System.out.format("The length in feet: %.3f%n",h2);
sc.close();
    }
}
