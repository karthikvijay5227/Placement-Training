// import java.util.*;
// public class gcd{
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int a = sc.nextInt();
//         int b=sc.nextInt();
//         System.out.println(gcds(a,b));
        
//     }

//     public static int gcds(int a,int b)
//     {
//         if(b==0)
//             return a;
//         return gcds(b,a%b);
//     }
// }

// Method 2

import java.util.*;
public class gcd{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b=sc.nextInt();
        int c = Math.min(a,b);

    for(int i=c;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            System.out.println(i);
            break;
        }
    }
}
}