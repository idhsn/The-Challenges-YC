# Day 1 – Exercices sur les Conditions (C Programming)

This repository contains C programs solving a series of challenges focused on **conditions, logical operators, comparisons, and control flow**.  
Each challenge is implemented in its own file.

---

## 📑 Challenges

### 1. Test de Parité
Determine if a number entered by the user is even or odd.  
Rule:  
```
if (n % 2 == 0) → even, else odd
```
🎯 **Goal:** Master modulo operator and simple conditions.

---

### 2. Identification de Voyelles
Check if a character is a vowel (`a, e, i, o, u`) using `switch case`.  
Note: Consider both uppercase and lowercase.  
🎯 **Goal:** Use switch for multiple comparisons.

---

### 3. Somme Conditionnelle
Calculate the sum of two integers with a special rule:  
- If numbers are identical → return triple their sum.  

Examples:  
```
(3,5) → 8
(4,4) → 24
```
🎯 **Goal:** Combine conditions with arithmetic operations.

---

### 4. Résolution d’Équation du Second Degré
Solve a quadratic equation of the form:  
```
ax² + bx + c = 0
```
Steps:  
1. Compute discriminant Δ = b² - 4ac  
2. Depending on Δ:  
   - Δ > 0 → Two real solutions  
   - Δ = 0 → One double solution  
   - Δ < 0 → No real solution  

🎯 **Goal:** Apply advanced math conditions.

---

### 5. Convertisseur d’Années (Menu Interactif)
Interactive program to convert a given year into:  
- Months  
- Days  
- Hours  
- Minutes  
- Seconds  

Approx:  
- 1 year = 365 days  
- 1 month = 30 days  

🎯 **Goal:** Work with menus and unit conversions.

---

### 6. Classification de Nombres
Classify a number as:  
- Positive (> 0)  
- Negative (< 0)  
- Zero (== 0)  

🎯 **Goal:** Use comparison operators.

---

### 7. Vérification d’Alphabet Majuscule
Check if a character is an uppercase letter (A-Z) using ASCII values.  
Rule:  
```
65 <= char <= 90
```
🎯 **Goal:** Understand ASCII ranges.

---

### 8. Système de Mentions Académiques
Assign a mention based on a student’s average:  
- < 10 → Fail  
- 10–11.9 → Passable  
- 12–13.9 → Fairly Good  
- 14–15.9 → Good  
- ≥ 16 → Very Good  

🎯 **Goal:** Manage cascading conditions.

---

### 9. Analyse Complète de Caractères
Analyze a character to check:  
- If it’s a letter  
- If uppercase or lowercase  

ASCII ranges:  
- Uppercase: 65–90  
- Lowercase: 97–122  

🎯 **Goal:** Combine multiple character classifications.

---

### 10. Reformatage de Dates
Convert a date from `DD/MM/YYYY` → `DD-Month-YYYY`.  
Example:  
```
15/09/2012 → 15-September-2012
```
🎯 **Goal:** Manipulate strings and arrays.

---

### 11. Générateur de Jour Aléatoire
Randomly generate a weekday.  
Steps:  
1. Generate a number between 1–7  
2. Match it to a day using switch  

Functions: `srand()`, `rand()`  
🎯 **Goal:** Use randomness.

---

### 12. Comparateur d’Heures
Compare two times (HH:MM:SS) and determine:  
- First precedes second  
- Second precedes first  
- Both identical  

🎯 **Goal:** Implement chronological comparison.

---

### 13. Point sur un Segment (Géométrie)
Check if a point lies on a segment.  
Inputs:  
- Segment endpoints `(x1,y1)` & `(x2,y2)`  
- Point `(x,y)`  

Condition:  
- Point must belong to line containing segment  
- Must be between endpoints  

🎯 **Goal:** Apply geometry with conditions.
