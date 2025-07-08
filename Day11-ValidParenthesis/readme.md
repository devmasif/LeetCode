<h2>🧩 Valid Parentheses (LeetCode #20)</h2>

<h3><b>Level: Easy</b></h3>

<h3>🔗 Problem Link:</h3>
<p>
  <a href="https://leetcode.com/problems/valid-parentheses/" target="_blank">
    https://leetcode.com/problems/valid-parentheses/
  </a>
</p>

---

<h3>📝 Description:</h3>
Given a string <code>s</code> containing just the characters <code>'('</code>, <code>')'</code>, <code>'{'</code>, <code>'}'</code>, <code>'['</code>, and <code>']'</code>, determine if the input string is <b>valid</b>.

A string is valid if:
<ul>
  <li>Open brackets are closed by the same type of brackets.</li>
  <li>Open brackets are closed in the correct order.</li>
  <li>Every closing bracket has a corresponding opening bracket of the same type.</li>
</ul>

---

<h3>📌 Examples:</h3>

<b>Example 1:</b>  
<pre>
Input: s = "()"
Output: true
</pre>

<b>Example 2:</b>  
<pre>
Input: s = "()[]{}"
Output: true
</pre>

<b>Example 3:</b>  
<pre>
Input: s = "(]"
Output: false
</pre>

<b>Example 4:</b>  
<pre>
Input: s = "([)]"
Output: false
</pre>

<b>Example 5:</b>  
<pre>
Input: s = "{[]}"
Output: true
</pre>

---

<h3>🔍 Code Summary</h3>

<b>Approach Used:</b>  
This solution uses a stack to track opening brackets. When a closing bracket is encountered, it checks if the top of the stack contains the matching opening bracket. If not, it returns false. At the end, the stack should be empty for the string to be valid.

---

<h3>🧠 Logic:</h3>

<ul>
  <li>Use a stack to store opening brackets.</li>
  <li>Traverse the string character by character.</li>
  <li>If an opening bracket is found, push it to the stack.</li>
  <li>If a closing bracket is found:
    <ul>
      <li>Check if the stack is empty. If yes, return false.</li>
      <li>Check if it matches the top of the stack. If yes, pop it.</li>
      <li>If it doesn't match, return false.</li>
    </ul>
  </li>
  <li>After the loop, if the stack is empty, return true (all brackets matched).</li>
  <li>If not empty, return false (some brackets didn't close).</li>
</ul>

---

<h3>✅ Demonstrated Skills:</h3>

<ul>
  <li>Stack data structure</li>
  <li>Character-by-character parsing</li>
  <li>Efficient bracket matching logic</li>
  <li>Validation through simulation</li>
</ul>
