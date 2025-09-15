// ------------------ MUHAMMAD ABDULLAH ------------------- //
 // ------------------ CMS ID: 503871 -------------------- //
  // ------------------ Class: BSCS 14B ----------------- //
   // ----- Course: Data Structures And Algorithms ----- //
    // ------------------ Lab No: 02 ------------------ //
     // ----------------- Task No: 8 ---------------- //


#include <iostream>
#include <string>
using namespace std;

int findSubstring(string text, string pattern) {
    if (pattern.length() == 0) {
        return 0;
    }
    
    if (text.length() == 0) {
        return -1;
    }
    
    for (int i = 0; i <= text.length() - pattern.length(); i++) {
        bool found = true;
        
        for (int j = 0; j < pattern.length(); j++) {
            if (text[i + j] != pattern[j]) {
                found = false;
                break;
            }
        }
        
        if (found) {
            return i;
        }
    }
    
    return -1;
}

void runTests() {
    cout << "=== Testing findSubstring function ===" << endl;
    
    string text1 = "hello world";
    string pattern1 = "hello";
    int result1 = findSubstring(text1, pattern1);
    cout << "Test 1 - Pattern at beginning: \"" << text1 << "\" contains \"" << pattern1 << "\" at index " << result1 << endl;
    
    string text2 = "goodbye world";
    string pattern2 = "world";
    int result2 = findSubstring(text2, pattern2);
    cout << "Test 2 - Pattern at end: \"" << text2 << "\" contains \"" << pattern2 << "\" at index " << result2 << endl;
    
    string text3 = "apple banana";
    string pattern3 = "orange";
    int result3 = findSubstring(text3, pattern3);
    cout << "Test 3 - Pattern not present: \"" << text3 << "\" contains \"" << pattern3 << "\"? " << (result3 == -1 ? "No (returned -1)" : "Yes") << endl;
    
    string text4 = "any text";
    string pattern4 = "";
    int result4 = findSubstring(text4, pattern4);
    cout << "Test 4 - Empty pattern: \"" << text4 << "\" with empty pattern returns " << result4 << endl;
    
    string text5 = "";
    string pattern5 = "test";
    int result5 = findSubstring(text5, pattern5);
    cout << "Bonus - Empty text: \"\" with pattern \"" << pattern5 << "\" returns " << result5 << endl;
}

int main() {
    runTests();
    return 0;
}