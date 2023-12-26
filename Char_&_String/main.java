import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        int sequence=1;
        
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of sequence: ");      

        // input the lenght of the sequence
        int n = sc.nextInt();
        while(n!=0)
        {
           System.out.print(sequence);
           System.out.print(" ");
           sequence*=2;
           n-=1;
        }
    }
}