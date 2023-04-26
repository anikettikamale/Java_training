 class inheritance {
    int a=2,b=2,area;
    void Demo()
    {
        area=a*b;
    }}
    class sanket extends inheritance 
    {
    void display()
    {
        System.out.println("area of rectangle="+area);
    }
    
}
class result
{
    public static void main(String args[])
    {
    sanket i1=new sanket();
    i1.Demo();
    i1.display();
    }
}
