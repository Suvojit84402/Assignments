public class Java_2{
    public static void main(String args[]){
        int size=args.length;
        System.out.println("Number of arguments:"+size);
        for(int i=0;i<size;i++){
            System.out.println("Argument "+(i+1)+" is : "+args[i]);
        }
    }
}