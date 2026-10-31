
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

string predictPartyVictory(string senate)
{
    int ans=senate.length();
    queue<int>queD;
    queue<int>queR;
for(int i=0;i<senate.length();i++){
    if (senate[i]=='D')
        queD.push(i);
    
    else
        queR.push(i);
}
while (queR.size() != 0 && queD.size() != 0){
    if (queR.front() < queD.front()){
        queR.push(queR.front()+ans);
        queR.pop();
        queD.pop();
    }
    else{
        queD.push(queD.front() + ans);
        queR.pop();
        queD.pop();
    }
    }
    if (queR.size()==0){
        return "Dire";
    }
    else{
        return "Radiant";
    }
}

int main(){
    string senate = "RD";

    cout<<predictPartyVictory(senate);
}