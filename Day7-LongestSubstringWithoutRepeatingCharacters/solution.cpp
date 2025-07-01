class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        int max_len = 0;
        for(int i=0; i<size ; i++){
            
            bool arr[256] = {false};
            int curr_len = 0;

            for (int j=i; j<size ; j++){
                int val = s[j];
                if(arr[val]) break;
                else{
                    arr[val] = true;
                    curr_len++;
                }
            }

            if(curr_len > max_len){
                max_len = curr_len;
            }
        }  


        return max_len;
    }

};
