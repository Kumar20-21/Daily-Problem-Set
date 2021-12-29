/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *left;
 *     struct Node *right;
 *     struct Node *next;
 * };
 */

struct Node* connect(struct Node* root) 
{
        if(root==NULL)
            return NULL;
        struct Node *temp1 =root->left;
        struct Node *temp2 =root->right;
        /*
        Connecting all extreme right nodes next's of left subtree to the
        all extreme left nodes of right subtree
        */
        while(temp1 && temp2)
        {
            temp1->next=temp2;
            temp1=temp1->right;
            temp2=temp2->left;
        }
        temp1=NULL;
        temp2=NULL;
        free(temp1);
        free(temp2);
        root->left=connect(root->left);
        root->right=connect(root->right);
        return root;
}
