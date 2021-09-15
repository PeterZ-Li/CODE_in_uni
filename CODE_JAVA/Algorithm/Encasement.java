import java.util.*;
public class Encasement 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int V=input.nextInt(),n=input.nextInt();
        int[] volume=new int[n];
        for(int i=0;i<n;i++)
        {
            volume[i]=input.nextInt();
        }
        int[][] dp=new int[n+1][V+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=V;j++)
            {
                if(j<volume[i-1])
                {
                    dp[i][j]=dp[i-1][j];
                }
                else
                {
                    dp[i][j]=Math.max(dp[i-1][j],dp[i-1][j-volume[i-1]]+volume[i-1]);//留出放下一个物品的空间，看看在那种情况下加上这个物品的价值（此为体积）会怎么样
                }
            }
        }
        System.out.println(V-dp[n][V]);
        input.close();
    }
}
