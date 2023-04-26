import java.util.Scanner;
class aniket{
 int a,b,c;
    void  getData()
{
Scanner sc=new Scanner(System.in);
System.out.println("enter a");
int a=sc.nextInt();
System.out.println(" enter b");
int b=sc.nextInt();

}}
class sanket  extends aniket 
{
    int c;
    void total()
{
    c=a*b;
 System.out.println("area="+c);
}
}
class anuj
{
    public static void main(String args[])
    {
sanket  i1=new sanket();
i1.getData();
i1.total();
}
}
    

    

