#include <iostream>
#include <queue>
using namespace std;
void push(int idx, int val, queue<int> &v)
{
    int n = v.size();

    if (idx < 0 || idx > n)
        return;

    for (int i = 0; i < idx; i++)
    {
        v.push(v.front());
        v.pop();
    }

    v.push(val);

    for (int i = 0; i < n - idx; i++)
    {
        v.push(v.front());
        v.pop();
    }
}
void pop(int idx,queue<int> &v){
    int n = v.size();

    if (idx < 0 || idx > n)
        return;

    for (int i = 0; i <idx; i++)
    {
        v.push(v.front());
        v.pop();
    }

    v.pop();

    for (int i = 0; i < n - idx-1; i++)
    {
        v.push(v.front());
        v.pop();
    }
}
int get(int idx, queue<int> &v){
    int n = v.size();

    if (idx < 0 || idx > n)
        return -1;

    for (int i = 0; i < idx; i++)
    {
        v.push(v.front());
        v.pop();
    }

    int ans=v.front();

    for (int i = 0; i < n - idx; i++)
    {
        v.push(v.front());
        v.pop();
    }
    return ans;
}

void print(queue<int> &v)
{
    int n = v.size();
    while (n--)
    {
        cout << v.front() << " ";
        v.push(v.front());
        v.pop();
    }

}
int main()
{
    queue<int> v;
    v.push(10); // add at back
    v.push(20);
    v.push(30);
    v.pop(); // remove the front
    v.push(45);
    cout << v.size() << endl;
    print(v);
    cout << endl;
    push(2,34,v);

    print(v);
    cout << endl;
    cout<<get(2,v);
    cout << endl;
    pop(2, v);
    
    print(v);
}
