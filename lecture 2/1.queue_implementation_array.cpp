#include <iostream>
#include <vector>
using namespace std;
// push(),pop(),front(),size(),empty(),display()
class Queue{

private:
    int f;
    int length;
    int r;
    vector<int> arr;

public:
Queue(int capacity){
length=0;
f=0;
r=0;
arr.resize(capacity,0);
}
void push(int val){
if(length==arr.size()){
cout<<"Queue is Full"<<endl;
return;
}
if(r==arr.size()){
    r=0;
}
arr[r++]=val;
length++;

}
void pop(){
    if(length==0){
        cout << "Queue is Empty"<<endl;
        return;
    }
    if (f == arr.size())
    {
        f = 0;
    }
    f++;
    length--;
}
void size(){
 cout<<length<<endl;
}
void capacity(){
    cout<<arr.size()<<endl;
} 
void display(){
    if (length == 0)
    {
        cout << "Queue is Empty" << endl;
        return;
    }
if(f<r){
    for(int i=f;i<r;i++){
        cout<<f;
        cout<<endl;
        cout<<r;
        cout << endl;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
else{
    
    for(int i=f;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    for (int i = 0; i <r; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
}
void front(){
    cout << arr[f] << endl;
}
    
};
int main()
{
    Queue v(5);
    v.push(10);
    v.pop();
    v.push(10);
    v.push(10);
    v.push(10);
    v.push(10);
   

    v.display();
    v.size();
}