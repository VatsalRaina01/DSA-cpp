class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        vector<int> fs;
        fs.push_back(startTime[0]);
        for(int i=1;i<startTime.size();i++){
            fs.push_back(startTime[i]-endTime[i-1]);
        }
        fs.push_back(eventTime-endTime[endTime.size()-1]);
        int currsum=0;
        int maxsum=0;
        for(int i=0;i<k+1;i++){
            currsum=currsum+fs[i];
        }
        maxsum=currsum;
        for(int i=k+1;i<fs.size();i++){
                currsum=currsum+fs[i]-fs[i-k-1];
                maxsum=max(currsum,maxsum);

        }
        return maxsum;
    }
};