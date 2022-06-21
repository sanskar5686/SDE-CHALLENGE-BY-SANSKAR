// Approach - 1 
// T.C -> O(size)
// S.C -> O(size)
// HASHING
bool detectCycle(Node *head)
{
    unordered_set<Node*> hashset;
    while(head != NULL){
        if(hashset.find(head)!=hashset.end()){
            return true;
        }
        hashset.insert(head);
        head = head->next;
    }
    return false;
}

// Approach - 2
// T.C -> O(size)
// S.C -> O(1)
bool detectCycle(Node *head)
{
	//	Write your code here
    if(head == NULL || head -> next == NULL){
        return false;
    }
   Node *slow = head;
   Node *fast = head;
    while(fast -> next != NULL && fast -> next -> next!= NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}
