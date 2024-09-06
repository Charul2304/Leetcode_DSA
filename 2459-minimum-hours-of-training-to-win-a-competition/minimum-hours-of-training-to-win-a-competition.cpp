class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int ene=0;
        int n=energy.size();
        for(int i=0;i<n;i++){
            ene+=energy[i];
        }
        ene=ene-initialEnergy+1;
        int exp=0;
        for(int i=0;i<n;i++){
            if(initialExperience < experience[i]){
                exp+=experience[i]-initialExperience+1;
                initialExperience+=exp+experience[i];
            }
            else if(initialExperience == experience[i]){
                exp+=1;
                initialExperience+=1+experience[i];
            }
            else{
                initialExperience+=experience[i];
            }
        }
        cout<<ene<<" "<<exp<<endl;
        if(ene<0) ene=0;
        return ene+exp;
    }
};