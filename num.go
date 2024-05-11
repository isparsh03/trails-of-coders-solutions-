package main

import "fmt"

func main() {
    var N1, N2 int
    fmt.Print("Enter the first number (N1): ")
    fmt.Scanln(&N1)
    fmt.Print("Enter the second number (N2): ")
    fmt.Scanln(&N2)

    sumEven, sumOdd := 0, 0

    fmt.Println("Even numbers between", N1, "and", N2, "are:")
    for i := N1; i <= N2; i++ {
        if i%2 == 0 {
            fmt.Print(i, " ")
            sumEven += i
        }
    }

    fmt.Println("\nOdd numbers between", N1, "and", N2, "are:")
    for i := N1; i <= N2; i++ {
        if i%2 != 0 {
            fmt.Print(i, " ")
            sumOdd += i
        }
    }

    fmt.Println("\nSum of even numbers:", sumEven)
    fmt.Println("Sum of odd numbers:", sumOdd)
}
