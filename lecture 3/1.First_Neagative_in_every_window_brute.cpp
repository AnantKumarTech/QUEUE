#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> FirstNegative(vector<int>&arr,int k){

    int n = arr.size();
    vector<int> v;

    queue<int> negative;

    // Store indices of all negative elements
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negative.push(i);
        }
    }

    // Process every window
    for (int i = 0; i <= n - k; i++)
    {

        // Remove indices outside the current window
        while (!negative.empty() && negative.front() < i)
        {
            negative.pop();
        }

        // Check whether a negative element exists in the window
        if (!negative.empty() && negative.front() < i + k)
        {
            v.push_back(arr[negative.front()]);
        }
        else
        {
            v.push_back(0);
        }
    }

    return v;
}
int main()
{
    vector<int>v={7,-1,-18,-33,6,14,10,-2,-9};
    vector<int>ans = FirstNegative(v,3);
    for(int x:ans){
        cout<<x<<" ";
    }
}
