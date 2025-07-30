<h2>🧩 Remove Linked List Elements (LeetCode #203)</h2>

<h3>Level: Easy</h3>

<h3>🔗 Problem Link:</h3>
<p>
  <a href="https://leetcode.com/problems/remove-linked-list-elements/" target="_blank">
    https://leetcode.com/problems/remove-linked-list-elements/
  </a>
</p>

<hr>

<h3>📝 Description:</h3>
<p>
Given the <code>head</code> of a linked list and an integer <code>val</code>, remove all the nodes of the linked list that has <code>Node.val == val</code>, and return the new head.
</p>
:contentReference[oaicite:1]{index=1}

<hr>

<h3>📌 Examples:</h3>

<b>Example 1:</b>
<pre>
Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]
</pre>

<b>Example 2:</b>
<pre>
Input: head = [], val = 1
Output: []
</pre>

<b>Example 3:</b>
<pre>
Input: head = [7,7,7,7], val = 7
Output: []
</pre>

<hr>

<h3>🧠 Logic:</h3>
<ul>
  <li>Traverse the linked list with two pointers: one for the current node (<code>temp</code>) and one for the previous valid node (<code>prev</code>).</li>
  <li>If the current node’s value equals <code>val</code>, remove it by adjusting the previous node’s <code>next</code> pointer or updating <code>head</code> if at the front.</li>
  <li>If not, move the <code>prev</code> pointer forward.</li>
</ul>

<hr>

<h3>💡 Approach Used:</h3>
<p>
A single-pass in-place removal strategy is used: start iterating from the head, and when a node matches the target value, unlink it and free memory. Special handling covers the case when the head must be removed. This approach works in **O(n)** time and uses **O(1)** extra space.
</p>

<hr>

<h3>✅ Demonstrated Skills:</h3>
<ul>
  <li>In-place linked list traversal and removal</li>
  <li>Pointer manipulation and edge‑case handling (e.g. head removal)</li>
  <li>Manual memory management in C++</li>
</ul>
