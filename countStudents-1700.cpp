class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int ans = 0;
        int loop = 0;
        while(students != sandwiches){
            if(students[0] == sandwiches[0]){
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                loop = 0;
            }
            else{
                int tmp = students[0];
                students.erase(students.begin());
                students.push_back(tmp);
                loop++;
            }
            if(loop == students.size()){
                ans = students.size();
                break;
            }
        }
        return ans;
    }
};
