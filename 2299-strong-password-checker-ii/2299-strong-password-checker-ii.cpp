class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        bool lower=false;
        bool upper=false;
        bool digit=false;
        bool special=false;
        if (password.size()<8){
            return false;
        }
        for (int i =0; i<password.size(); i++){
            if ((password[i]== password[i+1]) || password[i]== '\0'){
                return false;
            }
            if (islower(password[i])){
                lower=true;
            }
            else if (isupper(password[i])){
                upper= true;
            }
            else if (isdigit(password[i])){
                digit=true;
            }
            else {
                special=true;
            }
        }return lower && upper && digit && special;
    }
};