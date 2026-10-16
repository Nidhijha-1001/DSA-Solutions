class Solution {
public:
    int secondHighest(string s) {
        int largest = -1;
        int slargest = -1;
     for(int i=0; i<s.length(); i++){
        if(isdigit(s[i])){
            int num = s[i] - '0';
               if(num > largest){
               slargest = largest;
               largest = num;
         }
         else if(num > slargest && num!= largest){
            slargest = num;
         }
      }
    }
      return slargest;
    }
};