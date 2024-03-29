#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //creating a constructor 
    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2ll(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover ->next = temp;
        mover = temp;
    }
    return head;
}
int lenofLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt++;
}

int main(){
    vector<int> arr ={2,5,8,7};
    Node* head = convertArr2ll(arr);
    cout<<lenofLL(head);
}