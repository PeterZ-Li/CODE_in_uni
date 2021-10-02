import java.util.Scanner;
public class SmallChange 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int x=input.nextInt();
        int count=0;
        for(int fen5=1;fen5<x/5;fen5++)//遍历找符合条件的数
        {
            for(int fen2=1;fen2<x/2;fen2++)
            {
                if(x-fen2*2-fen5*5>0)
                {
                    System.out.printf("fen5:%d,fen2:%d,fen1:%d,total:%d\n", fen5,fen2,x-fen2*2-fen5*5,fen5+fen2+(x-fen2*2-fen5*5));//格式化输出
                    count++;
                }
            }
        }
        System.out.printf("count=%d\n",count);
        input.close();
    }
}
