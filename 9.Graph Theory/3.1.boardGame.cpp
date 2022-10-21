#include <bits/stdc++.h>
using namespace std;

#define M 3
#define N 4

class Node
{
public:
    char s;
    unordered_map<char, Node *> children;
    string Word;
    bool isTerminal;

    Node(char s)
    {
        this->s = s;
        isTerminal = false;
        Word = "";
    }
};

class Trie
{
public:
    Node *root;

    Trie()
    {
        root = new Node('\0');
    }

    void addWord(string word)
    {
        Node *temp = root;
        for (auto ch : word)
        {
            if (temp->children.count(ch) == 0)
            {
                temp->children[ch] = new Node(ch);
            }

            temp = temp->children[ch];
        }

        temp->isTerminal = true;
        temp->Word = word;
    }
};

int main()
{
}