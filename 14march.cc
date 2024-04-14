class Solution {
public:
    int sum(TreeNode* root, int &ans){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return root->val;
        int leftt= sum(root->left, ans);
        ans+=leftt;
        sum(root->right, ans);
        return 0;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;
        sum(root,ans);
        return ans;
    }
};

 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;
        while(root){
            if(root->left){
                auto pre=root->left;
                while(pre->right && pre->right!=root)
                    pre=pre->right;
                    if(!pre->right){
                        pre->right=root;
                        root=root->left;
                    }
                    else{
                        pre->right=nullptr;
                        if(pre==root->left && !pre->left)
                            ans+=pre->val;
                            root=root->right;
               }
            }
            else root=root->right;
        }
        return ans;
    }
};