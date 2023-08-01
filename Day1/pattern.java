import java.util.*;
public class pattern{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = n;
        for(int i=0;i<n;i++)
        {
            k-=1;
            for(int j=0;j<k;j++)
            {
                System.out.print("\t");
            }
            for(int j=0;j<=i;j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}