class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int>s1;
    for(auto it : tokens)
    {
        if(it=="+" || it=="-" || it=="*" ||it=="/")
        {
            int n1=s1.top();
            s1.pop();
            int n2=s1.top();
            s1.pop();
            if(it=="+")
            {
                s1.push(n1+n2);
            }
            else if(it=="-")
            {
                s1.push(n2-n1);
            }
            else if(it=="*")
            {
                s1.push(n1*n2);
            }
            else
            {
                s1.push(n2/n1);
            }
        }
        else
        {
            s1.push(stoi(it));
        }
    }
    return s1.top();
    }
        
    
};