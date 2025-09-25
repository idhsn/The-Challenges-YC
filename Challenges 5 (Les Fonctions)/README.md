# 📘 C Functions Exercises

This repository contains C programs solving challenges focused on **functions, parameters, return values, recursion, and modular programming**.  
Each challenge is implemented in its own file.

---

## 📑 Challenges

### 🔹 Challenge 1: Addition Function

Create a function that adds two integers and returns the result.  
**Signature:** `int somme(int a, int b);`

**Main program:** input two numbers, call the function, display the result.  
🎯 **Goal:** Master simple functions with parameters and return values.

---

### 🔹 Challenge 2: Multiplication Function

Create a function that multiplies two integers and returns the product.  
**Signature:** `int produit(int a, int b);`

**Main program:** test with different inputs, display results.  
🎯 **Goal:** Strengthen use of functions for arithmetic.

---

### 🔹 Challenge 3: Maximum of Two Numbers

Create a function that finds the larger of two integers.  
**Signature:** `int maximum(int a, int b);`

**Method:** use `if-else` or the ternary operator.  
🎯 **Goal:** Implement conditional logic in functions.

---

### 🔹 Challenge 4: Minimum of Two Numbers

Create a function that finds the smaller of two integers.  
**Signature:** `int minimum(int a, int b);`

**Extension:** adapt to handle three or more numbers.  
🎯 **Goal:** Complete basic comparison functions.

---

### 🔹 Challenge 5: Recursive Factorial

Create a function that computes the factorial of a positive integer.  
**Signature:** `long long factorielle(int n);`

**Approaches:**  
- Recursive: `n! = n × (n-1)!`  
- Iterative: multiplication loop  

**Special case:** `0! = 1`  
🎯 **Goal:** Understand recursion and cumulative calculations.

---

### 🔹 Challenge 6: N-th Fibonacci Term

Create a function that computes the *n-th* Fibonacci term.  
**Signature:** `long long fibonacci(int n);`

**Definition:**  
- F(0) = 0  
- F(1) = 1  
- F(n) = F(n-1) + F(n-2)  

**Approaches:**  
- Recursive (simple but slow)  
- Iterative (efficient)  

🎯 **Goal:** Implement mathematical sequences using functions.

---

### 🔹 Challenge 7: Reverse a String

Create a function that reverses a string **in-place**.  
**Signature:** `void inverser_chaine(char str[]);`

**Method:**  
1. Use two indices (start and end)  
2. Swap characters symmetrically  
3. Move toward the center  

**Note:** modifies the array passed by reference.  
🎯 **Goal:** Work with strings and reference passing.

---

### 🔹 Challenge 8: Even/Odd Test

Create a function that checks if a number is even or odd.  
**Signature:** `int est_pair(int nombre);`

**Return values:**  
- `1` (true) → even  
- `0` (false) → odd  

**Test:** use modulo `%`.  
🎯 **Goal:** Create boolean-style functions with clear conventions.

---
