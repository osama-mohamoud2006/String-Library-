//#include <iostream>
//#include "clsString.h"
//#include <vector>
//using namespace std;
//
//int main() {
//
//    clsString String;
//    String.SetValue("alex smith");
//
//    cout << "============================================================\n";
//
//    // 1. Count Words
//    cout << "The count of words in static is: \" " <<String.GetValue()<<"\" " << clsString::CountWord("hello world") << endl;
//    cout << "The count of words in obj is:  \" " << String.GetValue() << "\" " << String.CountWord() << endl;
//    cout << "------------------------------------------------------------\n";
//
//    // 2. Print First Letters
//    cout << "The first letters in static are:\n";
//    clsString::PrintFirstLetter("kate luna tom claire");
//    cout << "\nThe first letters in obj are:\n";
//    String.PrintFirstLetter();
//    cout << "------------------------------------------------------------\n";
//
//    // 3. Uppercase First Letter of Each Word
//    cout << "Uppercase first letters in static: "
//        << clsString::UppercaseFirstLetterOfEachWord("music is fun") << endl;
//    cout << "Uppercase first letters in obj: "
//        << String.UppercaseFirstLetterOfEachWord() << endl;
//    cout << "------------------------------------------------------------\n";
//
//    // 4. Lowercase First Letter of Each Word
//    cout << "Lowercase first letters in static: "
//        << clsString::LowercaseFirstLetterOfEachWord("Life Is Great") << endl;
//    cout << "Lowercase first letters in obj: "
//        << String.LowercaseFirstLetterOfEachWord() << endl;
//    cout << "------------------------------------------------------------\n";
//
//    // 5. Upper All Letters
//    cout << "Upper all in static: " << clsString::UpperAll("hello friend") << endl;
//    cout << "Upper all in obj: " << String.UpperAll() << endl;
//    cout << "------------------------------------------------------------\n";
//
//    // 6. Invert Case
//    cout << "Invert case in static: " << clsString::InvertStr("John SMITH Lee") << endl;
//    cout << "Invert case in obj: " << String.InvertStr() << endl;
//    cout << "------------------------------------------------------------\n";
//
//    // 7. Count Capital Letters
//    cout << "Count capital letters in static: " << clsString::CountCapitalLetters("Sarah Johnson") << endl;
//    cout << "Count capital letters in obj: " << String.CountCapitalLetters() << endl;
//    cout << "------------------------------------------------------------\n";
//
//    // 8. Count Small Letters
//    cout << "Count small letters in static: " << clsString::CountSmallLetters("Sarah Johnson") << endl;
//    cout << "Count small letters in obj: " << String.CountSmallLetters() << endl;
//    cout << "------------------------------------------------------------\n";
//
//    // 9. Length Without Spaces
//    cout << "Length without spaces in static: " << clsString::GetLengthWithoutCountSpace("Sarah Johnson") << endl;
//    cout << "Length without spaces in obj: " << String.GetLengthWithoutCountSpace() << endl;
//    cout << "------------------------------------------------------------\n";
//
//    // 10. Count Specific Character
//    cout << "Count 'a' (case insensitive) in static: "
//        << clsString::CountCharInString('a', "Sarah Johnson Learning Code", true) << endl;
//    cout << "Count 'a' in obj: " << String.CountCharInString('a') << endl;
//    cout << "------------------------------------------------------------\n";
//
//    // 11. Check Vowel
//    cout << "Is 'e' a vowel (static): " << (clsString::IsVowel('e') ? "Yes" : "No") << endl;
//    cout << "Is 'e' a vowel (obj): " << (String.IsVowel('e') ? "Yes" : "No") << endl;
//    cout << "------------------------------------------------------------\n";
//
//    // 12. Trim Functions
//    cout << "Trim right (static): " << clsString::TrimRight("coding is fun   ") << endl;
//    cout << "Trim right: " << clsString::TrimString("   coding is fun   ", "right") << endl;
//    cout << "Trim left: " << clsString::TrimString("   coding is fun   ", "left") << endl;
//    cout << "Trim all: " << clsString::TrimString("   coding is fun   ", "all") << endl;
//    cout << "------------------------------------------------------------\n";
//
//    // 13. Join String
//    vector<string> words = { "luna", "tom", "emma", "jack" };
//    cout << "Join vector (static): " << clsString::JoinString(words) << endl;
//    cout << "------------------------------------------------------------\n";
//
//    // 14. Split String of Object
//    cout << "Split words from object:\n";
//    vector<string> splitted = String.SplitStringOfThisObject();
//    for (const string& word : splitted)
//        cout << word << endl;
//    cout << "------------------------------------------------------------\n";
//
//    // 15. Replace Word
//    cout << "Replace 'alex' with 'sara' in obj: " << String.ReplaceWord("alex", "sara") << endl;
//    cout << "Replace 'beautiful' with 'amazing' (case sensitive): "
//        << clsString::ReplaceWord("This city is beautiful, very beautiful", "beautiful", "amazing", false) << endl;
//    cout << "============================================================\n";
//
//    //16.Remove Punctuation
//    cout << "Remove the Punctuation of static function: " << clsString::RemovePunctuation("Hi! Iam Alex ,and what about you?") << endl;
//    cout << "Remove the Punctuation of obj: " << String.RemovePunctuation() << endl;
//    cout << "============================================================\n";
//
//    return 0;
//}

#include <iostream>
#include <vector>
#include "clsString.h"
using namespace std;

