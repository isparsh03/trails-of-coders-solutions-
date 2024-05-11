package main

import "fmt"

func main() {
    n := 20
    seq := make([]int, n)
    for i := 0; i < n; i++ {
        seq[i] = i / 2
    }

    fmt.Println(seq)
}
