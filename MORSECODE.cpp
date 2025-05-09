#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype> // For toupper()



int main() {
    // Morse code mapping for English letters
    unordered_map<char, string> morseCodeMap = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."},
        {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
        {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."},
        {'S', "..."}, {'T', "-"}, {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
        {'Y', "-.--"}, {'Z', "--.."}
    };

    
    cout << "Enter a message in English (A-Z characters only): ";
    getline(cin, message); // Allow multi-word input

    string fullMorseCodeMessage = "";
    for (char c : message) {
        c = toupper(c); // Convert to uppercase
        if (morseCodeMap.count(c)) {
            cout << c << ": " << morseCodeMap[c] << endl;
            fullMorseCodeMessage += morseCodeMap[c] + " ";
        } else if (c != ' ') {
            cerr << "Invalid character: " << c << endl;
            return 1;
        }
    }

    cout << "\nFull Morse Code Message: " << fullMorseCodeMessage << endl;
    return 0;
}
