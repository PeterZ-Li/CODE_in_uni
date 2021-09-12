import java.util.Scanner;
public class NumberTriangles 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        //int[][] dp=new int[n+1][n+1];
        int[][] num=new int[n+1][n+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                num[i][j]=input.nextInt();
            }
        }
        //dp[1][1]=num[1][1];
        for(int i=n-1;i>=1;i--)
        {
            for(int j=1;j<=i;j++)
            {
                //dp[i][j]=Math.max(dp[i-1][j],dp[i-1][j-1])+num[i][j]; 自顶向下
                num[i][j]+=Math.max(num[i+1][j],num[i+1][j+1]);//自底向上
            }
        }
        /*int answer=0;
        for(int j=1;j<=n;j++)
        {
            answer=Math.max(answer, dp[n][j]);
        }*/
        System.out.println(num[1][1]);
        input.close();
    }
}
//第九个测试点总是MLE ╯﹏╰