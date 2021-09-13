import java.util.Scanner;
public class LongestCommonSubsequence 
{
    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int n=input.nextInt();
        int[] P1=new int[n];
        int[] P2=new int[n];
        for(int i=0;i<n;i++)
        {
            P1[i]=input.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            P2[i]=input.nextInt();
        }
        int[][] dp=new int[n+1][n+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(P1[i-1]==P2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else if(P1[i-1]!=P2[j-1])
                {
                    dp[i][j]=Math.max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        System.out.println(dp[n][n]);
        input.close();
    }
}
