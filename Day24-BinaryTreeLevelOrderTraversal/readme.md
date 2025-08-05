<h2>🧩 Binary Tree Level Order Traversal (LeetCode #102)</h2>  
<h3>Level: Medium</h3>  

<h3>🔗 Problem Link:</h3>  
<p>  
<a href="https://leetcode.com/problems/binary-tree-level-order-traversal/" target="_blank">https://leetcode.com/problems/binary-tree-level-order-traversal/</a>  
</p>  

---

<h3>📝 Description:</h3>  
<p>
Given the <code>root</code> of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).
</p>  

---

<h3>📌 Examples:</h3>  

<b>Example 1:</b>  
<pre>Input: root = [3,9,20,null,null,15,7]  
Output: [[3],[9,20],[15,7]]</pre>  

<b>Example 2:</b>  
<pre>Input: root = [1]  
Output: [[1]]</pre>  

<b>Example 3:</b>  
<pre>Input: root = []  
Output: []</pre>  

---

<h3>🧠 Logic:</h3>  
<ul>  
<li>Use a queue to perform Breadth-First Search (BFS) on the tree.</li>  
<li>For each level, process all nodes currently in the queue and collect their values.</li>  
<li>Push the left and right children of each node into the queue for the next level.</li>  
<li>Repeat until the queue is empty, collecting each level's values into the result.</li>  
</ul>  

---

<h3>✅ Demonstrated Skills:</h3>  
<ul>  
<li>Breadth-First Search (BFS) traversal</li>  
<li>Queue data structure usage</li>  
<li>Level-wise grouping of tree nodes</li>  
<li>Handling edge cases (empty tree, single node,a