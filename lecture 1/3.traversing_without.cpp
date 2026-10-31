#include <iostream>
#include <queue>
using namespace std;
void print(queue<int> &v)
{
    int n=v.size();
    while(n--){
        cout << v.front() << " ";
        v.push(v.front());
        v.pop();
    }
    

    // for(int i=0;i<v.size();i++)
    // {
    //     cout << v.front() << " ";
    //     v.push(v.front());
    //     v.pop();
    // }
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
    cout<<endl;
    print(v);

}
