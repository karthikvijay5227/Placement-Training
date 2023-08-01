import java.util.*;
public class fibonacci{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<Integer>();
        int a=0,b=1;
        int n = sc.nextInt();
        int flag = 0;
        System.out.print(a+" "+b+" ");
        arr.add(a);
        arr.add(b);
        for(int i=2;i<=n;i++)
        {
            int c = a+b;
            System.out.print(c+" ");
            a = b;
            b = c;
            arr.add(c);
        }
        if(arr.contains(n))
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }
    }
}


//Method 2

// import java.util.*;
// public class fibonacci{
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         ArrayList<Integer> arr = new ArrayList<Integer>();
//         int a=0,b=1;
//         int n = sc.nextInt();
//         int flag = 0;
//         System.out.print(a+" "+b+" ");
//         // arr.add(a);
//         // arr.add(b);
//         for(int i=2;i<=n;i++)
//         {
//             int c = a+b;
//             System.out.print(c+" ");
//             a = b;
//             b = c;
//             // arr.add(c);
//             if(n == c){
//                 flag = 1;
//             }

//         }
//         if(flag==1)
//         {
//             System.out.println("Yes");
//         }
//         else
//         {
//             System.out.println("No");
//         }
//     }
// }