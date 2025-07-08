<h2>🧩 Contains Duplicate II (LeetCode #219)</h2>

<h3>Level: Easy</h3>

<h3>🔗 Problem Link:</h3>
<p>
  <a href="https://leetcode.com/problems/contains-duplicate-ii/" target="_blank">
    https://leetcode.com/problems/contains-duplicate-ii/
  </a>
</p>

<hr>


<h3>📝 Description:</h3>
<p>
Given an integer array <code>nums</code> and an integer <code>k</code>, return <code>true</code> if there are two distinct indices <code>i</code> and <code>j</code> in the array such that:
</p>
<ul>
  <li><code>nums[i] == nums[j]</code></li>
  <li><code>abs(i - j) &lt;= k</code></li>
</ul>
<p>Otherwise, return <code>false</code>.</p>

<hr>

<h3>📌 Examples:</h3>

<b>Example 1:</b>
<pre>
Input: nums = [1, 2, 3, 1], k = 3  
Output: true
</pre>

<b>Example 2:</b>
<pre>
Input: nums = [1, 0, 1, 1], k = 1  
Output: true
</pre>

<b>Example 3:</b>
<pre>
Input: nums = [1, 2, 3, 1, 2, 3], k = 2  
Output: false
</pre>

<b>Example 4:</b>
<pre>
Input: nums = [99, 99], k = 2  
Output: true
</pre>

<hr>

<h3>🔍 Code Summary</h3>

<b>Approach Used:</b>
<p>
This solution uses a hash map (dictionary) to store the last seen index of each number as we iterate.  
It ensures we always have the most recent occurrence for each number.
</p>

<hr>

<h3>🧠 Logic:</h3>
<ul>
  <li>Initialize an empty dictionary <code>numbers</code>.</li>
  <li>Iterate through the array using <code>range(len(nums))</code>.</li>
  <li>Store each value in a variable <code>val</code> to avoid redundant lookup.</li>
  <li>Check if:
    <ul>
      <li><code>val</code> already exists in the dictionary, and</li>
      <li><code>ind - numbers[val] &lt;= k</code></li>
      <li>If yes → return <code>True</code></li>
      <li>Else → update the index of <code>val</code> in dictionary</li>
    </ul>
  </li>
  <li>After loop ends → return <code>False</code> (no such pair found).</li>
</ul>

<hr>

<h3>✅ Demonstrated Skills:</h3>
<ul>
  <li>Hash map optimization</li>
  <li>Index distance calculation</li>
  <li>Time complexity improvement: from O(N²) to O(N)</li>
  <li>Efficient in-place logic using dictionary</li>
</ul>
