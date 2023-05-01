class Solution {
public:
    double average(vector<int>& salary) {
        int max = 0;
        int min = 0;
        if(salary[0] > salary[1]){
            max = salary[0];
            min = salary[1];
        }
        else{
            max = salary[1];
            min = salary[0];
        }
        double sum = 0;
        for(int i = 2 ; i < salary.size() ; ++i){
            if(max < salary[i]){
                sum += max;
                max = salary[i];
            }
            else if(min > salary[i]){
                sum += min;
                min = salary[i];
            }
            else{
                sum += salary[i];
            }
        }
        if(salary.size() > 3){
            return sum/(salary.size()-2);
        }
        else{
            return sum;
        }
    }
};
