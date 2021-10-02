import java.util.*;
public class BeanMachine 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        System.out.print("Enter the number of balls to drop:");
        int BallNumber=input.nextInt();
        System.out.print("Enter the number of slots in the bean machine:");
        int SlotNumber=input.nextInt();
        int[] slots=new int[SlotNumber];
        Random RorL=new Random();
        while(BallNumber>0)
        {
            int temp=SlotNumber-1;
            int count=0;
            String Way=new String();
            while(temp>0)
            {
                Boolean isRight=RorL.nextBoolean();
                if(isRight)
                {
                    Way+="R";
                    count++;
                }
                else
                {
                    Way+="L";
                }
                temp--;
            }
            slots[count]++;
            System.out.println(Way);
            BallNumber--;
        }
        int max = Arrays.stream(slots).max().getAsInt();
        while(max>0)
        {
            for(int i=0;i<slots.length;i++)
            {
                if(max!=slots[i])
                {
                    System.out.print(" ");
                }
                else
                {
                    System.out.print("0");
                    slots[i]--;
                }
            }
            System.out.println();
            max--;
        }
        input.close();
    }
}
