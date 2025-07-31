<h2>Reverse Linked List</h2>

<h3>📝 Description</h3>
<p>Given the head of a singly linked list, reverse the list, and return the reversed list.</p>

<h3>📁 Examples</h3>

<b>Example 1:</b><br>
Input: <code>head = [1,2,3,4,5]</code><br>
Output: <code>[5,4,3,2,1]</code><br><br>

<b>Example 2:</b><br>
Input: <code>head = [1,2]</code><br>
Output: <code>[2,1]</code><br><br>

<b>Example 3:</b><br>
Input: <code>head = []</code><br>
Output: <code>[]</code>

<h3>🧠 Logic</h3>
<p>
To reverse a singly linked list, we iterate through the list while maintaining three pointers:
<ul>
<li><b>curr</b> - the current node</li>
<li><b>prev</b> - the previous node, initialized to <code>nullptr</code></li>
<li><b>next</b> - temporarily stores <code>curr->next</code> before reversing the link</li>
</ul>
At each step, we:
<ol>
<li>Save <code>curr->next</code> to <code>next</code></li>
<li>Reverse the current node's pointer: <code>curr->next = prev</code></li>
<li>Move <code>prev</code> to <code>curr</code></li>
<li>Move <code>curr</code> to <code>next</code></li>
</ol>
This continues until the end of the list is reached. The new head will be the last node visited, now pointed to by <code>prev</code>.
</p>

<h3>🧠 Demonstrated Skills</h3>
<ul>
  <li>Pointer manipulation</li>
  <li>In-place linked list reversal</li>
  <li>Edge case handling for empty or single-node lists</li>
</ul>
