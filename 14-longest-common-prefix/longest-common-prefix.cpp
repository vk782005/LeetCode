class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_length=INT_MAX;
        for(int i=0;i<strs.size();i++){if(strs[i].length()<min_length){min_length=strs[i].length();}}
        
        string output="";
        int key=0;
        for(int i=0;i<min_length;i++){
            char prev = strs[0][i];
            for(int j=1;j<strs.size();j++){
                char curr = strs[j][i];
                if(curr!=prev){key=1;break;}
            }
            if(key==0){output=output+prev;}
            else{break;}
        }
        return output;
    }
};