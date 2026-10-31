// #include <vector>
// #include <stack>
// #include <iostream>
// #include <climits>
// using namespace std;
// vector<int> maxSlidingWindow(vector<int> &nums, int k)
// {
//     int n = nums.size();
//     vector<int> v(n - k + 1, 0);
//     for (int i = 0; i < n - k + 1; i++)
//     {
//         int ans = INT_MIN;
//         for (int j = 0; j < k; j++)
//         {
//             ans = max(ans, nums[j + i]);
//         }
//         v[i] = ans;
//     }
//     return v;
// }

// int main()
// {
//     vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};

//     vector<int> ans = maxSlidingWindow(arr, 3);
//     cout << endl;

//     for (int x : ans)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

#include <vector>
#include <stack>
#include <iostream>
#include <climits>
#include <queue>
using namespace std;
vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> v(n - k + 1);
    deque<int> dq;

    vector<int> v(n - k + 1, 0);
    for (int i = 0; i < k; i++)
    {

        while (dq.size() > 0 && nums[dq.back()] < nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    v[0] = nums[dq.front()];
    for (int i = k; i < n; i++)
    {
        int j = i - k + 1;

        while (dq.size() > 0 && nums[dq.back()] < nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        while (dq.size() > 0 && dq.front() < j)
            dq.pop_front();
        v[j] = nums[dq.front()];
    }

    return v;
}

int main()
{
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};

    vector<int> ans = maxSlidingWindow(arr, 3);
    cout << endl;

    for (int x : ans)
    {
        cout << x << " ";
    }
    return 0;
}