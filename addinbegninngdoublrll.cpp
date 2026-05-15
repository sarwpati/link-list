#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*prev;
    node*next;
    node(int value){
        data=value;
        next=NULL;
        prev=NULL;

    }


};
int main(){
    node*head=NULL;

    
        head=new node(4);

    
    
        node*temp=new node(5);
        temp->next=head;
        head->prev=temp;
        head=temp;
    
    node*travel=head;
    while(travel){
        cout<<travel->data<<endl;
        travel=travel->next;
        


    }
}

