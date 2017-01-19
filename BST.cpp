#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
 using namespace std;
 struct bstNode{
 int data;
 bstNode* left;
 bstNode* right;

 };
 bstNode* rootPtr;

 bstNode* getNewNode(int data)
 {
     bstNode* newNode= new bstNode();
     newNode->data=data;
     newNode->left=NULL;
     newNode->right=NULL;
     return newNode;
 }

bstNode* Insert( bstNode* root,int data)
{
    if(root==NULL){

        root=getNewNode(data);
        return root;
    }
    else if(data<= root->data){
        root->left=Insert(root->left,data);

    }
    else{
        root->right=Insert(root->right,data);

    }
    return root;
}

bool Search(bstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}

void printTree(bstNode* root) {
  if (root == NULL) return;

  printTree(root->left);
  printf("%d ", root->data);
  printTree(root->right);
}

 int main()
 {
     bstNode* root =NULL;
     int n;

      root= Insert(root,8);
      root= Insert(root,9);
      root= Insert(root,7);
      root= Insert(root,5);
      printTree(root);
       // printf("%d",*root);
        int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";

     return 0;
 }
