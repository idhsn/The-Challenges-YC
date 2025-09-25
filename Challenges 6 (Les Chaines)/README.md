# 📘 C String Exercises

This repository contains C programs solving challenges focused on **string handling, manipulation, and algorithms**.  
Each challenge is implemented in its own file.

---

## 📑 Challenges

### 🔹 Challenge 1: Simple Input and Output

Create a program that reads a string from the user and displays it.  
**Recommended function:** `fgets()` for safe input  
🎯 **Goal:** Master string input and output.

---

### 🔹 Challenge 2: String Length Calculator (Without strlen)

Develop a program that calculates the length of a string **without using `strlen()`**.  
**Method:** iterate character by character until the `'\0'` terminator.  
🎯 **Goal:** Understand the internal structure of strings.

---

### 🔹 Challenge 3: String Concatenation

Create a program that combines two strings into one.  
**Approaches:**  
- Manual: copy the first string, then append the second  
- Using `strcat()` for comparison  

🎯 **Goal:** Manipulate and assemble strings.

---

### 🔹 Challenge 4: String Comparator

Develop a program that checks if two strings are identical.  
**Method:** character-by-character comparison or using `strcmp()`.  
🎯 **Goal:** Implement string comparison algorithms.

---

### 🔹 Challenge 5: String Reverser

Create a program that reverses the characters in a string.  
**Example:** `"abcd"` → `"dcba"`  
**Method:** swap characters symmetrically (first with last, etc.)  
🎯 **Goal:** Manipulate indices and modify strings in-place.

---

### 🔹 Challenge 6: Character Occurrence Counter

Develop a program that counts occurrences of a character in a string.  
**Process:**  
1. Input the main string  
2. Input the character to search  
3. Iterate and count matches  

🎯 **Goal:** Implement search and counting algorithms.

---

### 🔹 Challenge 7: Convert to Uppercase

Create a program that converts all characters in a string to uppercase.  
**Method:**  
- Use `toupper()` from `<ctype.h>`  
- Or manual conversion: `c - 'a' + 'A'` for lowercase letters  

🎯 **Goal:** Manipulate ASCII codes and transform characters.

---

### 🔹 Challenge 8: Convert to Lowercase

Develop a program that converts all characters in a string to lowercase.  
**Method:**  
- Use `tolower()` from `<ctype.h>`  
- Or manual conversion: `c - 'A' + 'a'` for uppercase letters  

🎯 **Goal:** Reinforce character transformation.

---

### 🔹 Challenge 9: Remove Spaces

Create a program that removes all spaces from a string.  
**Algorithm:**  
1. Iterate through the original string  
2. Copy only non-space characters  
3. Terminate with `'\0'`  

🎯 **Goal:** Filter and reorganize string content.

---

### 🔹 Challenge 10: Substring Search

Develop a program that checks if a substring exists in a main string.  
**Approaches:**  
- Manual: double loop to compare  
- Using `strstr()` for comparison  

🎯 **Goal:** Implement pattern search algorithms.

---

## 🧩 Key String Concepts

### ✨ Memory Representation

- Strings are character arrays ending with `'\0'`  
- Declaration examples:  
```c
char str[100];
char str[] = "text";
