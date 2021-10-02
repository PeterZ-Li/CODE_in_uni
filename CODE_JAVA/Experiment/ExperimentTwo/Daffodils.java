import java.util.*;
public class Daffodils 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int m=input.nextInt(),n=input.nextInt();
        boolean flag=false;//判断有无水仙花数
        for(int i=m;i<=n;i++)
        {
            if(i==Math.pow(i/100,3)+Math.pow(i/10%10, 3)+Math.pow(i%100%10, 3))//水仙花数的判定
            {
                flag=true;
                System.out.println(i);
            }
        }
        if(flag==false)
        {
            System.out.println("没有水仙花数");
        }
        input.close();
    }
}
