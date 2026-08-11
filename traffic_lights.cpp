#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,n;
    cin >> x >> n;
    set<int> lights;
    multiset<int> segments;
    lights.insert(0);
    lights.insert(x);
    segments.insert(x);
    for(int i=0;i<n;i++){
    int pos;
    cin >> pos;
    auto right = lights.upper_bound(pos);
    auto left = prev(right);
    int l =*left, r=*right;
    segments.erase(segments.find(r-l));
    segments.insert(pos-l);
    segments.insert(r-pos);
    lights.insert(pos);
    cout << *segments.rbegin() << " ";

    }
    return 0;
} 