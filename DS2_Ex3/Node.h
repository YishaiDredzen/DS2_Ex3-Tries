#pragma once
#define ALPHABET 26 


class Node
{
public: 
    Node **children;
    Node *parent = nullptr;
    bool isEndWord = false;
    int childrenCount = 0;
    
    Node() 
    {
        children = new Node*[ALPHABET];
    }
    Node(Node* par) 
    { 
        parent = par;
        children = parent->children;
        childrenCount = parent->childrenCount;
    };
    ~Node()
    {
        delete[] children;
    }

};