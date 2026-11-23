/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
       vector<double> ans;

       if(root == nullptr) return ans;
       queue<TreeNode*> q;
       q.push(root);

       while(!q.empty()){
         int size =  q.size();
          vector<int> leval;
         for(int i=0; i<size; i++){
            TreeNode* curr = q.front();
            q.pop();

            leval.push_back(curr->val);

            if(curr->left){
                q.push(curr->left);
            }

            if(curr->right){
                q.push(curr->right);
            }
         }
          double sum = 0.0;
          for(int x : leval){
            sum += x;
          }

          ans.push_back(sum/size);
       }

       return ans;
    }
};