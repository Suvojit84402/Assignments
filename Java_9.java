import java.util.Scanner;
class BankAcc{
	private String accNo;
	private double balance;
	static double interest=2.5f;
	public BankAcc(){}
	public BankAcc(String accNo, double balance){
	this.accNo=accNo;
	this.balance=balance;
	}
	public void Set_data(String accNo, double balance){
		this.accNo=accNo;
		this.balance=balance;
	}
	public static void Set_interest(double i){
		interest=i;
	}
	public String GetAccNo(){
		return this.accNo;
	}
	public double GetBalance(){
		return this.balance;
	}
	public static double GetInterest(){
		return interest;
	}
	public double CalculateInterest(){
		return (this.balance*this.interest)/100f;
	}
	public void Calculate_bal(){
		this.balance=this.balance+CalculateInterest();
	}
}
public class Java_9{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		BankAcc one=new BankAcc();
		System.out.println("Enter account number: ");
		String a1=sc.next();
		if(a1.length()!=11){
		System.out.println("Invalid Account Number!");
		System.out.println("Enter account number again: ");
		a1=sc.next();
		if(a1.length()!=11){
		return;}
		}
		System.out.println("Enter balance: ");
		double b1=sc.nextDouble();
		one.Set_data(a1,b1);
		
		System.out.println();
		System.out.println("The account number is: "+ one.GetAccNo());
		System.out.println(String.format("Interest rate: %.2f" , BankAcc.GetInterest()));
		System.out.println("The Interest for account holder: " + one.GetAccNo() + " is : " + one.CalculateInterest());
		one.Calculate_bal();
		System.out.println(String.format("The balance is: %.4f",one.GetBalance()));
		
		System.out.println();
		BankAcc.Set_interest(4.5f);
		System.out.println("New Interest Rate: "+ BankAcc.GetInterest());
		
		//BankAcc two=new BankAcc();
		//System.out.println("Enter account number: ");
		//String a2=sc.next();
		//if(a2.length()!=11){
		//System.out.println("Invalid Account Number!");
		//System.out.println("Enter account number again: ");
		//a2=sc.next();
		//if(a2.length()!=11){
		//return;}
		//}
		//System.out.println("Enter balance: ");
		//double b2=sc.nextDouble();
		//two.Set_data(a2,b2);
		
		System.out.println();
		System.out.println("The account number is: "+ one.GetAccNo());
		System.out.println(String.format("Interest rate: %.2f" , BankAcc.GetInterest()));
		System.out.println("The Interest for account holder: " + one.GetAccNo() + " is : " + one.CalculateInterest());
		one.Calculate_bal();
		System.out.println(String.format("The balance is: %.4f",one.GetBalance()));
	}
}
