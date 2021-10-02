public class QuestionTwo 
{
    public static void main(String[] args) 
    {
        for(int cock=0;cock<=20;cock++)//
        {
            for(int hen=0;hen<=33;hen++)//
            {
                if(5*cock+3*hen+(100-cock-hen)/3==100&&(100-cock-hen)%3==0)
                {
                    System.out.printf("Cock:%d Hen:%d Chick:%d\n", cock,hen,100-cock-hen);
                }
            }
        }
    }
}
