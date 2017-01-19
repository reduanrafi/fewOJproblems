#include<iostream>
#include<stdio.h>
using namespace std;

    struct node{

    int data;
    node* next;
    };
        node* head;
    void insrt(int data)
    {
        node* temp=new node();
        temp->data=data;
        temp->next=head;
        head=temp;
    }
    void echo()
    {
        node* temp=head;
        cout<<"The list is"<<endl;
        while(temp!=NULL)
            {
                printf("%d",temp->data);
               temp=temp->next;
            }
            cout<<"\n";
    }

    int main()

    {
        head=NULL;
        int n,x;
        cout<<"how many numbers you want to insert"<<endl;
        cin>>n;
        cout<<"enter "<<n<<"Numbers";
        for(int i=0;i<n;i++)
            {
                cin>>x;
                insrt(x);
                echo();

            }



    }
