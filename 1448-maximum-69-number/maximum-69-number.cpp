class Solution {
public:
    int maximum69Number (int num) {
        string result=to_string(num);

        for(auto &let:result){
            if(let=='6'){
                let='9';
                break;
            }

        }
        return stoi(result);
        
    }
};