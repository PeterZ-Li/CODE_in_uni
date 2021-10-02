import java.util.*;
public class QuestionOne 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();//输入成绩个数
        int[] scores=new int[n];
        for(int i=0;i<n;i++)
        {
            scores[i]=input.nextInt();//输入成绩
        }
        Arrays.sort(scores);//Java内置排序算法，将数组升序排列
        int sum=0;
        for(int i=1;i<n-1;i++)//除去最高分，和最低分（分别在数组两端）
        {
            sum+=scores[i];
        }
        System.out.println((float)sum/(scores.length-2));//求平均分
        input.close();
    }
}