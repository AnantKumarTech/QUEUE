
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


    vector<int> deckRevealedIncreasing(vector<int> &deck)
    {
        sort(deck.begin(), deck.end());

        int n = deck.size();
        queue<int> v;
        vector<int> ans(n, 0);
        vector<int> v2;

        for (int i = 0; i < deck.size(); i++)
        {
            v.push(i);
        }

        int j = 0;

        while (v.size() != 0)
        {
            if (j % 2 == 0)
            {
                v2.push_back(v.front());
                v.pop();
            }
            else
            {
                int ans = v.front();
                v.pop();
                v.push(ans);
            }
            j++;
        }

        for (int i = 0; i < deck.size(); i++)
        {
            ans[v2[i]] = deck[i];
        }

        return ans;
    }


int main()
{
   

    vector<int> deck = {17, 13, 11, 2, 3, 5, 7};

    vector<int> result = deckRevealedIncreasing(deck);

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}
