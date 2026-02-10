import java.util.*;

class InvalidAgeException extends Exception {
    InvalidAgeException(String message) {
        super(message);
    }
}

public class Test {
    public static void main (String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a age: ");
        int age = sc.nextInt();

        try{
            if(age < 18) {
                throw new InvalidAgeException("You are under age");
            }
            System.out.println(age/0);
        } catch(InvalidAgeException e) {
            System.out.println(e);
        } catch(Exception e) {
            System.out.println(e);
        } finally {
            System.out.println("Hello I am raj!");
        }
    }
}