#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int val){
		data=val;
		next=NULL;
	}
};

struct linkedlist{
	Node* head=NULL;
	Node* tail=NULL;
	void insert(int val){
		if(head==NULL){
			head=new Node(val);
			tail=head;
		}
		else{
			tail->next=new Node(val);
			tail=tail->next;
		}
	}
	void del(){
		Node* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		tail=temp;
		
		tail->next=NULL;
		
	}
	void display(){
		Node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
};
#endif
