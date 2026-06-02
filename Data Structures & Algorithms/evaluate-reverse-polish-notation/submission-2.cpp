class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
       stack<int> stack;
        for(string a : tokens){
            if(isalnum(a[0])||a.length()>1){
                stack.push(stoi(a));
            }else{
                int x = stack.top();
                stack.pop();
                int y = stack.top();
                stack.pop();
                if(a=="+"){
                    stack.push(x+y);
                }else if(a=="-"){
                    stack.push(y-x);
                }else if(a=="*"){
                    stack.push(x*y);
                }else if(a=="/"){
                    stack.push(y/x);
                }
            }
        }
        return stack.top();
    }
};
