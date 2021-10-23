class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        
        if(!root) return true;
        
        deque<TreeNode*> dq;
        
        dq.push_back(root);
        
        bool even = true;
        
        while(!dq.empty())
        {
            // cout << dq.size() << endl;
            if(even)
            {
                if(!((dq.front()->val) & 1)) return false;
                
                for(int i = 1; i < dq.size(); i++)
                {
                    if(!(dq[i]->val & 1) || dq[i - 1]->val >= dq[i]->val) return false;
                }
                even = false;
            }
            else
            {
                if(dq.front()->val & 1) return false;
                
                for(int i = 1; i < dq.size(); i++)
                {
                    if((dq[i]->val & 1) || dq[i - 1]->val <= dq[i]->val) return false;
                }
                even = true;
            }
            
            int sz = dq.size();
            for(int i = 0; i < sz; i++)
            {
                if(dq[i] -> left) dq.push_back(dq[i] -> left);
                if(dq[i] -> right) dq.push_back(dq[i] -> right);
                
            }
            for(int i = 0; i < sz; i++)
            {
                dq.pop_front();
            }
        }
        return true;
        
    }
};
