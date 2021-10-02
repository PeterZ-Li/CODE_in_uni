import java.util.Scanner;
public class Sum 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int N=input.nextInt();
        float molecule=2,denominator=1,sum=0;
        while(N>0)
        {
            sum+=molecule/denominator;//前N项和
            float temp=molecule;//分子分母计算
            molecule+=denominator;
            denominator=temp;
            N--;
        }
        System.out.print(String.format("%.2f", sum));//格式化输出
        input.close();
    }
}