<h2>🧩 String to Integer (atoi) (LeetCode #8)</h2> <h3>Level: Medium</h3> <h3>🔗 Problem Link:</h3> <p> <a href="https://leetcode.com/problems/string-to-integer-atoi/" target="_blank"> https://leetcode.com/problems/string-to-integer-atoi/ </a> </p> <hr> <h3>📝 Description:</h3> <p> Implement the <code>myAtoi(string s)</code> function, which converts a string to a 32-bit signed integer (similar to C/C++'s <code>atoi</code> function). <br><br> The algorithm follows these rules: </p> <ul> <li>Read and ignore leading whitespace</li> <li>Check for optional <code>'+'</code> or <code>'-'</code> sign</li> <li>Read in the next characters until a non-digit character is encountered</li> <li>Convert the digits to an integer</li> <li>Clamp the integer to the 32-bit signed integer range: [−2³¹, 2³¹ − 1]</li> <li>If no valid conversion can be performed, return 0</li> </ul> <hr> <h3>📌 Examples:</h3>
<b>Example 1:</b>

<pre> Input: s = "42" Output: 42 </pre>
<b>Example 2:</b>

<pre> Input: s = " -42" Output: -42 Explanation: The first non-whitespace character is '-', which is a valid sign. </pre>
<b>Example 3:</b>

<pre> Input: s = "4193 with words" Output: 4193 </pre>
<b>Example 4:</b>

<pre> Input: s = "words and 987" Output: 0 Explanation: The first non-whitespace character is a letter, so no valid conversion. </pre>
<b>Example 5:</b>

<pre> Input: s = "-91283472332" Output: -2147483648 Explanation: The number is below the minimum limit, so it's clamped. </pre> <hr> <h3>🧠 Logic:</h3> <ul> <li>Skip leading whitespace characters.</li> <li>Detect and handle an optional '+' or '-' sign.</li> <li>Accumulate digits while they are valid and form the result number.</li> <li>Clamp the result to <code>INT_MAX</code> or <code>INT_MIN</code> if it goes out of range.</li> </ul> <hr> <h3>💡 Approach Used:</h3> <p> A character-by-character scan is performed to extract digits and form the number. A <code>long long</code> type is used during computation to detect overflow. As soon as the number exceeds the 32-bit range, it is clamped appropriately. The function exits early on non-digit characters after parsing begins. </p> <hr> <h3>✅ Demonstrated Skills:</h3> <ul> <li>String parsing and character analysis</li> <li>Edge case handling (whitespace, signs, invalid characters)</li> <li>Manual overflow control without using built-in parsing</li> <li>Efficient traversal and early exit</li> </ul>