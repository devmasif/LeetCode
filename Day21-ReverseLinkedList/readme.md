<h2>🧩 Reverse Linked List (LeetCode #206)</h2>  
<h3>Level: Easy</h3>  

<h3>🔗 Problem Link:</h3>  
<p>  
<a href="https://leetcode.com/problems/reverse-linked-list/" target="_blank">https://leetcode.com/problems/reverse-linked-list/</a>  
</p>  

---

<h3>📝 Description:</h3>  
<p>  
Given the head of a singly linked list, reverse the list, and return the reversed list.  
</p>  

---

<h3>📌 Examples:</h3>  

<b>Example 1:</b>  
<pre>Input: head = [1,2,3,4,5]  
Output: [5,4,3,2,1]</pre>  

<b>Example 2:</b>  
<pre>Input: head = [1,2]  
Output: [2,1]</pre>  

<b>Example 3:</b>  
<pre>Input: head = []  
Output: []</pre>  

---

<h3>🧠 Logic:</h3>  
<ul>  
<li>Initialize <code>prev</code> as <code>nullptr</code> and <code>curr</code> as the head of the list.</li>  
<li>Iterate through the list while <code>curr</code> is not <code>nullptr</code>:</li>  
<ul>  
  <li>Store <code>curr->next</code> in a temporary variable <code>next</code>.</li>  
  <li>Reverse the current node’s link by setting <code>curr->next = prev</code>.</li>  
  <li>Move <code>prev</code> to <code>curr</code>.</li>  
  <li>Advance <code>curr</code> to <code>next</code>.</li>  
</ul>  
<li>Return <code>prev</code> as the new head of the reversed list.</li>  
</ul>  

---

<h3>✅ Demonstrated Skills:</h3>  
<ul>  
<li>Pointer manipulation</li>  
<li>In-place linked list reversal</li>  
<li>Handling edge cases (e.g., empty or single-node lists)</li>  
</ul>  

---
