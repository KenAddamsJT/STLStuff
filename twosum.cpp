#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int len = nums.size();
    int i;
    int r = len - 1;
    for (i = 0; i < len; i++)
    {
        while (nums[r] == val && r > -1)
        {
            r--;
        }
        if (r == -1)
        {
            return -1;
        }
        if (i == r)
        {
            break;
        }
        if (nums[i] == val)
        {
            nums[i] = nums[r];
            r--;
        }
    }
    return ++i;
}

bool isValid(string s)
{
    stack<char> st;
    for (auto i : s)
    {
        if (st.empty())
        {
            if (i == ')' || i == '}' || i == ']')
            {
                return false;
            }
        }
        if (i == '(' || i == '{' || i == '[')
        {
            st.push(i);
        }
        else if (st.top() == '(' && i == ')')
        {
            st.pop();
        }
        else if (st.top() == '{' && i == '}')
        {
            st.pop();
        }
        else if (st.top() == '[' && i == ']')
        {
            st.pop();
        }
        else
        {
            return false;
        }
    }
    if (st.empty())
    {
        return true;
    }
    return false;
}

uint32_t reverseBits(uint32_t n)
{
    int rev = 0;

    for (int i = 0; i < 32; i++)
    {
        rev = rev | (n & 1);
        n = n >> 1;
        if (i != 31)
            rev = rev << 1;
    }
    return rev;
}

int myAtoi(string s)
{
    int num = 0, i = 0, flag = 1;
    while (!isdigit(s[i]))
    {
        i++;
    }
    if (i > 0 && s[i - 1] == '-')
        flag = -1;
    while (isdigit(s[i]))
    {
        // if((flag*num) > INT_MAX / 10){
        //     num = pow(2, 31) - 1;
        //     return num;
        // }
        // if((flag*num) < INT_MIN / 10){
        //     num = (-1) * pow(2, 31);
        //     return num;
        // }
        int b = int(s[i] - '0');
        cout << s[i];
        cout << b;
        break;
        num = num * 10 + int(s[i] - '0');
    }
    return (flag * num);
}

int lengthOfLongestSubstring(string s)
{
    int i = 0, j = 0, ans = 0, diff = 0, len = s.size();
    unordered_map<char, int> m;
    // if (len == 1)
    // {
    //     return 1;
    // }
    while (j < len)
    {
        if (m.find(s[j]) != m.end())
        {
            i = j;
            m.erase(s[j]);
        }
        m[s[j]] = j;
        j++;
        diff = j - i;
        ans = max(ans, diff);
    }
    for (auto i : m)
    {
        cout << i.first << endl;
    }
    return ans;
}

int romanToInt(string s)
{
    unordered_map<char, int> m;
}

int main()
{
    string c = " ";
    cout << lengthOfLongestSubstring(c);
}
