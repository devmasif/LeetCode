<h2>🧩 Odd Even Linked List (LeetCode #328)</h2>  
<h3>Level: Medium</h3>  

<h3>🔗 Problem Link:</h3>  
<p>  
<a href="https://leetcode.com/problems/odd-even-linked-list/" target="_blank">https://leetcode.com/problems/odd-even-linked-list/</a>  
</p>  

---

<h3>📝 Description:</h3>  
<p>
Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in O(1) extra space complexity and O(n) time complexity.
</p>  

---

<h3>📌 Examples:</h3>  

<b>Example 1:</b>  
<pre>Input: head = [1,2,3,4,5]  
Output: [1,3,5,2,4]</pre>  

<b>Example 2:</b>  
<pre>Input: head = [2,1,3,5,6,4,7]  
Output: [2,3,6,7,1,5,4]</pre>  

<b>Example 3:</b>  
<pre>Input: head = []  
Output: []</pre>  

---

<h3>🧠 Logic:</h3>  
<ul>  
<li>Use two pointers: <code>odd</code> for odd-indexed nodes and <code>even</code> for even-indexed nodes.</li>  
<li>Iterate through the list, linking odd nodes together and even nodes together.</li>  
<li>After processing, connect the last odd node to the head of the even list.</li>  
<li>This rearranges the list in-place with O(1) extra space and O(n) time.</li>  
</ul>  

---

<h3>✅ Demonstrated Skills:</h3>  
<ul>  
<li>Linked list pointer manipulation</li>  
<li>Efficient in-place reordering</li>  
<li>Handling edge cases (empty list, single node, etc.)</li>  
<li>Understanding of node indexing in linked lists</li>  
</ul>