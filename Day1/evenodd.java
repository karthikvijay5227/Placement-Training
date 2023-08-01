import java.util.*;
public class evenodd{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count = 0,i=1;
        while(count<n)
        {
            int flag = 0;
            if(i%2==0)
            {
                flag = 1;
            }
            if(flag==1)
            {
                System.out.println(i);
                count++;
            }
            i++;
        }
    }
}