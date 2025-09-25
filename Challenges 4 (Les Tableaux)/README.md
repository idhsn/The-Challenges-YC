# 📘 Exercices sur les Tableaux en C

This repository contains C programs solving challenges focused on **arrays, indexing, iteration, and data manipulation**.  
Each challenge is implemented in its own file.

---

## 📑 Challenges

---

### 🔹 Challenge 1 : Initialisation et Affichage de Base
Initialize an array with predefined values and display them.  
**Example:** `[1, 2, 3, 4, 5]` printed line by line.  
🎯 **Goal:** Learn declaration, initialization, and traversal of arrays.

---

### 🔹 Challenge 2 : Saisie Interactive de Tableau
Ask the user for array size and its elements, then display them.  
**Steps:**  
1. Input number of elements  
2. Input each element  
3. Display array  

🎯 **Goal:** Handle dynamic size and user input.

---

### 🔹 Challenge 3 : Calculateur de Somme
Compute the sum of all array elements.  
🎯 **Goal:** Use an **accumulator** with arrays.

---

### 🔹 Challenge 4 : Recherche du Maximum
Find the **largest element** in an array.  
**Method:** initialize with first element, compare with the rest.  
🎯 **Goal:** Implement **extremum search**.

---

### 🔹 Challenge 5 : Recherche du Minimum
Find the **smallest element** in an array.  
🎯 **Goal:** Reinforce extremum search.

---

### 🔹 Challenge 6 : Multiplication par Facteur
Multiply each array element by a given factor.  
**Steps:**  
1. Input array  
2. Input multiplication factor  
3. Output resulting array  

🎯 **Goal:** Apply arithmetic operations to arrays.

---

### 🔹 Challenge 7 : Tri par Ordre Croissant
Sort an array in ascending order (**without predefined functions**).  
**Suggested:** Bubble sort or Selection sort.  
🎯 **Goal:** Implement a **basic sorting algorithm**.

---

### 🔹 Challenge 8 : Copie de Tableau
Copy one array into another.  
🎯 **Goal:** Practice element **copying**.

---

### 🔹 Challenge 9 : Inversion de Tableau
Reverse the order of elements in an array.  
**Example:** `[1, 2, 3, 4, 5] → [5, 4, 3, 2, 1]`  
🎯 **Goal:** Work with **symmetric index swaps**.

---

### 🔹 Challenge 10 : Recherche Linéaire
Search for a specific element in an array.  
**Feature:** Indicate presence and position if found.  
🎯 **Goal:** Implement **linear search**.

---

### 🔹 Challenge 11 : Remplacement d’Éléments
Replace all occurrences of a value with a new one.  
**Steps:**  
1. Input array  
2. Input value to replace + new value  
3. Replace occurrences  
4. Display modified array  

🎯 **Goal:** Selectively modify elements.

---

### 🔹 Challenge 12 : Filtrage des Nombres Pairs
Display only **even elements** of an array.  
**Condition:** `value % 2 == 0`  
🎯 **Goal:** Apply filtering on arrays.

---

### 🔹 Challenge 13 : Filtrage des Nombres Impairs
Display only **odd elements** of an array.  
**Condition:** `value % 2 != 0`  
🎯 **Goal:** Reinforce filtering.

---

### 🔹 Challenge 14 : Calcul de Moyenne
Compute the arithmetic mean of array elements.  
**Formula:**  
Average = Sum / Number of elements
⚠️ Handle division by zero and decimals.  
🎯 **Goal:** Combine cumulative sums and math.

---

### 🔹 Challenge 15 : Fusion de Tableaux
Merge two arrays into one.  
**Steps:**  
1. Input both arrays  
2. Create a third array of size = sum of both  
3. Copy first then second  
4. Display result  

🎯 **Goal:** Work with multiple arrays.

---

## 💡 General Notes

✅ Best practices:  
- Validate array size (**> 0**)  
- Use constants for max sizes  
- Initialize variables before use  
- Check array bounds  

🔧 Useful functions:  
- `scanf()` → input  
- `printf()` → output  
- `for` loops → traversal  
- `if` → selective processing  
