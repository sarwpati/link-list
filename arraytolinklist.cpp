#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node(int value){
        data=value;
        next=NULL;

    }

};
int main(){
    node * head;


    head=NULL;
    int arr[]={4,2,6,1,9};
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new node(arr[i]);
        }
        else{
            node*temp=new node(arr[i]);
            temp->next=head;
            head=temp;
        }
    }

    node*temp=head;
    while(temp){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}
