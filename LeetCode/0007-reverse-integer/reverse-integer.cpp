class Solution {
public:
    int reverse(int x) {
    string str = to_string(y);

    if(str[0]=='-'){
        str = str.substr(1);
        std::reverse(str.begin(), str.end());
        str = '-' + str;
    }else{
        std::reverse(str.begin(), str.end());
    }
    long long num1 = stoll(str);
    if(num1>=INT_MIN && num1<=INT_MAX) return stoi(str);
    else return 0;
    }
    int y = x;
};
