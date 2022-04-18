import java.util.Scanner;
public class Expt_7 {

    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);

        int r, c;
        System.out.print("\n\nNumber of rows : ");
        r = obj.nextInt();
        System.out.print("\n\nNumber of columns : ");
        c = obj.nextInt();


        int[][] m1 = new int[50][50];
        int[][] m2 = new int[50][50];

        System.out.println("\n\nEnter the Elements of first matrix : ");
        for(int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                m1[i][j] = obj.nextInt();
            }
        }

        System.out.print("________________________________________________________________________________________________________________________");
        
        System.out.println("\n\nEnter the Elements of second matrix : ");
        for(int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                m2[i][j] = obj.nextInt();
            }
        }

        obj.close();



        // Adding Two matrices
        int[][] addition = new int[r][c];

        for(int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                addition[i][j] = m1[i][j] + m2[i][j];
            }
        }

        // Displaying the result
        System.out.print("\n\n________________________________________________________________________________________________________________________");
        System.out.println("\n\nAddition of both matrices : ");
        for(int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                System.out.print(addition[i][j] + " ");
            }
            System.out.println();
        }
    }
}