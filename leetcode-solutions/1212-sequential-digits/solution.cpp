class Solution {
public:
vector<int>arr={12,23,34,45,56,67,78,89};
int sequence(){
    int n=0;
int num=3;    
        for(int i=7;i>0;i--){
            int count=num;
             while(count<10){
             arr.push_back(arr[n++]*10+count++);
             }
             num++;
             n++;
        }
        
    return 0;
}

    vector<int> sequentialDigits(int low, int high) {
        sequence();
        vector<int>result;
       for(auto a: arr){
        if(a<=high&&a>=low){
            result.push_back(a);
        }
       }
       return result;
    }
};
