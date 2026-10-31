#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class MyQueue{
    private:
    int length;
    Node *rear;
    Node *head;
    public:
    MyQueue(){
        head=NULL;
        rear=NULL;
        length=0;
    }
    void push(int val)
    {
        if (length == 0)
        {
            Node *temp = new Node(val);
            head = temp;
            rear = temp;
        }
        else{

        Node *temp = new Node(val);
        rear->next=temp;
        rear = rear->next;
        }
        length++;
    }
    void pop()
    {
        if (length == 0)
        {
            cout << "queue is empty";
            return;
        }
        Node *toBeDeleted = head;
        head = head->next;
        delete toBeDeleted;
        length--;
    }
    int size()
    {
        return length;
    }
    void display()
    {
        if (head == NULL)
        {
            cout << "stack is empty";
        }
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
    int front()
    {
        if (length == 0)
        {
            cout << "queue is empty";
            return -1;
        }
        return head->val;
    }
};
int main(){
    MyQueue v;
    v.push(10); // add at back
    v.push(20);
    v.push(30);
    // v.pop(); // remove the front
    v.push(45);
    v.display();
    cout<<endl;
    cout << v.size() << endl;
}