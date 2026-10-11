# LeetCode Solutions

![Language](https://img.shields.io/badge/language-C%2B%2B-blue)
![Platform](https://img.shields.io/badge/platform-LeetCode-orange)
![Status](https://img.shields.io/badge/status-in_progress-brightgreen)

A growing collection of my [LeetCode](https://leetcode.com) solutions in C++, organized by topic and following the [NeetCode](https://neetcode.io) roadmap. Every solution includes a short note on the approach and its time and space complexity.

The goal of this repository is to build strong fundamentals in data structures and algorithms by learning recurring problem-solving patterns instead of memorizing individual answers.

---

## Repository Structure

```
leetcode-solutions/
├── Arrays/
│   └── Hashing/
│       └── TwoSum.cpp
├── TwoPointers/
├── Stack/
├── BinarySearch/
├── LinkedList/
├── Trees/
└── README.md
```

Solutions are grouped by topic, and each file is named after the problem it solves.

---

## Solution Format

Each file starts with a short header comment so a solution can be understood at a glance:

```cpp
// LeetCode 1 - Two Sum
// Approach: hash map of value -> index; for each x, look up (target - x)
// Time: O(n) | Space: O(n)
```

---

## Progress

| Topic              | Easy | Medium | Hard | Total |
|--------------------|:----:|:------:|:----:|:-----:|
| Arrays & Hashing   |  1   |   0    |  0   |   1   |
| Two Pointers       |  0   |   0    |  0   |   0   |
| Stack              |  0   |   0    |  0   |   0   |
| Binary Search      |  0   |   0    |  0   |   0   |
| Linked List        |  0   |   0    |  0   |   0   |
| Trees              |  0   |   0    |  0   |   0   |
| **Total**          | **1**| **0**  | **0**| **1** |

*Updated as new problems are solved.*

---

## Approach

1. Attempt each problem independently for 20-30 minutes.
2. If stuck, study the solution until the underlying pattern is clear, then re-solve it from scratch without looking.
3. Document the approach and complexity in the file header.
4. Revisit difficult problems after a few days to check retention.

---

## Running a Solution Locally

Solutions are written for the LeetCode `Solution` class format. To test one locally, add a `main()` that calls the method, then compile:

```bash
g++ -std=c++17 Arrays/Hashing/TwoSum.cpp -o solution
./solution
```

---

## Topics Covered (Planned)

- Arrays & Hashing
- Two Pointers
- Sliding Window
- Stack
- Binary Search
- Linked List
- Trees
- Heap / Priority Queue
- Backtracking
- Graphs
- Dynamic Programming

---

## About

I'm a Software Engineering student at FAST-NUCES Lahore, building problem-solving skills alongside my Data Structures coursework and working toward strong fundamentals for higher studies and a career in software engineering.

GitHub: [@aliabdullah-se](https://github.com/aliabdullah-se)
