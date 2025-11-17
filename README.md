# clsString Class Documentation

## Overview

The `clsString` class is a utility class for string manipulation in C++. It provides a range of static and instance methods for operations such as word counting, case conversion, trimming, reversing, replacing words, and more. The class uses a default delimiter (space by default) for splitting strings, which can be customized statically.

Key features:
- Supports both instance-based and static methods for flexibility.
- Handles case-sensitive and case-insensitive operations where applicable.
- Includes functions for vowel counting, punctuation removal, and character inversion.

**Note:** This class is defined in a header file (e.g., `clsString.h`) and uses standard C++ libraries like `<iostream>`, `<cctype>`, `<string>`, and `<vector>`. It assumes the use of `namespace std;`.

## Usage

To use the class, include the header file in your C++ program:

```cpp
#include "clsString.h"  // Assuming the file name
```

Example instantiation and usage:

```cpp
int main() {
    clsString myString("Hello World!");
    cout << "Word count: " << myString.CountWord() << endl;  // Output: 2

    myString.UppercaseFirstLetterOfEachWord();
    cout << "Modified string: " << myString.GetValue() << endl;  // Output: "Hello World!"

    clsString::SetDelmi(",");  // Change delimiter to comma
    clsString staticString("apple,banana,cherry");
    cout << "Word count with custom delimiter: " << staticString.CountWord() << endl;  // Output: 3

    return 0;
}
```

## Members

### Private Members
- `string _value`: Stores the internal string value.
- `static string _delmi`: Static delimiter used for splitting strings (default: space `" "`).

### Public Properties (Setters and Getters)
- `void SetValue(string value)`: Sets the internal string value.
- `string GetValue()`: Returns the internal string value.
- `static void SetDelmi(string delmi)`: Sets the static delimiter for splitting operations.
- `static string GetTheCurrentDelmi()`: Returns the current static delimiter.

## Methods

Methods are categorized by functionality for clarity. Many methods have both static versions (operating on a provided string) and instance versions (operating on `_value`).

### Word Counting and Splitting
- `static short CountWord(string value)`: Counts the number of words in the string, split by the current delimiter.
- `short CountWord()`: Instance version of `CountWord(string value)`.
- `static vector<string> SplitString(string value)`: Splits the string into a vector of words using the current delimiter.
- `vector<string> SplitStringOfThisObject()`: Instance version of `SplitString(string value)`.

### First Letter Operations
- `static void PrintFirstLetter(string value)`: Prints the first letter of each word in the string.
- `void PrintFirstLetter()`: Instance version of `PrintFirstLetter(string value)`.
- `static string UppercaseTheFirstLetter(string value)`: Uppercases the first letter of the given string (not per word).
- `static string LowercaseTheFirstLetter(string value)`: Lowercases the first letter of the given string (not per word).

### Case Conversion (Per Word)
- `static string UppercaseFirstLetterOfEachWord(string value)`: Uppercases the first letter of each word.
- `string UppercaseFirstLetterOfEachWord()`: Instance version.
- `static string LowercaseFirstLetterOfEachWord(string value)`: Lowercases the first letter of each word.
- `string LowercaseFirstLetterOfEachWord()`: Instance version.

### Full Case Conversion
- `static string UpperAll(string value)`: Converts the entire string to uppercase.
- `string UpperAll()`: Instance version.
- `static string LowerAll(string value)`: Converts the entire string to lowercase.
- `string LowerAll()`: Instance version.
- `static string InvertStr(string value)`: Inverts the case of each character (upper to lower, lower to upper).
- `string InvertStr()`: Instance version.
- `static char InvertChar(char c)`: Inverts the case of a single character.

### Character Counting
- `static short CountCapitalLetters(string value)`: Counts uppercase letters.
- `short CountCapitalLetters()`: Instance version.
- `static short CountSmallLetters(string value)`: Counts lowercase letters.
- `short CountSmallLetters()`: Instance version.
- `static short GetLengthWithoutCountSpace(string value)`: Returns the length of the string excluding spaces.
- `short GetLengthWithoutCountSpace()`: Instance version.
- `static short CountCharInString(char c, string value, bool Match = false)`: Counts occurrences of a character. If `Match` is `true`, it's case-sensitive; otherwise, case-insensitive.
- `short CountCharInString(char c, bool Match = false)`: Instance version.
- `static short CountTheVowelCharsInString(string value)`: Counts vowel characters (a, e, i, o, u), case-insensitive.
- `short CountTheVowelCharsInString()`: Instance version.
- `static void PrintVowelsInString(string value)`: Prints all vowel characters in the string.
- `void PrintVowelsInString()`: Instance version.
- `static bool IsVowel(char c)`: Checks if a character is a vowel (case-insensitive).

### Trimming
- `static string TrimLeft(string value)`: Removes leading spaces.
- `string TrimLeft()`: Instance version.
- `static string TrimRight(string value)`: Removes trailing spaces.
- `string TrimRight()`: Instance version.
- `static string TrimString(string value, string option = "all")`: Trims spaces based on `option` ("all", "left", or "right").
- `string TrimString(string option = "all")`: Instance version.

### Joining and Reversing
- `static string JoinString(vector<string> VectorOfString)`: Joins a vector of strings into one string using the current delimiter.
- `static string ReverseString(string value)`: Reverses the order of words in the string.
- `string ReverseString()`: Instance version.

### Word Replacement
- `static string ReplaceWord(string FullLine, string WordToreplace, string TheNewWord, bool Match = true)`: Replaces occurrences of a word. If `Match` is `true`, it's case-sensitive; otherwise, case-insensitive.
- `string ReplaceWord(string WordToreplace, string TheNewWord, bool Match = true)`: Instance version.

### Punctuation Removal
- `static string RemovePunctuation(string value)`: Removes common punctuation characters from the string.
- `string RemovePunctuation()`: Instance version.
- `static bool IsPunct(char p)`: Checks if a character is punctuation (e.g., `(`, `)`, `'`, `.`, `-`, `:`, `?`, `,`, `;`, `!`, `"`).

## Notes
- The delimiter (`_delmi`) is static and shared across all instances. Changing it affects all subsequent operations.
- Some methods (e.g., trimming, replacing) modify or return new strings without altering the original unless assigned back.
- Error handling is minimal; ensure inputs are valid to avoid runtime issues like out-of-range access.
- The class does not handle multibyte characters or Unicode; it's designed for ASCII strings.

## License
This class is provided as-is. Feel free to modify and use it under an open-source license (e.g., MIT) if applicable to your project.

For contributions or issues, open a pull request or issue on the GitHub repository.
