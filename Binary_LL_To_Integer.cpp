#include<bits/stdc++.h>
using namespace std;
int binaryToInteger(int n, Node *head) {
    //    Write your code here
    string bin = "";
    if(!head) {
        return 0;
    }
    Node* temp = head;
    while(temp != NULL) {
        bin += to_string(temp->data);
        temp = temp->next;
    }
    return stoi(bin,nullptr,2);
}