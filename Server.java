import java.rmi.*;
public class Server{
public static void main(String args[])
{
try
{
Naming.rebind("Implement1", new Implement1());
System.out.println("Server is connected. Waiting for client");
}
catch(Exception e)
{
System.out.println("Server could not connect"+e);
}
}
}
