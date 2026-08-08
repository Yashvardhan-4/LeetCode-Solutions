# [3512. Minimum Operations to Make Array Sum Divisible by K](https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/)

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=for-the-badge) ![Platform](https://img.shields.io/badge/Platform-LeetCode-000000?style=for-the-badge&logo=leetcode)

## 📝 Problem Description

You are given an integer array `nums` and an integer `k`. You can perform the following operation any number of times:

	- Select an index `i` and replace `nums[i]` with `nums[i] - 1`.

Return the **minimum** number of operations required to make the sum of the array divisible by `k`.

 

Example 1:

**Input:** nums = [3,9,7], k = 5

**Output:** 4

**Explanation:**

	- Perform 4 operations on `nums[1] = 9`. Now, `nums = [3, 5, 7]`.
	- The sum is 15, which is divisible by 5.

Example 2:

**Input:** nums = [4,1,3], k = 4

**Output:** 0

**Explanation:**

	- The sum is 8, which is already divisible by 4. Hence, no operations are needed.

Example 3:

**Input:** nums = [3,2], k = 6

**Output:** 5

**Explanation:**

	- Perform 3 operations on `nums[0] = 3` and 2 operations on `nums[1] = 2`. Now, `nums = [0, 0]`.
	- The sum is 0, which is divisible by 6.

 

**Constraints:**

	- `1 <= nums.length <= 1000`
	- `1 <= nums[i] <= 1000`
	- `1 <= k <= 100`

---

## 🏷️ Topic Tags
`Array` `Math`

---

## ⚡ Submission Stats

| Metric | Result | Percentile |
| :--- | :--- | :--- |
| ⏱️ **Runtime** | `0 ms` | N/A |
| 🧠 **Memory** | `0.00
MB` | N/A |
| 💻 **Language** | `C++` | - |
| 📅 **Date** | `Aug 8, 2026` | - |

---

## 💡 Solution Overview & Complexity Analysis

> [!TIP]
> *Add your approach, key insights, time complexity $O(N)$, and space complexity $O(1)$ notes here.*

---
*Auto-synced with ❤️ using [GitDSA Sync](https://github.com).*
