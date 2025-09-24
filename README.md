
# Exp-16 Exception Handling in C++

**Aim:**
To study and implement the concept of **Exception Handling** in C++.

**Tools Used:**
VS Code or Online C++ Compiler

---

## Theory

In C++, **Exception Handling** is a mechanism that allows a program to handle unexpected situations (errors) without crashing. Instead of stopping execution when an error occurs, the program can **“catch” the error, process it gracefully, and continue running**.

Exception handling improves program robustness by allowing developers to isolate error-prone code and define specific responses to different types of errors. This prevents abrupt program termination and helps in giving meaningful feedback to users.

### Why Exceptions are Needed

* Programs often encounter unpredictable errors such as invalid user input, hardware failures, or logic errors.
* Without exception handling, these errors cause the program to terminate abruptly, often producing confusing output or corrupted data.
* Exception handling provides a way to transfer control from the point of error to an error handler, which can decide whether to correct, log, retry, or terminate safely.

### Exception Handling Keywords in C++

* **`try` block:**
  Encapsulates code that might generate exceptions. It defines a scope in which exceptions can be thrown and caught.

* **`throw` statement:**
  Used to signal an exception when an error condition is met. Throws an object (or primitive) representing the error.

* **`catch` block:**
  Defines how to handle the thrown exception. Catch blocks can be overloaded to handle different types of exceptions differently.

### General Syntax

```cpp
try {
    // code that might cause an error
    if (error_condition) {
        throw value; // throwing an exception
    }
}
catch (datatype var) {
    // code to handle the exception
}
```

### Flow of Exception Handling

1. The program executes the code inside the `try` block.
2. When an error condition is detected, the program executes the `throw` statement to send an exception.
3. Control transfers to the matching `catch` block that handles the exception.
4. The catch block executes error handling code.
5. After handling, program execution continues normally beyond the catch block (unless re-thrown or terminated).

### Advantages of Exception Handling

* Prevents program crashes and abnormal termination.
* Separates normal code logic from error handling logic for better readability.
* Provides clearer, user-friendly error messages.
* Makes programs more maintainable and easier to debug.
* Centralizes error handling reducing code duplication.

---

## Program 1 – Division by Zero

**Algorithm:**

1. Start the program.
2. Declare two integer variables `a` and `b`.
3. Prompt the user to input values for `a` (numerator) and `b` (denominator).
4. Enter a `try` block:

   * Check if `b == 0`.

     * If yes, `throw` an exception (e.g., a string message).
   * Otherwise, perform the division `a / b`.
   * Display the result.
5. Enter a `catch` block:

   * Catch the thrown exception.
   * Print a message: “Denominator cannot be zero.”
6. End the program.

**Sample Output 1:**

```
Enter numerator: 15
Enter denominator: 3
Result: 5
```

**Sample Output 2:**

```
Enter numerator: 10
Enter denominator: 0
Error: Denominator cannot be zero.
```

---

## Program 2 – ATM Transaction System

**Algorithm:**

1. Start the program.
2. Define an `ATM` class with:

   * A private data member `balance`.
   * Member functions:

     * `deposit(amount)`:

       * If `amount <= 0`, throw an exception.
       * Otherwise, add `amount` to `balance`.
     * `withdraw(amount)`:

       * If `amount <= 0`, throw an exception.
       * If `amount > balance`, throw an exception for insufficient funds.
       * Otherwise, deduct `amount` from `balance`.
     * `checkBalance()`:

       * Display the current `balance`.
3. In the `main()` function:

   * Initialize the ATM with a default balance (e.g., 5000).
   * Display a menu with options:

     1. Check Balance
     2. Deposit Money
     3. Withdraw Money
     4. Exit
4. Based on user choice:

   * Use a `try` block to call the appropriate ATM function.
   * Catch any exceptions and display error messages.
5. Continue displaying the menu until the user selects Exit.
6. Stop the program.

**Sample Output:**

```
--- ATM Menu ---
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 1
Current balance: $5000

Enter your choice: 2
Enter deposit amount: -100
Error: Deposit amount must be positive.

Enter your choice: 3
Enter withdrawal amount: 6000
Error: Insufficient balance.

Enter your choice: 3
Enter withdrawal amount: 3000
Withdrawal successful.

Enter your choice: 1
Current balance: $2000

Enter your choice: 4
Thank you for using the ATM.
```

---

## Program 3 – Age Validation

**Algorithm:**

1. Start the program.
2. Declare an integer variable `age`.
3. Prompt the user to enter their age.
4. Inside a `try` block:

   * If `age < 0`, throw an exception (invalid input).
   * Else if `age < 18`, throw an exception (below minimum age).
   * Otherwise, print “Accepted.”
5. Inside a `catch` block:

   * If exception indicates invalid age (`age < 0`), print “Invalid age entered.”
   * Else print “You are below 18.”
6. End the program.

**Sample Output 1:**

```
Enter your age: 25
Accepted.
```

**Sample Output 2:**

```
Enter your age: 15
You are below 18.
```

**Sample Output 3:**

```
Enter your age: -5
Invalid age entered.
```

---

## Key Learning Outcomes

* Understanding the roles of **try**, **throw**, and **catch** keywords.
* Handling common runtime errors like division by zero, invalid input, or insufficient funds.
* Separating error-handling logic from normal program flow.
* Writing more robust, secure, and user-friendly C++ programs.

---

## Applications

* **Banking Systems:** Avoid invalid transactions and ensure balance safety.
* **Data Entry Validation:** Ensure inputs such as age, salary, IDs are valid.
* **Mathematical Operations:** Avoid runtime errors like division by zero.
* **File Handling:** Manage errors from missing or corrupt files.
* **Networking:** Handle connection failures and timeouts smoothly.

---

## Advantages of Exception Handling

* Prevents abnormal program termination due to runtime errors.
* Provides clear and meaningful error messages to users.
* Improves overall program reliability and robustness.
* Enables centralized and cleaner error handling.
* Simplifies debugging and maintenance processes.

---
Sure! Here’s a concise conclusion for your document:

---

## Conclusion

Exception Handling in C++ is a powerful tool that helps programs manage errors gracefully without crashing. By using `try`, `throw`, and `catch`, developers can separate normal logic from error handling, making applications more reliable, user-friendly, and easier to maintain. Mastering exception handling is essential for writing robust and professional C++ programs.
