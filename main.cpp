#include <bits/stdc++.h>
using namespace std;

int n;

void recur(int x, vector<string> cur){
    if (x == n){
        for(string c: cur)cout<<c<<" ";
        cout<<endl;
        return;
    }
  
    string act[3] = {"Running", "Swimming", "Football"};
    for (int i=0; i<3; i++){
        if(!cur.size() || cur.back() != act[i]){
            cur.push_back(act[i]);
            recur(x+1, cur);
            cur.pop_back();
        }
    }
}

int main()
{
    cin>>n;
    recur(0, {});

    return 0;
}