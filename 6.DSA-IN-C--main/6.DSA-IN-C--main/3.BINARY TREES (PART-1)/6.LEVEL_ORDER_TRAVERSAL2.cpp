#include <iostream>
#include <vector>
#include <queue>
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
void levelorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            cout << endl;
            if (q.empty())
            {
                break;
            }
            q.push(NULL);
        }

        cout << curr->data << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
    cout << endl;
}

int main()
{
    vector<int> nodes = {1, 2, 3, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    node *root = buildtree(nodes);
    cout << "root is" << root->data << endl;
    levelorder(root);
    return 0;
}