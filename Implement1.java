import java.rmi.*;
import java.util.*;
import java.rmi.server.*;
public class Implement1 extends UnicastRemoteObject implements Interface1{
public Implement1() throws RemoteException
{}
public double bal=10000.00;
public double deposit(double a)
{
bal=bal+a;
return bal;
}
public double withdraw(double a)
{
	if(a>bal)
	{
		//System.out.println("Not enough balance");
	return -1.00;
	}
	else
{
bal=bal-a;
return bal;
}
}
public double display()
{
	return bal;
}
}
