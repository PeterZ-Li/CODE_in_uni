import java.util.Scanner;
public class BringMedicine 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        int time=input.nextInt(),number=input.nextInt();
        int[] T=new int[number];
        int[] Value=new int[number];
        for(int i=0;i<number;i++)
        {
            T[i]=input.nextInt();
            Value[i]=input.nextInt();
        }
        int[][] Total=new int[number+1][time+1];
        for(int i=1;i<=number;i++)
        {
            for(int j=1;j<=time;j++)
            {
                if(j<T[i-1])//记得i-1，因为i从1开始
                {
                    Total[i][j]=Total[i-1][j];
                }
                else
                {
                    Total[i][j]=Math.max(Total[i-1][j], Total[i-1][j-T[i-1]]+Value[i-1]);//对于除Total以外的数组，记得在取值时，将序号减一
                }
            }
        }
        System.out.println(Total[number][time]);
        input.close();
    }
}
