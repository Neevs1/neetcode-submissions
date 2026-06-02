class Solution {
public:
    char closing(char x){
        if (x=='}'){
            return '{';
        }
        if (x==']'){
            return '[';
        }
        if (x== ')'){
            return '(';
        }
        
    }
    bool isValid(string s) {
        if(s.length()%2!=0){
            return false;
        }
        stack <char> st;
        for(char a : s){
            if(a=='{'||a=='['||a=='('){
                st.push(a);
            }else{
                if(st.empty()){
                    return false;
                }else if(st.top()==closing(a)){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
        
    }
};
