#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int N = 1e7+123;

long long int ar[N];

int main()
{
    optimize();
    int n,m,i;
    cin>>n>>m;

    while(m--)
    {
        int a,b,d;
        cin>>a>>b>>d;

        ar[a] += d;
        ar[b+1] -=d;
    }

    for(i=1;i<=n;i++) ar[i] += ar[i-1];

    long long int mx = *max_element(ar,ar+n+1);

    cout<<mx<<endl;

    return 0;
}
