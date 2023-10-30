import java.util.*;
public class Q_1
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        int ar[]= new int[n];
        for(int i=0;i<n;i++)
        {
            ar[i]=sc.nextInt();
        }
        int nu=0,no=0;
        int b=sc.nextInt();
        int c=sc.nextInt();
        for(int j=0;j<n;j++)
        {
            if (ar[j]==b)
            {
                nu=j;
            }
            if(ar[j]==c)
            {
                no=j;
            }
        }
        if((nu-no)>0)
        {
            System.out.print(nu-no);
        }
        else
        {
            System.out.print(no-nu);
        }
    }
}
