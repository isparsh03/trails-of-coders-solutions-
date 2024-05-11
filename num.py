def print_even_odd_numbers(N1, N2):
    even_sum = 0
    odd_sum = 0
    
    for num in range(N1, N2+1):
        if num % 2 == 0:
            print(f"Even Number: {num}")
            even_sum += num
        else:
            print(f"Odd Number: {num}")
            odd_sum += num
    
    print(f"Sum of Even Numbers: {even_sum}")
    print(f"Sum of Odd Numbers: {odd_sum}")

# Define the range of numbers
N1 = 1
N2 = 10

# Call the function to print even and odd numbers and their sums
print_even_odd_numbers(N1, N2)
