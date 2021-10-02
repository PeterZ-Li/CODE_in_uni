import java.util.*;
public class CurrencySystem 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int T=input.nextInt();
        while(T>0)
        {
            int n=input.nextInt();
            int ans=n;
            int[] a=new int[n];
            for(int i=0;i<n;i++)
            {
                a[i]=input.nextInt();
            }
            Arrays.sort(a);
            int[] f=new int[a[n-1]+1];
            f[0]=1;
            for(int cur1:a)
            {
                if(f[cur1]!=0)
                {
                    ans--;
                    continue;
                }
                for(int j=cur1;j<=a[n-1];j++)
                {
                    f[j]=f[j]|f[j-cur1];
                }
            }
            System.out.println(ans);
            T--;
        }
        input.close();
    }
}
