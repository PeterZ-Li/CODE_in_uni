public class QuestionThree 
{
    public static void main(String[] args) 
    {
        for(int i=2;i<=2000;i++)
        {
            int j=2;
            for(;j<(int)Math.sqrt(i);j++)
            {
                if(i%j==0)//判断质数
                {
                    break;
                }
            }
            if(j>=(int)Math.sqrt(i))
            {
                System.out.printf("%d ", i);
            }
        }
    }
}
