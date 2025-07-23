<h2>🧩 3Sum (LeetCode #15)</h2> <h3>Level: Medium</h3> <h3>🔗 Problem Link:</h3> <p> <a href="https://leetcode.com/problems/3sum/" target="_blank"> https://leetcode.com/problems/3sum/ </a> </p> <hr> <h3>📝 Description:</h3> <p> Given an integer array <code>nums</code>, return all the triplets <code>[nums[i], nums[j], nums[k]]</code> such that <code>i != j</code>, <code>i != k</code>, and <code>j != k</code>, and <code>nums[i] + nums[j] + nums[k] == 0</code>. <br><br> Notice that the solution set must not contain duplicate triplets. </p> <hr> <h3>📌 Examples:</h3>
<b>Example 1:</b>

<pre> Input: nums = [-1,0,1,2,-1,-4] Output: [[-1,-1,2],[-1,0,1]] </pre>
<b>Example 2:</b>

<pre> Input: nums = [0,1,1] Output: [] </pre>
<b>Example 3:</b>

<pre> Input: nums = [0,0,0] Output: [[0,0,0]] </pre> <hr> <h3>🧠 Logic:</h3> <ul> <li>Sort the array to help identify and skip duplicates.</li> <li>Iterate with a fixed pointer <code>i</code> and use two other pointers <code>j</code> and <code>k</code> to scan for valid triplets.</li> <li>Skip repeated elements to ensure unique triplets.</li> </ul> <hr> <h3>💡 Approach Used:</h3> <p> The solution uses the two-pointer technique after sorting the input array. For each fixed element <code>nums[i]</code>, the other two elements are searched using pointers from both ends of the remaining subarray. When a valid triplet is found, both pointers are adjusted while avoiding duplicates. This gives a time complexity of <code>O(n²)</code> with no extra space used apart from the result list. </p> <hr> <h3>✅ Demonstrated Skills:</h3> <ul> <li>Two-pointer technique</li> <li>Efficient duplicate handling</li> <li>Optimized nested iteration</li> <li>Combination logic with constraints</li> </ul>