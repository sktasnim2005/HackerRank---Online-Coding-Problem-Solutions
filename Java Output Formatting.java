import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("================================");
        
        String[] strings = new String[3];
        int[] ints = new int[3];

        for (int i = 0; i < 3; i++) {
            strings[i] = sc.next();
            ints[i] = sc.nextInt();
        }

        for (int i = 0; i < 3; i++) {
            System.out.printf("%-15s%03d%n", strings[i], ints[i]);
        }

        System.out.println("================================");
        sc.close();
    }
}


/*
import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int x=sc.nextInt();
                //Complete this line
            }
            System.out.println("================================");
            or(int i=0;i<3;i++){
                System.out.println(s1);
                S
            }
    }
}

*/

