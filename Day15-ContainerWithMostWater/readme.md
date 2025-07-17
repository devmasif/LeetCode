<h2>🧩 Container With Most Water (LeetCode #11)</h2>

<h3>Level: Medium</h3>

<h3>🔗 Problem Link:</h3>
<p>
  <a href="https://leetcode.com/problems/container-with-most-water/" target="_blank">
    https://leetcode.com/problems/container-with-most-water/
  </a>
</p>

<hr>

<h3>📝 Description:</h3>
<p>
You are given an integer array <code>height</code> of length <code>n</code>. There are <code>n</code> vertical lines drawn such that the two endpoints of the <code>i<sup>th</sup></code> line are at <code>(i, 0)</code> and <code>(i, height[i])</code>.
<br><br>
Find two lines that together with the x-axis form a container, such that the container contains the most water.
<br><br>
Return the <b>maximum amount of water</b> a container can store.
<br><br>
<b>Note:</b> You may not slant the container.
</p>

<hr>

<h3>📌 Examples:</h3>

<b>Example 1:</b>
<pre>
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The lines at index 1 and index 8 form a container with height 7 and width 7, so area = 7 * 7 = 49.
</pre>

<b>Example 2:</b>
<pre>
Input: height = [1,1]
Output: 1
</pre>


<hr>

<h3>🧠 Logic:</h3>
<ul>
  <li>Use two pointers: one starting at the beginning and one at the end of the array.</li>
  <li>Calculate the area between the two pointers.</li>
  <li>Move the pointer that has the shorter height inward to try to find a taller line for a potentially bigger area.</li>
  <li>Repeat until both pointers meet.</li>
</ul>

<hr>

<h3>💡 Approach Used:</h3>
<p>
This solution applies the two-pointer technique efficiently.
By always moving the pointer at the smaller height, it tries to maximize the height for a potentially better container as the width shrinks.
<br><br>
Time complexity is <code>O(n)</code>, and space complexity is <code>O(1)</code>.
</p>

<hr>

<h3>✅ Demonstrated Skills:</h3>
<ul>
  <li>Two-pointer sliding window technique</li>
  <li>Area calculation using min height</li>
  <li>Greedy pointer movement to maximize result</li>
</ul>

<hr>


