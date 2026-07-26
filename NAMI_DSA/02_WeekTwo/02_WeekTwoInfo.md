# Control Structures, Loops, Strings, Random Numbers

    Question 1: Grade Calculator
        Write a program that asks the user for a score (0-100) and prints the grade using if-else:

        A: 90-100
        B: 80-89
        C: 70-79
        D: 60-69
        F: Below 60
        
        Sample Output:
        Enter your score: 85
        Your grade is: B
        
        
    Question 2: Number Guessing Game
        Create a simple number guessing game where the computer generates a random number between 1-100 and the user guesses it. Use a do-while loop.

        Sample Output:
        Guess the number (1-100): 50
        Too low! Try again: 75
        Too high! Try again: 62
        Correct! You took 3 attempts!
        
    Question 3: Sum of Numbers
        Write a program that asks the user for a positive integer n and calculates the sum of all numbers from 1 to n using a for loop.

        Sample Output:
        Enter a positive number: 5
        Sum of 1 to 5 is: 15
        
        
    Question 4: Multiplication Table
        Write a program that generates a multiplication table for numbers 1-10 using nested loops.
    
        Sample Output:
        Multiplication Table (1-10):
           1  2  3  4  5  6  7  8  9 10
        1  1  2  3  4  5  6  7  8  9 10
        2  2  4  6  8 10 12 14 16 18 20
        3  3  6  9 12 15 18 21 24 27 30
        ...

# Functions
    Question 1: Basic Calculator Functions
        Write a program with functions for basic arithmetic operations:

        add(a, b) - returns sum
        subtract(a, b) - returns difference
        multiply(a, b) - returns product
        divide(a, b) - returns quotient (handle division by zero)
        
        Sample Output:
        Enter two numbers: 10 5
        10 + 5 = 15
        10 - 5 = 5
        10 * 5 = 50
        10 / 5 = 2

        Enter two numbers: 10 0
        10 / 0 = Error: Division by zero!
        
        
    Question 2: Maximum of Three Numbers
        Write a function maxOfThree that takes three integers and returns the largest.

        Sample Output:
        Enter three numbers: 5 12 8
        The maximum is: 12
        
        
    Question 3: Check Even or Odd
        Write a function isEven that returns true if a number is even, false otherwise. Use it in a program to check numbers.

        Sample Output:
        Enter a number: 7
        7 is odd

        Enter a number: 12
        12 is even
        
        
    Question 4: Power Function
        Write a function power(base, exponent) that calculates base^exponent without using the built-in pow() function.

        Sample Output:
        Enter base: 2
        Enter exponent: 5
        2^5 = 32
        
        
    Question 5: Print Rectangle
        Write a function printRectangle(width, height, char) that prints a rectangle using the specified character.

        Sample Output:
        Enter width: 5
        Enter height: 3
        Enter character: *
        *****
        *****
        *****
        
    
    Question 6: Prime Number Checker
        Write a function isPrime that determines if a number is prime. Then write a program that prints all prime numbers in a given range.

        Sample Output:
        Enter range (start end): 10 50
        Prime numbers between 10 and 50:
        11 13 17 19 23 29 31 37 41 43 47
        
        
    Question 7: Fibonacci Series
        Write a function fibonacci(n) that returns the nth Fibonacci number. Also write a function to print the first n Fibonacci numbers.

        Sample Output:
        Enter n: 10
        First 10 Fibonacci numbers:
        0 1 1 2 3 5 8 13 21 34
        The 10th Fibonacci number is: 34
        
        
    Question 8: String Reverser
        Write a function reverseString that takes a string and returns its reverse. Also write a function isPalindrome that uses it.

        Sample Output:
        Enter a string: hello
        Reversed: olleh
        Is 'hello' a palindrome? No

        Enter a string: racecar
        Reversed: racecar
        Is 'racecar' a palindrome? Yes


    Question 9: Swap Using References
        Write a function swap that swaps two integers using pass-by-reference.

        Sample Output:
        Enter two numbers: 5 10
        Before swap: a=5, b=10
        After swap: a=10, b=5
        
        
    Question 10: Function Overloading
        Create overloaded functions for:

        area() for circle (radius)
        area() for rectangle (length, width)
        area() for triangle (base, height)
        area() for square (side)
        
        Sample Output:
        Circle area (r=5): 78.54
        Rectangle area (5, 10): 50
        Triangle area (6, 8): 24
        Square area (4): 16
        
    
    Question 11: Static and Default Parameters
        Create a function createGreeting with:

        Default parameter for greeting type ("Hello")
        Static counter to track how many times called
        Return a formatted greeting string
        
        Sample Output:
        Greeting 1: Hello, Alice!
        Greeting 2: Hi, Bob!
        Greeting 3: Hey, Charlie!
        Total greetings created: 3
        
        
    Question 12: Template Functions
        Write template functions for:

        maxValue - finds maximum of two values of any type
        swap - swaps two values of any type
        printArray - prints array of any type
        
        Sample Output:
        Max of 5 and 10: 10
        Max of 3.14 and 2.71: 3.14
        Max of 'a' and 'z': z
        Before swap: 10 20
        After swap: 20 10
        Array: [1, 2, 3, 4, 5]
