#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void reverse(queue<int> &v)
{
    int n = v.size();
    stack<int>st;
    while(n--){
        st.push(v.front());
        v.pop();
    }
     while(st.size()!= 0){
        v.push(st.top());
        st.pop();
    }
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
    reverse(v);
    print(v);
}
