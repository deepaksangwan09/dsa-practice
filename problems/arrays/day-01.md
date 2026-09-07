Title: Two Sum (Indices)
Topic: Arrays
Difficulty: Easy
Language: C++

Problem:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
Return the answer in any order.

Constraints:
- 2 <= nums.length <= 10^5
- -10^9 <= nums[i] <= 10^9
- -10^9 <= target <= 10^9

Examples:
1) Input: nums = [2,7,11,15], target = 9
   Output: [0,1]
2) Input: nums = [3,2,4], target = 6
   Output: [1,2]
3) Input: nums = [3,3], target = 6
   Output: [0,1]

Approach:
Use a hash map (unordered_map) mapping value -> index. For each element x at index i, check if target - x exists in the map; if so, return [map[target-x], i]. Otherwise insert x -> i. Runs in O(n) time and O(n) extra space.

Time complexity: O(n)
Space complexity: O(n)
