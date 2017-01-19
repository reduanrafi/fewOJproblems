#include<iostream>
#include<stdio.h>
#define mx 100
using namespace std;
    int top=-1;
    int stk[mx];
    void push(){
        int x;
        if(top==mx-1){
            cout<<"stack is full cant insert"<<endl;
        }
        else{
                cout<<"Enter an element"<<endl;
                cin>> x;
                top=top+1;
                stk[top]=x;

        }
    }
     void pop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
        }
        else{

            top--;
        }
     }
     void show(){
         int i;
     cout<<"The stack is "<<endl;
     for(i=0;i<=top;i++){
        cout<<stk[i]<<" ";
     }
     cout<<"\n";
     }
     int main()
     {
         int option=1;
        printf("STACK OPERATION\n");
    while (option)
    {
        printf ("------------------------------------------\n");
        printf ("      1    -->    PUSH               \n");
        printf ("      2    -->    POP               \n");
        printf ("      3    -->    DISPLAY               \n");
        printf ("      4    -->    EXIT           \n");
        printf ("------------------------------------------\n");
       int choice;
        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            break;
        }
       getchar();
        printf ("Do you want to continue(Type 0 or 1)?\n");
        scanf    ("%d", &option);
    }

         return 0;
     }
