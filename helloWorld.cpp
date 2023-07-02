#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int reductionCost(vector<int>& num) {
    // num.size() >= 2
    priority_queue<int, vector<int>, greater<int>> pq;
    int totalCost = 0;
    for (int i = 0; i < num.size(); i++) {
        pq.push(num[i]);
    }
    
    while (pq.size() > 1) {
        int num1 = pq.top();
        pq.pop();
        int num2 = pq.top();
        pq.pop();
        int cost = num1 + num2;
        totalCost += cost;
        pq.push(cost);
    }
    return totalCost;
}

int main() {
    vector<int> num = {1, 2, 3};
    int cost = reductionCost(num);
    cout << cost << endl;  // Output: 19
    return 0;
}