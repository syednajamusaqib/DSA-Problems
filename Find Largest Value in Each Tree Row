class Solution {
public:
    vector<int> ans;
    void traversal(TreeNode* root, int level){
        if(!root) return;

        if(level<ans.size()){
            if(root->val > ans[level]){
                ans[level] = root->val;
            }
        }
        else{
            ans.push_back(root->val);
        }
        traversal(root->left,level+1);
        traversal(root->right,level+1);
            
        
    }

    vector<int> largestValues(TreeNode* root) {
        traversal(root,0);
        return ans;

    }
};
