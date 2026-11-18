class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
     stack<int> st;
     for(int i=0; i<asteroids.size(); i++){
        int curr = asteroids[i];
        bool destroy = false;

        while(!st.empty() && st.top()>0 && curr < 0){
                if(st.top() == -curr){
                    st.pop();
                    destroy = true;
                    break;

                }else if(st.top() < -curr){
                    st.pop();
                }else{
                    destroy = true;
                    break;
                }
        }

        if(!destroy){
            st.push(curr);
        }
     }

     vector<int> ans;
     while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
     }

     reverse(ans.begin(),ans.end());

     return ans;
    }
};