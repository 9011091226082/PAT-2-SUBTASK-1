#include<iostream>
#include <string>
#include<unordered_map>

using namespace std

int main() {
    unordered_map<char,string>morseCodeMap = {
        {'A',".-},{'B',"-..."},{'C,"-.-.""},{'D,"-..'},{'E,".'},{'F,"...'},{'G".'},{'H,"....'},{'I,"..'},{'J',"."},{'K',"."},
        {'L',"..."},{'M',''''},{'N'"."},{'O',''''},{'P',".--."},{'Q',"--.-"},{'R',".-."},{'S',"..."},{'T',"-"},{'U',"..-"}
        {'V',"...-"},{'W',".--"},{'X',"-..-"},{'Y',"-.--"},{'Z',"--.."}

    };

    string message;
    cout << "Enter a message in English(A-Z characters only);"
    cin >> message;

    string fullMorseCodeMessage = '''';
    for(char c:message){
        c = toupper(c);
        if(morseCodeMap.count(c)){
            cout << c>>":"<< morseCodeMap[c]<<end1;
            fullMorseCodeMessage += MorseCodeMap[c]+" ";
        }else{
            cerr<<"Invalid character:"<<c<<end1;
            return 1;
        }