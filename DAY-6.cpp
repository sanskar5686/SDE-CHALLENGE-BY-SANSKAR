// Approach - 1 
// T.C -> O(size1*size2)
// S.C -> O(1)

#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    Node *head1 = firstHead;
    Node *head2 = secondHead;
    while(head2 != NULL){
        Node *temp = head1;
        while(temp != NULL){
            if(temp==head2) return head2->data;
            temp =temp->next;
        }
        head2 = head2 -> next;
    }
    return -1;
}

// Approach - 2 
// T.C -> O(size1+size2)
// S.C -> O(max(size1,size2)

#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    unordered_map<Node*,Node*> map;
    Node *head1 = firstHead;
    Node *head2 = secondHead;
    while(firstHead != NULL){
        map[firstHead] = firstHead;
        firstHead = firstHead->next;
    }
    while(secondHead != NULL){
        if(map[secondHead] == secondHead){
            return secondHead->data;
        }
        secondHead = secondHead->next;
    }
    return -1;
}

// Approach - 3
// T.C -> O(size1+size2)
// S.C -> O(1)
#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    unordered_map<Node*,Node*> map;
    Node *head1 = firstHead;
    Node *head2 = secondHead;
    int len1=0,len2 = 0;
    while(head1 != NULL){
        len1++;
        head1 = head1->next;
    }
      while(head2 != NULL){
        len2++;
        head2 = head2->next;
    }
    int len = abs(len1 - len2);
    int i;
    if(len1 > len2){
        i =0;
        while(i<len){
            i++;
            firstHead = firstHead-> next;
        }
    }
    else{
        i=0;
         while(i<len){
            i++;
            secondHead = secondHead-> next;
        }
    }
    while(secondHead != NULL&& firstHead != NULL){
        if(firstHead ==secondHead){
            return secondHead->data;
        }
        secondHead = secondHead->next;
        firstHead = firstHead -> next;
    }
    return -1;
}

// Approach - 4
// Clean and clear
// T.C -> O(size1+size2)
// S.C-> O(1)

#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    Node *head1 = firstHead;
    Node *head2 = secondHead;
    while(head1 != head2){
       if(head1 == NULL){
        head1 = secondHead;
    }
        else{
        head1 = head1 -> next;
        }
       if(head2 == NULL){
        head2 = firstHead;
       }
        else{
        head2 = head2 -> next;
        }
    }
    if(head1 == NULL){
        return -1;
    }
     return head1->data;
}
