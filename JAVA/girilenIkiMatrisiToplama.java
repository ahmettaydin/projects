import java.util.Scanner;

public class Matris {

    public static void main(String[] args) {
        Scanner girdi = new Scanner(System.in);

        int[][] matrisA = new int[5][5];
        int[][] matrisB = new int[5][5];
        int[][] toplamMatrisi = new int[5][5];

        int x, y;

        do {
            System.out.println("Matrislerin satır sayısı(max 5):");
            x = girdi.nextInt();
        } while (x > 5);

        do {
            System.out.println("Matrislerin sütun sayısı(max 5):");
            y = girdi.nextInt();
        } while (y > 5);

        System.out.println("A Matrisi");
        degerAl(matrisA, x, y);

        System.out.println("B Matrisi");
        degerAl(matrisB, x, y);

        System.out.println("A + B Matrisi:");
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {

                toplamMatrisi[i][j] = matrisA[i][j] + matrisB[i][j];
                System.out.print(toplamMatrisi[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void degerAl(int[][] dizi, int x, int y) {
        Scanner girdi = new Scanner(System.in);

        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {

                System.out.print((i + 1) + ". satır " + (j + 1) + ". sütun: ");
                dizi[i][j] = girdi.nextInt();
            }
        }

        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++)
                System.out.print(dizi[i][j] + " ");

            System.out.println();
        }
    }
}