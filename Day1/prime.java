//prime numbers in the range of 2 to n

import java.util.*;
public class prime{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count = 0,i=2;
        while(count<n)
        {
            int flag = 0;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag!=1)
            {
                System.out.println(i);
                count++;
            }
            i++;
        }
    }
}