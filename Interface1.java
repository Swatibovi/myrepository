import java.rmi.*;
public interface Interface1 extends Remote{
public double deposit(double a) throws RemoteException;
public double withdraw(double a) throws RemoteException;
public double display() throws RemoteException;
}
