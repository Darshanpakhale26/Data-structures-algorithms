/* Given string of "*" and "#" the length of the string is variable , the task is to find the minimum number of "*" or "#" 
to make the string valid. The string is valid if the number of "*" and "#" are equal. */


#include <iostream>
#include <string>
using namespace std;

int minOperations(string str)
{
    int n = str.length();
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '*')
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    return abs(cnt1 - cnt2);
}

int main()
{
    string str = "*#*#*#*";
    cout << minOperations(str);
    return 0;
}