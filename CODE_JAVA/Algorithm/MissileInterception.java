import java.util.*;
public class MissileInterception 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        String temp=input.nextLine();
        String[] temp1=temp.split(" ");
        int[] Height=new int[temp1.length];
        for(int i=0;i<temp1.length;i++)
        {
            Height[i]=Integer.parseInt(temp1[i]);
        }
        int[] dp=new int[temp1.length];
        int answer1=0;
        for(int i=temp1.length-1;i>=0;i--)
        {
            dp[i]=1;
            for(int j=i+1;j<temp1.length;j++)
            {
                if(Height[j]<=Height[i])
                {
                    dp[i]=Math.max(dp[i], dp[j]+1);
                }
            }
            answer1=Math.max(dp[i],answer1);
        }
        int answer2=0;
        for(int i=0;i<temp1.length;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(Height[j]<Height[i])
                {
                    dp[i]=Math.max(dp[i],dp[j]+1);
                }
            }
            answer2=Math.max(answer2,dp[i]);
        }
        System.out.printf("%d\n%d\n",answer1,answer2);
        input.close();
    }
}
