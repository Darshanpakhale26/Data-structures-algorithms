//A and B are good friend and programmers. They are always in a healthy competition with each other. They decide to judge the best among them by competing. They do so by comparing their three skills as per their values. Please help them doing so as they are busy.

// Set for A are like [a1, a2, a3]
// Set for B are like [b1, b2, b3]

// Compare ith skill of A with ith skill of B
// if a[i] > b[i] , A's score increases by 1
// if a[i] < b[i] , B's score increases by 1

#include <iostream>
#include <vector>

using namespace std;

vector<int> compete_skills(vector<int> a, vector<int> b) {
    int n = a.size();
    int a_score = 0, b_score = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            a_score++;
        } else if (a[i] < b[i]) {
            b_score++;
        }
    }
    return {a_score, b_score};
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {3, 2, 1};
    vector<int> res = compete_skills(a, b);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}