#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> q;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    while (!q.empty()) {

        // Move first person to the back
        q.push(q.front());
        q.pop();

        // Remove the next person
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}