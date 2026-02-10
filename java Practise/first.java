import java.util.*;

public class first {
    public static void main (String args[]) {
        Scanner sc = new Scanner(System.in);
        // String name = "Aditya";
        // String name2 = "Raj";
        // System.out.println(name + " " + name2);
        // System.out.println(name.charAt(2));
        // int arr[] = new int[5];
        // for(int i = 0; i < 5; i++) {
        //     arr[i] = i+1;
        // }
        // for(int i = 0; i < 5; i++) {
        //     System.out.println(arr[i]);
        // }

        int arr[] = {28, 12, 98, 356,1};
        Arrays.sort(arr);
        for(int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]);
        }
        
        int row = sc.nextInt();
        int col = sc.nextInt();
        int arr1[][] = new int[row][col];
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                arr1[i][j] = sc.nextInt();
            }
        }

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                System.out.print(arr1[i][j]);
            }
        }
    }
}