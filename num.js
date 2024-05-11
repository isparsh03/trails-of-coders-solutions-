function printEvenOddAndSum(N1, N2) {
    let evenSum = 0;
    let oddSum = 0;

    for (let i = N1; i <= N2; i++) {
        if (i % 2 === 0) {
            console.log(i + " is even.");
            evenSum += i;
        } else {
            console.log(i + " is odd.");
            oddSum += i;
        }
    }

    console.log("Sum of even numbers: " + evenSum);
    console.log("Sum of odd numbers: " + oddSum);
}

// Example usage
printEvenOddAndSum(1, 10);
