#include<bits/stdc++.h>
using namespace std;

vector<int> A,C;
string a;
int b,r;

void div(vector<int> &A,int b,int &r)
{
    for(int i=A.size()-1;i>=0;i--)
    {
        r=r*10+A[i];
        C.push_back(r/b);
        r%=b;
    }
    reverse(C.begin(),C.end());
    while(C.size()>1&&C.back()==0)
    {
        C.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    for(int i=a.size()-1;i>=0;i--)
    {
        A.push_back(a[i]-'0');
    }
    div(A,b,r);
    for(int i=C.size()-1;i>=0;i--)
    {
        cout<<C[i];
    }
    cout<<endl<<r;
    return 0;
}