#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    int num=0;
    set<int>s11;
    set<int>s22;
    for(int i=0;i<n;i++)
    {
        if(s1[i]==s2[i])
        {
            num++;
        }
    }
    sort(s1.begin(),s1.end()); 
    sort(s2.begin(),s2.end());
    int num2=0;
    int i=0,j=0;
    while(j<n)
    {
        cout<<s1[i]<<" "<<s2[j]<<endl;
        if(s1[i]==s2[j])
        {
            num2++;
            cout<<num2<<endl;
            i++;j++;
        }
        else
        {
            j++;
        }
    }
    cout<<num<<" "<<num2<<endl;
    num2-=num;
    string str=to_string(num) + "A"+ to_string(num2) +"B";
    cout<<str;
}