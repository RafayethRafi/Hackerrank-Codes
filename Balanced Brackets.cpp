#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

unordered_map<char,int> sym = {{'[',-1} , {']',1},{'(',-2} , {')',2},{'{',-3} , {'}',3}};

string isBalanced(string s)
{
    stack<char> st;

    for(char bracket : s)
    {
        if(sym[bracket]<0) st.push(bracket);
        else
        {
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();

            if(sym[top] + sym[bracket] != 0) return "NO";
        }
    }

    if(st.empty()) return "YES";
    else return "NO";
}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        cout<< isBalanced(s) <<endl;
    }
    return 0;
}
