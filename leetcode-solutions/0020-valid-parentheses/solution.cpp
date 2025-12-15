class Solution {
public:
    bool isValid(string s) {
        stack<char>dhina;
        for(char c :s){
            if(c=='('||c=='['||c=='{'){
                dhina.push(c);
            }
            else{
                if(dhina.empty())return false;
            
            char top =dhina.top();
            dhina.pop();
            if((c==')'&&top!='(')||(c==']'&&top!='[')||(c=='}'&&top!='{'))
            return false;
            }
        }
        return dhina.empty();
        
    }
};
