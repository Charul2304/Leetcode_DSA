class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans='\0';
        int n=letters.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(letters[mid]>target){
                ans=letters[mid];
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans!='\0' ? ans : letters[0];
    }
};