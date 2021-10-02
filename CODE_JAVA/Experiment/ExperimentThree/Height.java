import java.util.Scanner;
public class Height 
{
    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);
        long InitialHeight=input.nextInt(),n=input.nextInt();
        float Distance=0,BounceHeight=0,Midheight=(float)InitialHeight;//当n=0时，球没有反弹过，于是没有在空中经过，也没有反弹后的高度
        while(n>0)
        {
            Distance+=BounceHeight+Midheight;//前一次反弹后要经过的距离+前一次反弹后落下再次反弹经过的距离
            BounceHeight=Midheight/2;//前一次反弹在空中的最高高度/2
            Midheight/=2;//反弹后的高度，也表示将要落下的距离
            n--;
        }
        System.out.print(String.format("%.1f %.1f", Distance,BounceHeight));
        input.close();
    }
}
