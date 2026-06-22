import java.util.Scanner;

public class guessingGame {
    public static void main (String args[]) {
        Scanner sc = new Scanner(System.in);
        int guessNum = (int)(Math.random() * 100) + 1;
        System.out.println("You can choose a number between 1 and 100 : ");
        System.out.println("You have total of 5 attempts to gues the the correct answer.");

        int count = 5;
        for (; count >= 1; count--) {
            if(count != 5) System.out.println("You have " + count + " more attempt left.");
            System.out.print("Enter your guess: ");
            int user = sc.nextInt();
            if(guessNum == user) {
                System.out.println("Congratulations🎉! you won the game.");
                break;
            } else if (guessNum > user) {
                System.out.println("the number is greater than " + user);
            } else {
                System.out.println("the number is smaller than " + user);
            }
        }
        if(count == 0) {
            System.out.println("Sorry you have exhausted all your attempts.");
            System.out.println("The actual number was " + guessNum);
        }
        sc.close();
    }
}
