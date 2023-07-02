//TODO: hard problem requires DP and O(n)
#include <bits/stdc++.h>
using namespace std;
 
// Returns maximum profit with
// two transactions on a given
// list of stock prices, price[0..n-1]
int maxProfit(int price[], int n)
{
    // Create profit array and
    // initialize it as 0
    int* profit = new int[n];
    for (int i = 0; i < n; i++)
        profit[i] = 0;
 
    int max_price = price[n - 1];
    for (int i = n - 2; i >= 0; i--) {

        if (price[i] > max_price)
            max_price = price[i];

        profit[i]
            = max(profit[i + 1], max_price - price[i]);
    }
 
    int min_price = price[0];
    for (int i = 1; i < n; i++) {
        
        if (price[i] < min_price)
            min_price = price[i];
 
        
        profit[i] = max(profit[i - 1],
                        profit[i] + (price[i] - min_price));
    }
    int result = profit[n - 1];
 
    delete[] profit; // To avoid memory leak
 
    return result;
}
 
// Driver code
int main()
{
    int price[] = {90, 80, 70, 60, 50};
    int n = sizeof(price) / sizeof(price[0]);
    cout << "Maximum Profit = " << maxProfit(price, n);
    return 0;
}