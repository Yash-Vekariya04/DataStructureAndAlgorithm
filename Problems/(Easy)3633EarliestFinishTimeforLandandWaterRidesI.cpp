class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        int n = landStartTime.size();
        int m = waterStartTime.size();

        long long minLandFinish = LLONG_MAX;
        for (int i = 0; i < n; ++i) {
            long long finish = (long long)landStartTime[i] + landDuration[i];
            minLandFinish = min(minLandFinish, finish);
        }

        long long option1 = LLONG_MAX;
        for (int j = 0; j < m; ++j) {
            long long startWater =
                max(minLandFinish, (long long)waterStartTime[j]);
            long long finishWater = startWater + waterDuration[j];
            option1 = min(option1, finishWater);
        }

        long long minWaterFinish = LLONG_MAX;
        for (int j = 0; j < m; ++j) {
            long long finish = (long long)waterStartTime[j] + waterDuration[j];
            minWaterFinish = min(minWaterFinish, finish);
        }

        long long option2 = LLONG_MAX;
        for (int i = 0; i < n; ++i) {
            long long startLand =
                max(minWaterFinish, (long long)landStartTime[i]);
            long long finishLand = startLand + landDuration[i];
            option2 = min(option2, finishLand);
        }

        // Return the absolute best time from both strategies
        return min(option1, option2);
    }
};
