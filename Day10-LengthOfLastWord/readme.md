<h2>🧩Length of Last Word (LeetCode #58)</h2>

<h3> <b> Level: Easy </b> </h3>


---

<h3>📝 Description:</h3>
Given a string <code>s</code> consisting of words and spaces, return the length of the <b>last word</b> in the string.

A <b>word</b> is a maximal substring consisting of non-space characters only.

---

<h3>📌 Examples:</h3>

<b>Example 1:</b>  
<pre>
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.
</pre>




<b>Example 2:</b>  
<pre>
Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
</pre>

<b>Example 3:</b>  
<pre>
Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
</pre>

---

<h3>🔍 Code Summary</h3>

<b>Approach Used:</b>  
This solution efficiently finds the length of the last word by scanning the string from the end, ignoring trailing spaces, and counting the characters of the last word directly. It avoids using any library functions for splitting or trimming.

---

<h3>🧠 Logic:</h3>

<ul>
  <li>Start from the end of the string.</li>
  <li>Skip all trailing spaces.</li>
  <li>Count characters until a space is found again.</li>
  <li>Stop counting once a space is found after a word has started.</li>
  <li>Return the length counted.</li>
</ul>

---

<h3>✅ Demonstrated Skills:</h3>

<ul>
  <li>Reverse traversal of strings</li>
  <li>Flag-based control logic</li>
  <li>Character-by-character string processing</li>
  <li>Efficient loop control without extra space</li>
</ul>
