class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {

         int numbersOfMonsters = (int)dist.size();

    vector<int> arrivalTime(numbersOfMonsters);

    for (size_t i = 0; i < numbersOfMonsters; i++)
    {
        if (dist[i] % speed[i] == 0)
            arrivalTime[i] = dist[i] / speed[i];

        else
            arrivalTime[i] = dist[i] / speed[i] + 1;
    }

    sort(arrivalTime.begin(), arrivalTime.end());

    int killedNumbers = 0;

    for (int i = 0; i < numbersOfMonsters && i < arrivalTime[i]; i++)
        killedNumbers++;

    return killedNumbers;
    }
};