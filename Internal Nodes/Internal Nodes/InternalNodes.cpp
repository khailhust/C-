/*
A tree is an abstract data structure consisting of nodes.Each node has only one parent nodeand zero or more child nodes.Each tree has one special node, called a root, which has no parent node.A node is called an internal node if it has one or more children.
A tree can be represented by an array P where P[i] is the parent of node i.For the root node r, P[r] equals - 1.
Write a function that, efficiently with respect to time used, counts the number of internal nodes in a given tree.
For example, the tree represented by the array{ 1, 3, 1, -1, 3 } has 5 nodes, 0 to 4, of which 2 nodes are internal nodes(only nodes 1 and 3 have children).
*/
#include <vector>
#include <stdexcept>
#include <iostream>
#include <algorithm>
int countInternalNodes(const std::vector<int>& tree)
{
    //throw std::logic_error("Waiting to be implemented");
    std::vector<int> buf;
    buf.push_back(tree[0]);
    std::vector<int>::iterator it;
    for (size_t i = 1; i < tree.size(); ++i)
    {
        it = std::find(buf.begin(), buf.end(), tree[i]);
        if (it == buf.end())
        {
            buf.push_back(tree[i]);
        }
    }

    return buf.size() - 1;
}
#ifndef RunTests
int main()
{
    std::vector<int> tree;
    tree.push_back(1);
    tree.push_back(3);
    tree.push_back(1);
    tree.push_back(-1);
    tree.push_back(3);
    //tree.push_back(4);
    //tree.push_back(4);
    std::cout << countInternalNodes(tree);
}
#endif
