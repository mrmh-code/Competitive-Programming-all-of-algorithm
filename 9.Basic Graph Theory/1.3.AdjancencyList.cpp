#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string name;
    list<string> cts;

    Node(string name)
    {
        this->name = name;
    }
};

class Graph
{
    unordered_map<string, Node *> m;

public:
    Graph(vector<string> cities)
    {
        for (auto city : cities)
        {
            m[city] = new Node(city);
        }
    }

    void addEdge(string x, string y, bool und = false)
    {
        m[x]->cts.push_back(y);

        if (und)
        {
            m[y]->cts.push_back(x);
        }
    }

    void printAdjList()
    {
        for (auto cityPair : m)
        {
            auto city = cityPair.first;
            cout << city << "--->";
            Node *node = cityPair.second;

            for (auto ct : node->cts)
            {
                cout << ct << " ,";
            }
            cout << endl;
        }
    }
};

int main()
{
    vector<string> cities = {"Dhaka", "New York", "London", "Berlin", "Delhi"};
    Graph G(cities);

    G.addEdge("Dhaka", "New York");
    G.addEdge("Berlin", "London");
    G.addEdge("Dhaka", "Delhi");

    G.printAdjList();
}