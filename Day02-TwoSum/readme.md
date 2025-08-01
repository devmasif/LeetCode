<h2>🧩 Two Sum (LeetCode #1)</h2>

<h3>Level: Easy</h3>

<h3>🔗 Problem Link:</h3>
<p>
  <a href="https://leetcode.com/problems/two-sum/" target="_blank">
    https://leetcode.com/problems/two-sum/
  </a>
</p>

<hr>

<h3>📝 Description:</h3>
<p>
Given an array of integers <code>nums</code> and an integer <code>target</code>, return the indices of the two numbers such that they add up to <code>target</code>.<br><br>
You may assume that each input would have exactly one solution, and you may not use the same element twice.<br><br>
You can return the answer in any order.
</p>

<hr>

<h3>📌 Examples:</h3>

<b>Example 1:</b>
<pre>
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: nums[0] + nums[1] == 9
</pre>

<b>Example 2:</b>
<pre>
Input: nums = [3,2,4], target = 6
Output: [1,2]
</pre>

<b>Example 3:</b>
<pre>
Input: nums = [3,3], target = 6
Output: [0,1]
</pre>

<hr>

<h3>🧠 Logic:</h3>
<ul>
  <li>The goal is to find two indices <code>i</code> and <code>j</code> such that <code>nums[i] + nums[j] == target</code>.</li>
  <li>Instead of checking all pairs (brute force), compute the difference <code>target - nums[i]</code> as you iterate.</li>
  <li>If the difference has already been seen (stored in a map), you’ve found a solution.</li>
</ul>

<hr>

<h3>💡 Approach Used:</h3>
<p>
Use a single-pass hash map to store each number and its index during iteration. At each step, compute the complement needed to reach the target. If the complement is already in the map, return its index along with the current one.
</p>

<hr>

<h3>✅ Demonstrated Skills:</h3>
<ul>
  <li>Efficient use of hash maps</li>
  <li>Reduction of time complexity from <code>O(n²)</code> to <code>O(n)</code></li>
  <li>One-pass iteration with constant-time lookups</li>
  <li>Clean logic leveraging difference checking</li>
</ul>

