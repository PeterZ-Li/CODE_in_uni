import java.util.Scanner;
public class GuessNumber 
{
    public static void main(String[] args) 
    {
        int number=(int)(Math.random()*(20+1-1)+1);
        Scanner input =new Scanner(System.in);
        int Guess=input.nextInt();
        while(Guess!=number)
        {
            if(Guess>number)
            {
                System.out.println("Smaller than your guess");
                Guess=input.nextInt();
            }
            else if(Guess<number)
            {
                System.out.println("Bigger than your guess");
                Guess=input.nextInt();
            }
            else
            {
                System.out.println("You are right");
            }
        }
        System.out.println("You are right");
        input.close();
    }
}
