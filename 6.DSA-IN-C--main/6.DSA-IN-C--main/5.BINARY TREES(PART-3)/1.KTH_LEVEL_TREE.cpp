#include <iostream>
#include <vector>
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
void kthhelper(node *root, int k, int currlevel)
{
    if (root == NULL)
    {
        return;
    }
    if (currlevel == k)
    {
        cout << root->data << " ";
        return;
    }
    kthhelper(root->left, k, currlevel + 1);
    kthhelper(root->right, k, currlevel + 1);
}

void kthlevel(node *root, int k)
{
    kthhelper(root, k, 1);
    cout << endl;
}

int main()
{
    vector<int> nodes = {1, 2, 3, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    node *root = buildtree(nodes);
    cout << "root is" << root->data << endl;
    kthlevel(root, 3);
    return 0;
}