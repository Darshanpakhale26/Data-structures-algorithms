// Program to perform stack operations using STL    


#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;

    s.push(10);  // Pushing 10
    s.push(20);  // Pushing 20
    s.push(30);  // Pushing 30

    cout << s.top() << endl;  // 30
    s.pop();  // Popping 30
    cout << s.top() << endl;  // 20
    cout << s.size() << endl;  // 2
    cout << s.empty() << endl;  // 0

    return 0;
}
