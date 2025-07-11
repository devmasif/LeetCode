<h2>🧩 Median of Two Sorted Arrays (LeetCode #4)</h2>

<h3>Level: Hard</h3>

<h3>🔗 Problem Link:</h3>
<p>
  <a href="https://leetcode.com/problems/median-of-two-sorted-arrays/" target="_blank">
    https://leetcode.com/problems/median-of-two-sorted-arrays/
  </a>
</p>

<hr>

<h3>📝 Description:</h3>
<p>
Given two sorted arrays <code>nums1</code> and <code>nums2</code> of size <code>m</code> and <code>n</code> respectively, return <b>the median</b> of the two sorted arrays.
<br><br>
The overall run time complexity should be <b>O(log (m+n))</b>.
</p>

<hr>

<h3>📌 Examples:</h3>

<b>Example 1:</b>
<pre>
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3], median = 2
</pre>

<b>Example 2:</b>
<pre>
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4], median = (2+3)/2 = 2.5
</pre>

<hr>

<h3>🧠 Logic:</h3>
<ul>
  <li>Merge the two sorted arrays using two pointers.</li>
  <li>Maintain a combined array while comparing elements one by one.</li>
  <li>After full merge, if the total length is odd, return the middle element.</li>
  <li>If even, return the average of the two middle elements.</li>
</ul>

<hr>

<h3>💡 Approach Used:</h3>
<p>
The approach used here is a simple two-pointer merge, similar to the merge step in merge sort. 
Although this solution doesn't achieve the required <code>O(log (m+n))</code> time complexity, it ensures correctness with <code>O(m + n)</code> runtime. 
It merges the arrays completely and then calculates the median based on the total size.
<br><br>
I plan to revisit this problem in the future and implement the optimized binary search approach to meet the expected time complexity.
</p>


<hr>

<h3>✅ Demonstrated Skills:</h3>
<ul>
  <li>Two-pointer technique</li>
  <li>Array merging logic</li>
  <li>Handling both even and odd total sizes for median calculation</li>
</ul>


