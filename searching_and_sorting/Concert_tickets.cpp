#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin >> n >>m;
    multiset<int> tickets;
    for(int i=0;i<n;i++){
      int price;
      cin>> price;
      tickets.insert(price);
    }
    for(int i=0;i<m;i++){
        int maximum;
        cin>> maximum;
        auto it = tickets.upper_bound(maximum);
        if(it == tickets.begin()){
            cout<< -1<<endl;
        }
        else{
            --it;
            cout<< *it<<endl;
            tickets.erase(it);
        }
    }
    return 0;

}