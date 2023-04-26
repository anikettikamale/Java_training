 class aniket {
    int sum;
    int a,b;
    void sum(int x)
    {
        a=x;
        sum=a+a;
        System.out.println("sum="+sum);
    }
    void sum(int p,int q)
    {
        a=p;
        b=q;
        sum=a+b;
        System.out.println("sum="+sum);
    }
}
class pokymorphsm
{
    public static void main(String args[])
    {
        aniket d=new aniket();
        d.sum(5);
        d.sum(4,5);
}
}

