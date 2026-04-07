class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        string temp=strs[0];
        int k=0;
        while(true){
            string store="";
            int count=0;
            for (int l=0;l<temp.size() && l<=k;l++){
                store+=temp[l];
            }
            for (int i=0;i<strs.size();i++){
                string temp1=strs[i],temp2="";
                for (int j=0;j<temp1.size() && j<=k;j++){
                    temp2+=temp1[j];
                }
                if (store==temp2){
                    count++;
                }
                else{
                    return ans;
                }
            }
            if (count==strs.size()){
                ans=store;
            }
            else{
                break;
            }
            if (k>=strs[0].size()) break;
            k++;
        }
        return ans;
    }
};