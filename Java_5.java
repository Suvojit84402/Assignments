import java.util.Scanner;
public class Java_5 {
    public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
        System.out.print("Enter a string: ");
        String s=sc.nextLine();
        System.out.print("Enter another string: ");
        String u=sc.nextLine();
        String t=s;
        System.out.println(s==t);   //pointing same location
        System.out.println(s==u);  //pointing different location
        System.out.println(s.equals(t));   //comparing contents not memory locations
        System.out.println(s.equals(u));   //comparing contents not memory locations
        sc.close();
    }
}
