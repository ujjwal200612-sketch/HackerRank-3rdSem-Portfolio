#include <bits/stdc++.h>
using namespace std;

// Compare corresponding scores and count points for Alice and Bob.
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice = 0;
    int bob = 0;

    // Award one point to the participant with the higher score.
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i])
            alice++;
        else if (a[i] < b[i])
            bob++;
    }

    return {alice, bob};
}