int main() {
    clsString String;
    String.SetValue("alex smith");

    cout << "============================================================\n";

    // 1. Count Words
    cout << "Count of words in static: " << clsString::CountWord("hello world") << endl;
    cout << "Count of words in obj: " << String.CountWord() << endl;
    cout << "------------------------------------------------------------\n";

    // 2. Print First Letters
    cout << "First letters in static:\n";
    clsString::PrintFirstLetter("kate luna tom claire");
    cout << "\nFirst letters in obj:\n";
    String.PrintFirstLetter();
    cout << "------------------------------------------------------------\n";

    // 3. Uppercase First Letter of Each Word
    cout << "Uppercase first letters in static: "
        << clsString::UppercaseFirstLetterOfEachWord("music is fun") << endl;
    cout << "Uppercase first letters in obj: "
        << String.UppercaseFirstLetterOfEachWord() << endl;
    cout << "------------------------------------------------------------\n";

    // 4. Lowercase First Letter of Each Word
    cout << "Lowercase first letters in static: "
        << clsString::LowercaseFirstLetterOfEachWord("Life Is Great") << endl;
    cout << "Lowercase first letters in obj: "
        << String.LowercaseFirstLetterOfEachWord() << endl;
    cout << "------------------------------------------------------------\n";

    // 5. Upper All Letters
    cout << "Upper all in static: " << clsString::UpperAll("hello friend") << endl;
    cout << "Upper all in obj: " << String.UpperAll() << endl;
    cout << "------------------------------------------------------------\n";

    // 6. Invert Case
    cout << "Invert case in static: " << clsString::InvertStr("John SMITH Lee") << endl;
    cout << "Invert case in obj: " << String.InvertStr() << endl;
    cout << "------------------------------------------------------------\n";

    // 7. Count Capital Letters
    cout << "Count capital letters in static: " << clsString::CountCapitalLetters("Sarah Johnson") << endl;
    cout << "Count capital letters in obj: " << String.CountCapitalLetters() << endl;
    cout << "------------------------------------------------------------\n";

    // 8. Count Small Letters
    cout << "Count small letters in static: " << clsString::CountSmallLetters("Sarah Johnson") << endl;
    cout << "Count small letters in obj: " << String.CountSmallLetters() << endl;
    cout << "------------------------------------------------------------\n";

    // 9. Length Without Spaces
    cout << "Length without spaces in static: " << clsString::GetLengthWithoutCountSpace("Sarah Johnson") << endl;
    cout << "Length without spaces in obj: " << String.GetLengthWithoutCountSpace() << endl;
    cout << "------------------------------------------------------------\n";

    // 10. Count Specific Character
    cout << "Count 'a' (case insensitive) in static: "
        << clsString::CountCharInString('a', "Sarah Johnson Learning Code", false) << endl;
    cout << "Count 'a' (case insensitive) in obj: " << String.CountCharInString('a', false) << endl;
    cout << "------------------------------------------------------------\n";

    // 11. Check Vowel
    cout << "Is 'e' a vowel (static): " << (clsString::IsVowel('e') ? "Yes" : "No") << endl;
    cout << "Is 'e' a vowel (obj): " << (String.IsVowel('e') ? "Yes" : "No") << endl;
    cout << "------------------------------------------------------------\n";

    // 12. Count Vowels
    cout << "Count vowels in static: " << clsString::CountTheVowelCharsInString("Sarah Johnson Learning Code") << endl;
    cout << "Count vowels in obj: " << String.CountTheVowelCharsInString() << endl;
    cout << "------------------------------------------------------------\n";

    // 13. Print Vowels
    cout << "Print vowels in static: ";
    clsString::PrintVowelsInString("Sarah Johnson Learning Code");
    cout << "\nPrint vowels in obj: ";
    String.PrintVowelsInString();
    cout << "\n------------------------------------------------------------\n";

    // 14. Trim Functions
    cout << "Trim right in static: " << clsString::TrimRight("coding is fun   ") << endl;
    cout << "Trim right: " << clsString::TrimString("   coding is fun   ", "right") << endl;
    cout << "Trim left: " << clsString::TrimString("   coding is fun   ", "left") << endl;
    cout << "Trim all: " << clsString::TrimString("   coding is fun   ", "all") << endl;
    cout << "------------------------------------------------------------\n";

    // 15. Join String
    vector<string> words = { "luna", "tom", "emma", "jack" };
    cout << "Join vector (static): " << clsString::JoinString(words) << endl;
    cout << "------------------------------------------------------------\n";

    // 16. Reverse String
    cout << "Reverse words in static: " << clsString::ReverseString("music is fun") << endl;
    cout << "Reverse words in obj: " << String.ReverseString() << endl;
    cout << "------------------------------------------------------------\n";

    // 17. Split String of Object
    cout << "Split words from object:\n";
    vector<string> splitted = String.SplitStringOfThisObject();
    for (const string& word : splitted) cout << word << endl;
    cout << "------------------------------------------------------------\n";

    // 18. Replace Word
    cout << "Replace 'alex' with 'sara' in obj (case sensitive): " << String.ReplaceWord("alex", "sara", true) << endl;
    cout << "Replace 'beautiful' with 'amazing' (ignore case): "
        << clsString::ReplaceWord("This city is beautiful, very Beautiful", "beautiful", "amazing", false) << endl;
    cout << "============================================================\n";

    return 0;
}