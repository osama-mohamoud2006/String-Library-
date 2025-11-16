#pragma once
#include<iostream>
#include<cctype>
#include <string>
#include<vector>
using namespace std;

class clsString {

private:
    string _value ;
public:
    //no-args constructor 
    clsString() {
        this->_value = "";
    }

    //parametrized constructor 
    clsString(string value) {
        this->_value = value;
    }

    //property set
    void SetValue(string value) {
        this->_value = value;
    }

    //property get
    string GetValue(){return this->_value;}

// count word//
    static short CountWord(string value, string delmi=" ") {
        vector<string> word = SplitString(value); // cut the string into words
        return word.size();
    }

    short CountWord() {
        return CountWord(this->_value, " ");
    }


// The first letter of each word//
    static void PrintFirstLetter(string value , string delmi=" ") {
        vector<string> word = SplitString(value); // cut the string into words
        for (string &w :word) {
            //temp var
            string TempWord = w;
           cout<<TempWord.at(0)<<endl;
        }
    }
    void PrintFirstLetter() {
        PrintFirstLetter(this->_value, " ");
    }

   
private:
    static string UppercaseTheFirstLetter(string value) {
        string res="" ;
        res += toupper(value.at(0));
        for (int i=1; i<value.length(); i++) {

            res+=value[i];

        }
        return res;
    }
    static string LowercaseTheFirstLetter(string value) {
        string res="" ;
        res += tolower(value.at(0));
        for (int i=1; i<value.length(); i++) {

            res+=value[i];

        }
        return res;
    }
    // cut the full sentence into vector of words
   static vector<string>SplitString(string value, string delmi=" ") {
        short pos ;
        vector<string>FinalRes;
        string word ;
        while ((pos=value.find(delmi))!=string::npos) {
            word= value.substr(0,pos); // get the word
            if (word!="") FinalRes.push_back(word);// uppercase the current word

            value.erase(0,pos+delmi.length());
        }
        if (value!=" ") FinalRes.push_back(value);
        return FinalRes;
    }

   char InvertChar(char c) {
       return (isupper(c)) ? tolower(c) : toupper(c);
   }

public:

//upper case first letter of each word
    static string UppercaseFirstLetterOfEachWord(string value, string delmi=" ") {

     string finalRes="";
        vector<string> word = SplitString(value); // cut the string into words
        for (string &w :word) {
              //temp var
            string TempWord = w;
            TempWord=UppercaseTheFirstLetter(TempWord);
            finalRes+=TempWord+delmi;
        }
          return finalRes;
    }
    string UppercaseFirstLetterOfEachWord() {
        return UppercaseFirstLetterOfEachWord(this->_value);
    }


// lower the first letter  for each word//
    static string LowercaseFirstLetterOfEachWord(string value, string delmi=" ") {
        string finalRes="";
        vector<string> word = SplitString(value); // cut the string into words
        for (string &w :word) {
            //temp var
            string TempWord = w;
            TempWord=LowercaseTheFirstLetter(TempWord);
            finalRes+=TempWord+delmi;
        }
        return finalRes;
    }
 string LowercaseFirstLetterOfEachWord() {
        return LowercaseFirstLetterOfEachWord(this->_value);
    }


///Upper all chars of all words
 static string UpperAll(string value,string delmi=" ") {
     string res = "";
     for (int i = 0; i < value.length(); i++)res += toupper(value.at(i));

     return res;
 }
 string UpperAll() {
     return UpperAll(this->_value);
 }

///Lower all chars of all words
 static string LowerAll(string value, string delmi = " ") {
     string res = "";
     for (int i = 0; i < value.length(); i++)res += tolower(value.at(i));

     return res;
 }
 string LowerAll() {
     return LowerAll(this->_value);
 }

// invert char



};


