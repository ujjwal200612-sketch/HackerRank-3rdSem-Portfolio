#include <bits/stdc++.h>
using namespace std;

// Count occurrences of each string using a frequency hash map.
vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int> frequency;

    // Build the frequency table from the input strings.
    for (string s : stringList)
        frequency[s]++;

    vector<int> result;

    // Look up each query directly in the frequency table.
    for (string q : queries)
        result.push_back(frequency[q]);

    return result;
}
