#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
static int idx = -1;
node *buildtree(vector<int> nodes)
{
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }
    node *currnode = new node(nodes[idx]);
    currnode->left = buildtree(nodes);
    currnode->right = buildtree(nodes);
    return currnode;
}
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftht = height(root->left);
    int rightht = height(root->right);
    int currht = max(leftht, rightht) + 1;
    return currht;
}
int diam1(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int currdia = height(root->left) + height(root->right) + 1;
    int leftdiam = diam1(root->left);
    int rightdiam = diam1(root->right);
    return max(currdia, max(leftdiam, rightdiam));
}
bool isidentical(node *root1, node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    else if (root1 == NULL || root2 == NULL)
    {
        return false;
    }
    return isidentical(root1->left, root2->left) && isidentical(root1->right, root2->right);
}

bool issubtree(node *root, node *subroot)
{
    if (root == NULL && subroot == NULL)
    {
        return true;
    }
    else if (root == NULL || subroot == NULL)
    {
        return false;
    }
    if (root->data == subroot->data)
    {
        if (isidentical(root, subroot))
        {
            return true;
        }
    }

    int isleftsubtree = issubtree(root->left, subroot);
    if (!isleftsubtree)
    {
        return issubtree(root->right, subroot);
    }
    return true;
}
int main()
{
    vector<int> nodes = {1, 2, 3, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    node *root = buildtree(nodes);
    cout << "root is" << root->data << endl;
    cout << "height is" << height(root) << endl;
    cout << "diameter is" << diam1(root) << endl;
    node *subroot = new node(2);
    subroot->left = new node(4);
    //subroot->right = new node(5);
    cout << issubtree(root, subroot) << endl;
    return 0;
}
