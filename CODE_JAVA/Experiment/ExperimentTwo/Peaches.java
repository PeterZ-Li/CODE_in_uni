import java.util.*;
public class Peaches 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int N=input.nextInt();
        int peach=1;//已知N-1天吃完后只剩1个桃子
        for(int i=N-2;i>=0;i--)//由后向前推到，直至第一天摘到的桃子
        {
            peach=(peach+1)*2;//已知剩下的桃子，求吃桃子前的桃子个数
        }
        System.out.println(peach);
        input.close();
    }
}
