class Solution {
public:
    int minimumPushes(string word) {
        int arr[26];
        for (auto i: word){
            arr[i-'a']++;
        }
        sort(arr, arr + 26, greater<int>());
        int total=0;
        for (int i=0; i<26; i++){
            total+= (arr[i]* ((i/8)+1));
        }return total;
    }
};