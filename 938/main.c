#include <stdlib.h>
#include <stdio.h>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
int rangeSumBST(struct TreeNode* root, int L, int R){
    // base case 
    if (root == NULL) return 0;
    int ret = 0;
    if( root -> val >= L  && root -> val <= R ){
        ret = root-> val;
      
    }
    ret += rangeSumBST(root->left, L , R);
    ret += rangeSumBST(root->right, L , R);

    // recursive to add the number up 
    return  ret;
}


int main(int argc, char *argv[])
{
    /* code */
    return 0;
}
