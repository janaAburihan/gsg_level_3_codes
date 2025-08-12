#include <bits/stdc++.h>
using namespace std;

int n;

void recur(int x, vector<string> cur){
    if (x == n){
        for(string c: cur)cout<<c<<" ";
        cout<<endl;
        return;
    }
  
    if(!cur.size() || cur.back() != "Running"){
        cur.push_back("Running");
        recur(x+1, cur);
        cur.pop_back();
    }
    if(!cur.size() || cur.back() != "Swimming"){
        cur.push_back("Swimming");
        recur(x+1, cur);
        cur.pop_back();
    }
    if(!cur.size() || cur.back() != "Football"){
        cur.push_back("Football");
        recur(x+1, cur);
        cur.pop_back();
    }
}

int main()
{
    cin>>n;
    recur(0, {});

    return 0;
}