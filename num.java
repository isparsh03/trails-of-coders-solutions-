public class EvenOddNumbers {
    public static void main(String[] args) {
        int N1 = 1;
        int N2 = 10;
        int sumEven = 0;
        int sumOdd = 0;

        System.out.println("Even numbers between " + N1 + " and " + N2 + ":");
        for (int i = N1; i <= N2; i++) {
            if (i % 2 == 0) {
                System.out.print(i + " ");
                sumEven += i;
            }
        }

        System.out.println("\nOdd numbers between " + N1 + " and " + N2 + ":");
        for (int i = N1; i <= N2; i++) {
            if (i % 2 != 0) {
                System.out.print(i + " ");
                sumOdd += i;
            }
        }

        System.out.println("\nSum of even numbers: " + sumEven);
        System.out.println("Sum of odd numbers: " + sumOdd);
    }
}
