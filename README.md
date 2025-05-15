#  LeetCode Daily Challenge - Palindrome Linked List

##  Problem Statement

Given the `head` of a singly linked list, return `true` if it is a palindrome or `false` otherwise.

 [LeetCode Problem Link](https://leetcode.com/problems/palindrome-linked-list/)

A **palindrome** is a sequence that reads the same backward as forward.

---

## Sample Test Cases

### ✅ Example 1:
Input: 1 -> 2 -> 2 -> 1
Output: true


### ❌ Example 2:
Input: 1 -> 2
Output: false


---

##  Approach

1. **Find the Middle** of the linked list using the slow and fast pointer technique.
2. **Reverse the Second Half** of the list.
3. **Compare** the first and second halves node-by-node.
4. Return `true` if all corresponding values match; otherwise, return `false`.

---

## 💻 Code Structure

- `solution.cpp` contains:
  - Definition for the linked list node.
  - The `isPalindrome` function inside a class `Solution`.
  - A `main()` function to take dynamic input and test the logic.

---

## 🧠 Time & Space Complexity

| Metric          | Value             |
|-----------------|------------------|
| Time Complexity | `O(n)`           |
| Space Complexity| `O(1)` (in-place) |

---

