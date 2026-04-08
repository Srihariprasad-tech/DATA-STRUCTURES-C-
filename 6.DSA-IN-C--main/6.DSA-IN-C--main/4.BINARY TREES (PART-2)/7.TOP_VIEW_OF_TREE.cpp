#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
#include<map>
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
void topview(node* root)
{
    queue<pair<node*,int>> q;// node,hd
    map<int,int>m;//hd node->data
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<node* ,int>curr=q.front();
   q.pop();
   node* currnode=curr.first;
   int currhd=curr.second;
if(m.count(currhd)==0)
{
    m[currhd]=currnode->data;
}
if(currnode->left!=NULL)
{
    pair<node*,int>left=make_pair(currnode->left,currhd-1);
    q.push(left);
}
if(currnode->right!=NULL)
{
    pair<node*,int>right=make_pair(currnode->right,currhd+1);
    q.push(right);
}

    }
    for(auto it: m)
    {
        cout<<it.second<<" ";
    }
    cout<<endl;

}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    node *root = buildtree(nodes);
    cout << "root is" << root->data << endl;
    topview(root);
   // cout << "height is" << height(root) << endl;
   // cout << "diameter is" << diam1(root) << endl;
    return 0;
}
