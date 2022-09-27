#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node*left_child;
    node*right_child;

    node(int val)
    {
        this-> val=val;
        left_child=NULL;
        right_child=NULL;
    }

};

int countt = 0;

void chacking(vector<int> vctr, string str)
{

    int f = 0;

    for (int i = vctr.size() - 1; i >= 0; i--)
    {
        int m= vctr[i];
        int n = vctr[(vctr.size() - 1) - i];

        if (str[m] != str[n])
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        countt += 1;
    }
}
void palindrome(node *root, vector<int> vctr, string chk)
{
    if (root == NULL)
        return;

    vctr.push_back(root->val);

    if (root->left_child == NULL && root->right_child == NULL)
    {
        chacking(vctr, chk);
    }
    else
    {
        palindrome(root->left_child, vctr, chk);

        palindrome(root->right_child, vctr, chk);
    }
}


int main()
{
    string str;
    cin >> str;
    int n;
    cin>>n;
    node*root=new node(n);
    queue<node*>q;
    q.push(root);

    while(!q.empty())

    {
        node*current=q.front() ;
        q.pop();
        int x,y;
        cin>>x>>y;

        node*m=NULL;
        node*n=NULL;

        if(x!=-1)
            n=new node(x) ;

        if(y!=-1)
            m=new node(y) ;

        current->left_child=n;
        current->right_child=m;

        if(n!=NULL) q.push(n);
        if(m!=NULL) q.push(m);
    }
     vector<int>vctr;
    palindrome(root, vctr, str);
    cout << countt ;
    cout<< endl;


}
