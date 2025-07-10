<h2>🧩 Longest Common Prefix (LeetCode #14)</h2>

<h3>Level: Easy</h3>

<h3>🔗 Problem Link:</h3>
<p>
  <a href="https://leetcode.com/problems/longest-common-prefix/" target="_blank">
    https://leetcode.com/problems/longest-common-prefix/
  </a>
</p>

<hr>

<h3>📝 Description:</h3>
<p>
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string <code>""</code>.
</p>

<hr>

<h3>📌 Examples:</h3>

<b>Example 1:</b>
<pre>
Input: strs = ["flower", "flow", "flight"]
Output: "fl"
</pre>

<b>Example 2:</b>
<pre>
Input: strs = ["dog", "racecar", "car"]
Output: ""
</pre>

<b>Example 3:</b>
<pre>
Input: strs = ["interspace", "internet", "internal"]
Output: "inte"
</pre>

<b>Example 4:</b>
<pre>
Input: strs = ["same", "same", "same"]
Output: "same"
</pre>

<b>Example 5:</b>
<pre>
Input: strs = []
Output: ""
</pre>

<hr>

<h3>🧠 Logic:</h3>
<ul>
  <li>Compare the first two strings to find an initial common prefix.</li>
  <li>Loop through the remaining strings and compare each with the current prefix.</li>
  <li>Cut the prefix as soon as a mismatch is found.</li>
  <li>If the prefix becomes empty at any point, return an empty string immediately.</li>
</ul>

<hr>

<h3>💡 Approach Used:</h3>
<p>
The solution starts with character-by-character comparison between the first two strings.
It then iteratively shrinks the prefix by comparing it with each subsequent string.
This ensures the final result is the longest common prefix shared by all strings in the list.
</p>

<hr>

<h3>✅ Demonstrated Skills:</h3>
<ul>
  <li>Efficient string scanning</li>
  <li>Early termination on mismatch</li>
  <li>Prefix reduction through iteration</li>
</ul>
