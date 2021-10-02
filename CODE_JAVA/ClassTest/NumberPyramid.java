import java.util.*;
public class NumberPyramid
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int N=input.nextInt();
        for(int i=1;i<=N;i++)
        {
            for(int a=(N-i)*2;a>0;a--)
            {
                System.out.printf(" ");
            }
            for(int j=i;j>1;j--)
            {
                System.out.printf("%d ",j);
            }
            for(int k=1;k<=i;k++)
            {
                System.out.printf("%d ", k);
            }
            System.out.println();
        }
        input.close();
    }
}