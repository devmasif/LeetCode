<h2>🧩 Delete Node in a Linked List (LeetCode #237)</h2> <h3>Level: Medium</h3> <h3>🔗 Problem Link:</h3> <p><a href="https://leetcode.com/problems/delete-node-in-a-linked-list/" target="_blank">https://leetcode.com/problems/delete-node-in-a-linked-list/</a></p> <hr> <h3>📝 Description:</h3> <p>Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.</p> <p>The input node is guaranteed not to be the tail node and will always be a valid node within the linked list.</p> <hr> <h3>📌 Examples:</h3>
<b>Example 1:</b>

<pre> Input: head = [4,5,1,9], node = 5 Output: [4,1,9] Explanation: You are given the second node with value 5. After calling your function, the linked list should be 4 -> 1 -> 9. </pre>
<b>Example 2:</b>

<pre> Input: head = [4,5,1,9], node = 1 Output: [4,5,9] </pre> <hr> <h3>🧠 Logic:</h3> <ul> <li>You are not given access to the head of the list, only the node to be deleted.</li> <li>To delete the current node, copy the value of the next node into the current node, then unlink and delete the next node.</li> </ul> <hr> <h3>💡 Approach Used:</h3> <p>Since we cannot modify the previous node's pointer, we "overwrite" the current node with the contents of the next node, then delete the next node. This gives the effect of deleting the current node.</p> <hr> <h3>✅ Demonstrated Skills:</h3> <ul> <li>Linked list manipulation without access to head</li> <li>Pointer updates and memory management</li> <li>Understanding node-level operations</li> </ul>




