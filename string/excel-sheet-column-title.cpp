class Solution {
public:
    string convertToTitle(int columnNumber) {
        string Result="";
        while (columnNumber>0){
            columnNumber--;
            char ch='A'+(columnNumber%26);
            Result=ch+Result;
           columnNumber=columnNumber/26;
        }
        return Result;  
    }
};