#include <iostream>
#include <queue>
using namespace std;
void print(queue<int> &v){
while(v.size()!=0){
    cout<<v.front()<<" ";
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

}
