#include <vector>
#include <map>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int size = nums.size();
    map<int,int> m;
    for(int i = 0;i<size;++i){
        m[nums[i]]++; 
    }
    int cnt = 0;
    for(auto iter = m.begin(); iter != m.end(); iter++ ){
        if(cnt == size/2)
            break;
        if(iter->second)
            cnt++;
    }
    answer =cnt;
    return answer;
}