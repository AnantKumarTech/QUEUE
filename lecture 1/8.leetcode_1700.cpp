
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int countStudents(vector<int> &students, vector<int> &sandwiches)
{
    vector<int> count(2, 0);
    queue<int> v;

    for (int i = 0; i < students.size(); i++)
    {
        v.push(students[i]);

        if (students[i] == 0)
            count[0]++;
        else
            count[1]++;
    }

    int j = 0;

    while (j < sandwiches.size() && !v.empty())
    {
        if (v.front() != sandwiches[j] && count[sandwiches[j]] == 0)
            return v.size();

        if (sandwiches[j] == v.front())
        {
            v.pop();
            count[sandwiches[j]]--;
            j++;
        }
        else
        {
            int ans = v.front();
            v.pop();
            v.push(ans);
        }
    }

    return v.size();
}

int main()
{

    vector<int> students = {1, 1, 0, 0};
    vector<int> sandwiches = {0, 1, 0, 1};

    cout << countStudents(students, sandwiches);

    return 0;
}
