class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        n = len(strs)
        if n == 0:
            return ""
        if n == 1:
            return strs[0]
        
        prefix = ""
        for i in range(min(len(strs[0]), len(strs[1]))):
            if strs[0][i] == strs[1][i]:
                prefix += strs[0][i]
            else:
                break

        for i in range(2, n):
            for j in range(min(len(prefix), len(strs[i]))):
                if strs[i][j] != prefix[j]:
                    prefix = prefix[:j]
                    break
            prefix = prefix[:len(strs[i])]

        
        return prefix
