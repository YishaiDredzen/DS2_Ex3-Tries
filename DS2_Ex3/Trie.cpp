#include "Trie.h"  
#include <iostream>
#include <malloc.h>

using namespace std;

void Trie::insertWord(string str)
{
    //if (searchWord(str))
    //{
    //    return;
    //}

    //Node* root = this->root;
    //Node* currentFather = this->root;
    //int key;
    //for (int i = 0; i < str.length(); ++i)
    //{
    //    key = str[i] - 'a';
    //    if (!currentFather->children[key])
    //    {
    //        //create Node
    //        currentFather->children[key] = new Node();
    //        currentFather->childrenCount++;
    //    }
    //    currentFather = currentFather->children[key];
    //}
    //currentFather->isEndWord = true;
}

bool Trie::deleteWord(string str)
{
    /*if (!root || str.empty())
        return false;

    Node *root = this->root;
    Node *current = this->root;
    Node *endofPrefix = nullptr;

    int key;
    for (int i = 0; i < str.length(); i++)
    {
        key = str[i] - 'a';
        if (!current->children[key])
            return false;

        if (current->childrenCount > 1 || current->isEndWord)
        {
            endofPrefix = current;
        }
        current = current->children[key];
    }

    Node *next = current;

    if (endofPrefix == current)
        current->isEndWord = false;

    while (current != endofPrefix)
    {
        next = current->parent;
        free(current);
        current = next;
    }*/

    return true;
}

bool Trie::searchWord(string str)
{
    /*if (!root || str.empty())
        return false;

    Node *root = this->root;
    Node *current = this->root;

    int key;
    for (int i = 0; i < str.length(); i++)
    {
        key = str[i] - 'a';
        if (!current->children[key])
            return false;
        else current = current->children[key];
    }*/

    return true;
}

void Trie::printSubTrie(Node *node, int key)
{
   /* char c = 'a' + key;
    cout << c << ' ';
    if (node->childrenCount > 0)
    {
        printAutoSuggestionsHelper(node);
    }*/
}

int Trie::printAutoSuggestions(string str)
{
    Node *nptr = searchPrefix(str);
    printAutoSuggestionsHelper(nptr);
}

int Trie::printAutoSuggestionsHelper(Node *nptr)
{
    int countedChildren = 0;
    if (nptr)
    {
        for (int key = 0; key < ALPHABET; ++key)
        {
            if (nptr->children[key])
            {
                ++countedChildren;
                printSubTrie(nptr->children[key], key);
            }
            if (countedChildren == nptr->childrenCount)
            {
                break;
            }
        }
    }
    return nptr->childrenCount;
}

bool Trie::searchWord(string str, Node* nptr)
{
    if (!nptr || !root || str.empty())
        return false;

    Node *root = nptr;
    Node *current = nptr;

    int key;
    for (int i = 0; i < str.length(); i++)
    {
        key = str[i] - 'a';
        if (!current->children[key])
            return false;
        else current = current->children[key];
    }

    return true;
}

Node *Trie::searchPrefix(string str)
{
    if (root)
        return nullptr;

    Node *root = this->root;
    Node *current = this->root;

    int key;
    for (int i = 0; i < str.length(); i++)
    {
        key = str[i] - 'a';
        if (!current->children[key])
            return nullptr;
        else current = current->children[key];
    }

    return current;
}