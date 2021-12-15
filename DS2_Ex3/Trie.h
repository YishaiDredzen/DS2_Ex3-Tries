#pragma once
using namespace std;
#include <string>
#include "Node.h"
#define nullptr NULL

class Trie
{
private:
    Node* root;
    bool searchWord(string str, Node* nptr);

public:
    Trie() : root(nullptr) {}
    void insertWord(string str);
    bool deleteWord(string str);
    bool searchWord(string str);
    int printAutoSuggestions(string str);
    void printSubTrie(Node *node, int key);
    int printAutoSuggestionsHelper(Node *nptr);
    Node* searchPrefix(string str);
};