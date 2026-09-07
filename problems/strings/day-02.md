Title: Longest Substring Without Repeating Characters
Topic: Strings
Difficulty: Medium
Language: C++

Problem:
Given a string s, find the length of the longest substring without repeating characters.

Constraints:
- 0 <= s.length <= 5 * 10^4
- s consists of English letters, digits, symbols and spaces.

Examples:
1) Input: s = "abcabcbb"
   Output: 3
   Explanation: The answer is "abc", with the length of 3.
2) Input: s = "bbbbb"
   Output: 1
   Explanation: The answer is "b".
3) Input: s = "pwwkew"
   Output: 3
   Explanation: The answer is "wke".

Approach:
Use a sliding-window with a last-seen index map. Expand the right end while characters are unique; when a repeat is found, move the left pointer to max(left, last_seen[c] + 1). Track max window size. This runs in O(n) time and O(min(n, charset_size)) space.

Time complexity: O(n)
Space complexity: O(min(n, charset_size))
