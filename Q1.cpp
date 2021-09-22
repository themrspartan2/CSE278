// Nathan Farrar
// 9/16/2021
// CSE 278 A

#include <iostream>
#include <array>
using namespace std;

int letterCount(string &inputRef, bool toUpper, bool toLower) {
    int count = 0;
    for (int i = 0; i < inputRef.size(); i++) {
        if (inputRef[i] >= 65 && inputRef[i] <= 90) {
            if(toLower) {
                inputRef[i] += 32;
            }
            count++;
        } 
        else if(inputRef[i] >= 97 && inputRef[i] <= 122) {
            if(toUpper) {
                inputRef[i] -= 32;
            }
            count++;
        }
    }
    return count;
}

int digitCount(string input) {
    int count = 0;
    for (char c : input) {
        if (c >= '0' && c <= '9') {
            count++;
        }
    }
    return count;
}

int numberCount(string input) {
    int count = 0;
    bool previous = false;
    for (char c : input) {
        if (c >= '0' && c <= '9') {
            if (previous == false) {
                count++;
            }
            previous = true;
        }
        else {
            previous = false;
        }
    }
    return count;
}

bool findWord(string input, string word) {
    if(input.size() < word.size()) { //sanity check
        return false;
    }
    
    for (int i = 0; i <= input.size() - word.size(); i++) { //loop through the word
        if (input.substr(0 + i, word.size()) == word) { //check substrings for a match
            return true;
        }
    }
    
    return false; //if not found
}

void allInOne(string input, int * r) {
    //letter count
    int count = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] >= 65 && input[i] <= 90) {
            count++;
        } 
        else if(input[i] >= 97 && input[i] <= 122) {
            count++;
        }
    }
    r[0] = count;
    count = 0;

    //digit count
    for (char c : input) {
        if (c >= '0' && c <= '9') {
            count++;
        }
    }
    r[1] = count;
    count = 0;

    //number count
    bool previous = false;
    for (char c : input) {
        if (c >= '0' && c <= '9') {
            if (previous == false) {
                count++;
            }
            previous = true;
        }
        else {
            previous = false;
        }
    }
    r[2] = count;

}

int main() {
    cout << boolalpha;

    cout << "Enter a string: ";
    string input;
    cin >> input;
    string &inputRef = input;
    
    // booleans are upper and lower
    // if true will convert lower to lower and vice versa
    cout << "a) Number of letters: " << letterCount(inputRef, false, false) << endl;
    cout << "b) Number of digits: " << digitCount(input) << endl;
    cout << "c) Number of numbers: " << numberCount(input) << endl;
    cout << "d) Has \"miami\": " << findWord(input, "miami") << endl;
    cout << "e) Modified input: " << input << endl;
    int result[3];
    int * r = result;
    cout << "f) All in one: ";
    allInOne(input, r);
    for(int i = 0; i < 3; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
