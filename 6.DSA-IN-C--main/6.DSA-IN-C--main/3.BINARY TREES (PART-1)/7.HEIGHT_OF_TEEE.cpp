#include <iostream>
#include <vector>
#include<algorithm>
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
        left=NULL;
        right=NULL;
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
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftht=height(root->left);
    int rightht=height(root->right);
    int currht=max(leftht,rightht)+1;
    return currht;
}


int main()
{
    vector<int> nodes = {1, 2, 3, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    node *root = buildtree(nodes);
    cout << "root is" << root->data << endl;
    cout<<"height is"<<height(root)<<endl;
    return 0;
}
