/*
Problem Statement

Bitwise operations allow efficient manipulation of binary representations of numbers.
You are required to solve the following problems efficiently:

Given an integer N, generate an array ans of size N + 1, where
ans[i] represents the number of set bits in the binary representation of i.

Given an array of integers where every element appears exactly twice except one,
find and return the element that appears only once.

Your solution must run in linear time and use constant extra space wherever applicable.

Line 1: An integer N
Line 2: An integer size of array
Line 3: size space-separated integers

*/

#include <iostream>
#include <vector>
using namespace std;

// Count bits from 0 to N
vector<int> countBits(int n) {
    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        ans[i] = ans[i >> 1] + (i & 1);
    }
    return ans;
}

int main() {

    // Counting Bits
    int n;
    cin >> n;
    vector<int> res = countBits(n);
    for (int x : res) cout << x << " ";
    cout << endl;

    // Single Number
    int size;
    cin >> size;
    int ans = 0;
    for (int i = 0; i < size; i++) {
        int x;
        cin >> x;
        ans ^= x;
    }
    cout << ans << endl;

    return 0;
}
