#include <iostream>
using namespace std;

int mProfit(int* prices, int n) {
    int profit = 0, currDay = n - 1;

    while (currDay > 0) {
        int day = currDay - 1;
        
        while (day >= 0 && (prices[currDay] > prices[day])) {
            profit += (prices[currDay] - prices[day]);
            day--;
        }

        currDay = day;
    }

    return profit;
}

int main() {
    int N;

    cout << "Enter the number of days: ";
    cin >> N;

    int* prices = new int[N];

    cout << "Enter the prices: ";
    for (int i = 0; i < N; i++) {
        cin >> prices[i];
    }

    cout << "Maximum Profit: " << mProfit(prices, N) << endl;

    delete[] prices;

    return 0;
}
