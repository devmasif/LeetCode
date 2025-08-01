<h2>🧩 Binary Tree Inorder Traversal (LeetCode #94)</h2> <h3>Level: Easy</h3> <h3>🔗 Problem Link:</h3> <p> <a href="https://leetcode.com/problems/binary-tree-inorder-traversal/" target="_blank">https://leetcode.com/problems/binary-tree-inorder-traversal/</a> </p>
<h3>📝 Description:</h3> <p> Given the root of a binary tree, return the inorder traversal of its nodes' values. </p>
<h3>📌 Examples:</h3>
<b>Example 1:</b>

<pre>Input: root = [1,null,2,3] Output: [1,3,2]</pre>
<b>Example 2:</b>

<pre>Input: root = [] Output: []</pre>
<b>Example 3:</b>

<pre>Input: root = [1] Output: [1]</pre>
<h3>🧠 Logic:</h3> <ul> <li>The solution uses a helper function <code>inorderHelper</code> to perform recursion.</li> <li>It first checks if the current node is null; if so, it returns immediately (base case).</li> <li>Otherwise, it recursively visits the left subtree.</li> <li>Then it processes the current node by adding its value to the result vector.</li> <li>Finally, it recursively visits the right subtree.</li> <li>This traversal order — left, node, right — defines inorder traversal.</li> </ul>
<h3>✅ Demonstrated Skills:</h3> <ul> <li>Recursive tree traversal using helper functions</li> <li>Efficient use of reference variables to avoid unnecessary copies</li> <li>Understanding of binary tree node structure and depth-first traversal patterns</li> <li>Proper handling of null cases to avoid segmentation faults</li> </ul>