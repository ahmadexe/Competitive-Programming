#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* node;
};

void print(struct Node* a){
    while (a != NULL)
    {
        cout<<a->data<<endl;
        a = a->node;
        a = a->node;
    }
}

int main(int argc, char const *argv[])
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node*));
    struct Node* sec = (struct Node*)malloc(sizeof(struct Node*));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node*));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node*));
    struct Node* fifth = (struct Node*)malloc(sizeof(struct Node*));
    struct Node* sixth = (struct Node*)malloc(sizeof(struct Node*));
    struct Node* sev = (struct Node*)malloc(sizeof(struct Node*));
    struct Node* tail = (struct Node*)malloc(sizeof(struct Node*));

    head->data = 100;
    head->node = sec;
    
    sec->data = 200;
    sec->node = third;
    third->data = 300;
    third->node = fourth;
    fourth->data = 400;
    fourth->node = fifth;

    fifth->data = 500;
    fifth->node = sixth;

    sixth->data = 600;
    sixth->node = sev;

    sev->data = 700;
    sev->node = tail;

    tail->data = 800;
    tail->node = NULL;    

    print(head);
return 0;
}