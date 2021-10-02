public class Game 
{
    public static void main(String[] args) 
    {
        for(char a='x';a<='z';a++)//遍历所有的情况
        {
            for(char b='x';b<='z';b++)
            {
                for(char c='x';c<='z';c++)
                {
                    if(a!='x'&&c!='x'&&c!='z'&&a!=b&&a!=c&&b!=c)//判断是否为题目所说的情况
                    {
                        System.out.printf("a VS %c\nb VS %c\nc VS %c\n", a,b,c);
                    }
                }
            }
        }
    }
}