class Solution {
public:
    string getHint(string secret, string guess) {
    int n=secret.length();
    int num=0;
    for(int i=0;i<n;i++)
    {
        if(secret[i]==guess[i])
        {
            num++;
        }
    }
    sort(secret.begin(),secret.end()); 
    sort(guess.begin(),guess.end());
    int num2=0;
    int i=0,j=0;
    while(j<n && i<n)
    {
        if(secret[i]==guess[j])
        {
            num2++;
            i++;j++;
        }
        else
        {
            if(secret[i]<guess[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
    }
    num2-=num;
    string str=to_string(num) + "A"+ to_string(num2) +"B";
    return str;
    }
};