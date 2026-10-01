#include <bits/stdc++.h>
using namespace std;

// Calculate the absolute difference between the two diagonal sums.
int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int primary = 0, secondary = 0;

    // Traverse the matrix once and collect both diagonal sums.
    for (int i = 0; i < n; i++) {
        primary += arr[i][i];
        secondary += arr[i][n - 1 - i];
    }

    return abs(primary - secondary);
}
