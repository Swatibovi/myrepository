import java.rmi.*;
import java.util.*;
public class Client1{
public static void main(String[] args)
{
try{
Interface1 ob=(Interface1)Naming.lookup("//localhost/Implement1");
int ch;
Scanner sc= new Scanner(System.in);
System.out.println("Enter your name");
String n=sc.nextLine();
System.out.println("Enter your account number");
int acc=sc.nextInt();
System.out.println("Enter the branch");
String br=sc.nextLine();
do
{
System.out.println("Enter your choice\n1.Check Balance\n2.Deposit\n3.Withdraw\n4.Show details\n5.Log out");
ch=sc.nextInt();
switch(ch)
{
case 1:
System.out.println("Your balance is "+ob.display());
break;
case 2:
System.out.println("Enter the amount to be deposited");
double dep=sc.nextDouble();
System.out.println("Your current balance is "+ob.deposit(dep));
//bal=bal+dep;
break;
case 3:
System.out.println("Enter the amount to be withdrawn");
double wit=sc.nextDouble();
double r=ob.withdraw(wit);
if(r==-1)
	System.out.println("Not enough balance");
else
	System.out.println("Current balance"+r);
break;
case 4:
System.out.println("Name: "+n);
System.out.println("Account number: "+acc);
System.out.println("Branch: "+br);
System.out.println("Current Balance: "+ob.display());
break;
case 5:
System.out.println("Logged out.");
break;
default:
System.out.println("Invalid Choice.");
}
}while(ch!=5);
//System.out.println("Connected");
}
catch(Exception e){
System.out.println(e);
}
}
}