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
bool roottonodepath(node *root, int n, vector<int> &path)
{
    if (root == NULL)
    {
        return false;
    }
    path.push_back(root->data);
    if (root->data == n)
    {
        return true;
    }
    int isleft = roottonodepath(root->left, n, path);
    int isright = roottonodepath(root->right, n, path);
    if (isleft || isright)
    {
        return true;
    }
    path.pop_back();
    return false;
}

int lca(node *root, int n1, int n2)
{
    vector<int> path1;
    vector<int> path2;
    roottonodepath(root, n1, path1);
    roottonodepath(root, n2, path2);
    int lca = -1;
    for (int i = 0, j = 0; i < path1.size() && j < path2.size(); i++, j++)
    {
        if (path1[i] != path2[j])
        {
            return lca;
        }
        lca = path1[i];
    }
    return lca;
}

node *lca2(node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2)
        return root;

    node *left = lca2(root->left, n1, n2);
    node *right = lca2(root->right, n1, n2);

    if (left && right)
        return root;
    return (left != NULL) ? left : right;
}

int dist(node *root, int n)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == n)
    {
        return 0;
    }
    int leftdist = dist(root->left, n);
    if (leftdist != -1)
    {
        return leftdist + 1;
    }
    int rightdist = dist(root->right, n);
    if (rightdist != -1)
    {
        return rightdist + 1;
    }
    return -1;
}

int mindist(node *root, int n1, int n2)
{
    node *lca = lca2(root, n1, n2);
    int dist1 = dist(lca, n1);
    int dist2 = dist(lca, n2);
    return dist1 + dist2;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    node *root = buildtree(nodes);
    cout << "root is" << root->data << endl;
    int n1 = 4, n2 = 3;
    cout << " lca is" << lca(root, n1, n2) << endl;
    cout << ",min dist is" << mindist(root, n1, n2);
    return 0;
}