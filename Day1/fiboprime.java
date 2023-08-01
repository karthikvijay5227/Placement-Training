// import java.util.*;
// public class fiboprime{
//     public static void main(String[] args) {
//         ArrayList<Integer> fibo = new ArrayList<>();
//         ArrayList<Integer> primes = new ArrayList<>();
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();

//         fibonacci(n,fibo);
//         prime(n,primes);

//         ArrayList<Integer> newArray = new ArrayList<>();
//         int fiboIndex = 0;
//         int primesIndex = 0;
//         for (int i = 0; i < n; i++) {
//             if (i % 2 == 0) {
//                 newArray.add(fibo.get(fiboIndex));
//                 fiboIndex++;
//             } else {
//                 newArray.add(primes.get(primesIndex));
//                 primesIndex++;
//             }
//         }

//         System.out.print(newArray);
//     }

//     public static void fibonacci(int n,ArrayList<Integer> fibo)
//     {
//         int a=0,b=1;
//         int flag = 0;
//         fibo.add(a);
//         fibo.add(b);
//         for(int i=2;i<=n;i++)
//         {
//             int c = a+b;
//             a = b;
//             b = c;
//             fibo.add(c);
//         }
//    }

//     public static void prime(int n,ArrayList<Integer> prime)
//     {
//         int count = 0,i=2;
//         while(count<n)
//         {
//             int flag = 0;
//             for(int j=2;j<i;j++)
//             {
//                 if(i%j==0)
//                 {
//                     flag = 1;
//                     break;
//                 }
//             }
//             if(flag!=1)
//             {
//                 prime.add(i);
//                 count++;
//             }
//             i++;
//         }
//     }
// }

//Method 2 with nth fibonacci and nth prime

import java.util.Scanner;

public class fiboprime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i = 0, p = 1; i < n; i++) {
            if (i % 2 == 0) {
                System.out.print(fibonacci(i / 2) + " ");
            } else {
                p = prime(p);
                System.out.print(p + " ");
            }
        }
    }

    public static int fibonacci(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        int a = 0, b = 1;
        int c = 0;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }

    public static int prime(int p) {
        int count = 0, i = p + 1;
        while (true) {
            int flag = 0;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    flag = 1;
                    break;
                }
            }
            if (flag != 1) {
                return i;
            }
            i++;
        }
    }
}

