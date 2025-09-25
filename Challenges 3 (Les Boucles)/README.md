# Exercices sur les Boucles en C

This repository contains C programs solving challenges focused on **loops, iterations, sequences, and cumulative calculations**.  
Each challenge is implemented in its own file.

---

## 📑 Challenges

### 1. Générateur de Table de Multiplication
Generate the full multiplication table of a user-chosen number (1 to 10).  
Example (number = 4):  
```
4 × 1 = 4
4 × 2 = 8
...
4 × 10 = 40
```
🎯 **Goal:** Practice simple `for` loops and formatting.

---

### 2. Calculateur de Factorielle
Compute factorial of a positive integer.  
Formula:  
```
n! = 1 × 2 × 3 × ... × n
```
Special case: `0! = 1`  
Example: `5! = 120`  
🎯 **Goal:** Use loops for cumulative product.

---

### 3. Sommateur de Nombres Naturels
Calculate the sum of the first `n` natural numbers.  
Formula:  
```
Sum = 1 + 2 + 3 + ... + n
```
Check with formula: `n(n+1)/2`  
Example: `n = 4 → 10`  
🎯 **Goal:** Use loops for cumulative addition.

---

### 4. Générateur de Nombres Impairs
Display the first `n` odd numbers.  
Sequence: `1, 3, 5, 7, 9...`  
Methods:  
- Formula: `2i - 1`  
- Test parity  

Example: `n = 5 → 1, 3, 5, 7, 9`  
🎯 **Goal:** Understand patterns in loops.

---

### 5. Calculateur de Puissance (Sans pow)
Calculate a power using only loops.  
Inputs: Base and Exponent  
Method: repeated multiplication.  
Example: `3^4 = 81`  
Special cases:  
- Exponent = 0 → Result = 1  
- Negative exponents (optional)  
🎯 **Goal:** Implement math with loops.

---

### 6. Générateur de Nombres Pairs
Display the first `n` even numbers.  
Sequence: `2, 4, 6, 8...`  
Methods:  
- Formula: `2i`  
- Increment by 2 starting at 2  

Example: `n = 4 → 2, 4, 6, 8`  
🎯 **Goal:** Generate numeric sequences.

---

### 7. Inverseur de Nombre (Sans Tableau)
Reverse digits of an integer without arrays.  
Steps:  
1. Extract last digit with `% 10`  
2. Build reversed number  
3. Remove last digit with `/ 10`  
4. Repeat until number = 0  

Example: `12345 → 54321`  
🎯 **Goal:** Manipulate digits with arithmetic.

---

### 8. Générateur de Suite de Fibonacci
Generate first `n` Fibonacci terms.  
Definition:  
```
F(0) = 0, F(1) = 1
F(n) = F(n-1) + F(n-2)
```
Example sequence: `0, 1, 1, 2, 3, 5, 8...`  
🎯 **Goal:** Implement recursive sequences iteratively.

---

### 9. Compteur de Chiffres
Count digits in a positive integer.  
Method: divide by 10 until 0.  
Example: `12345 → 5 digits`  
Special case: `0` has 1 digit.  
🎯 **Goal:** Analyze numbers with loops.

---

### 10. Sommateur Interactif d'Entiers
Sum the first `n` natural numbers with iterative approaches.  
Variants:  
- Classic `for` loop  
- `while` loop  
- Compare with formula `n(n+1)/2`  

Example: `n = 3 → 6`  
🎯 **Goal:** Strengthen mastery of loops.

---

## 💡 General Notes on Loops
Types in C:  
- `for`: when iteration count is known  
- `while`: for dynamic stop conditions  
- `do-while`: ensures at least one execution  

Best practices:  
- Always initialize accumulators  
- Check stop conditions to avoid infinite loops  
- Handle edge cases (negative numbers, zero)  
- Use meaningful variable names  
