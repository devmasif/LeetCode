<h2>🧩 Remove Nth Node From End of List (LeetCode #19)</h2> <h3>Level: Medium</h3> <h3>🔗 Problem Link:</h3> <p> <a href="https://leetcode.com/problems/remove-nth-node-from-end-of-list/" target="_blank">https://leetcode.com/problems/remove-nth-node-from-end-of-list/</a> </p> <hr> <h3>📝 Description:</h3> <p> Given the <code>head</code> of a linked list, remove the <code>n<sup>th</sup></code> node from the end of the list and return its head. </p> <hr> <h3>📌 Examples:</h3>
<b>Example 1:</b>

<pre> Input: head = [1,2,3,4,5], n = 2 Output: [1,2,3,5] </pre>
<b>Example 2:</b>

<pre> Input: head = [1], n = 1 Output: [] </pre>
<b>Example 3:</b>

<pre> Input: head = [1,2], n = 1 Output: [1] </pre> <hr> <h3>🧠 Logic:</h3> <ul> <li>Advance a pointer <code>n</code> nodes ahead in the list.</li> <li>If it reaches the end, it means the head node needs to be removed.</li> <li>Otherwise, use a second pointer to track the node just before the one that will be removed.</li> <li>Once the gap is maintained, advance both pointers until the lead pointer reaches the end.</li> <li>Adjust the links and delete the node.</li> </ul> <hr> <h3>💡 Approach Used:</h3> <p> A two-pointer technique is used to efficiently locate the node to be removed in one traversal. One pointer is moved <code>n</code> steps ahead, and then both pointers are moved simultaneously until the first pointer reaches the end. This ensures we reach the correct node in a single pass, using constant space and minimal time. </p> <hr> <h3>✅ Demonstrated Skills:</h3> <ul> <li>Two-pointer technique</li> <li>Linked list manipulation</li> <li>Edge case handling (e.g., removing the head node)</li> <li>Memory cleanup (using <code>delete</code> appropriately)</li> </ul>