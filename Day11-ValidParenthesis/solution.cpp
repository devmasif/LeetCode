class Solution {
public:
	bool isValid(string s) {
		stack<char> stk;

		int idx = 0;
		while(s[idx] != '\0') {
			if(s[idx] == '(' || s[idx] == '{' || s[idx] == '[')
				stk.push(s[idx]);
			else {
				if (stk.empty()) return false;

				        if( (s[idx] == ')' && stk.top() == '(')
					            ||    (s[idx] == '}' && stk.top() == '{')
					            ||    (s[idx] == ']' && stk.top() == '[')  )
					        stk.pop();
					        else
						        return false;

						        
					
            }
            idx++;
        }

		if(stk.empty())
				return true;

			return false;
		
	}

};

