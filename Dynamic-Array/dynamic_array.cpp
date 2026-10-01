#include <bits/stdc++.h>
using namespace std;

// Process queries using sequences and the XOR-based index rule.
vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> arr(n);
    vector<int> result;
    int lastAnswer = 0;

    for (int i = 0; i < queries.size(); i++) {
        int type = queries[i][0];
        int x = queries[i][1];
        int y = queries[i][2];

        // XOR with lastAnswer determines the sequence index.
        int index = (x ^ lastAnswer) % n;

        if (type == 1) {
            arr[index].push_back(y);
        }
        else if (type == 2) {
            lastAnswer = arr[index][y % arr[index].size()];
            result.push_back(lastAnswer);
        }
    }

    return result;
}
