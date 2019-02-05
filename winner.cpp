/*
 Time & Date of creation 18:24:45 09/01/2019  
 Copyright © amit2rockon. All rights reserved. 
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

#define fi  first
#define se  second
#define mp  make_pair
#define pb  push_back
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define endl "\n"
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast_IO;

    int t;
    cin>>t;
    map<string,int> opt;

    int max = -9999999;
    string smax;

    while(t--)
    {
        string ss;
        int xx;
        cin>>ss>>xx;
        opt[ss]+=xx;
        if(opt[ss]>max)
        {
            max = opt[ss];
            smax=ss;
        }
    }
    cout<<smax<<endl;


}