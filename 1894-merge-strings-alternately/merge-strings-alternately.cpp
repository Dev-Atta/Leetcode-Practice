class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    int min_size = min(word1.size(), word2.size());
    string result = "";
    int i = 0;
    while (i < min_size) {
        result += word1[i];   
        result += word2[i];
        i++;
    }

    // For leftovers
    while(i < word1.size()){
        result += word1[i];
        i++;
    }
    
    while(i < word2.size()){
        result += word2[i];
        i++;
    }
    return result;  

}
};