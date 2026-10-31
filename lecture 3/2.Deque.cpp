#include <iostream>
#include <queue>
using namespace std;
// deque (doubly-ended queue)(deck)
void print(deque<int>&dq){
    int n=dq.size();

    while(n--){
        int ans=dq.front();
        cout<<ans<<" ";
        dq.pop_front();
        dq.push_back(ans);
    }
}

int main()
{
    deque<int> dq;
    dq.push_back(5);
    dq.push_back(4);
    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);

    print(dq);
}
