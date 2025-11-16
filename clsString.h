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
    clsString() {
        this->_value = "";
    }

    clsString(string value) {
        this->_value = value;
    }
    void SetValue(string value) {
        this->_value = value;
    }

    string GetValue(){return this->_value;}

// count word//
    static short CountWord(string value, string delmi=" ") {
       short countOfWords=0;
        short pos ;
        string Word;
        while ((pos=value.find(delmi))!=string::npos) {

            Word=value.substr(0,pos);
            if (Word!="") countOfWords++;
            value.erase(0,pos+delmi.length());
        }
        if (value!="") countOfWords++;

        return countOfWords;
    }

    short CountWord() {
        return CountWord(this->_value, " ");
    }

    // The first letter of each word//
    static void PrintFirstLetter(string value , string delmi=" ") {
        short pos =0;
        string word ;
        while ((pos=value.find(delmi)) !=string::npos) {
            word = value.substr(0,pos); // it is word if you got space
            if (word!=" ") cout<<word.at(0)<<endl;
            value.erase(0,pos+delmi.length());
        }
        // the last word
        if (value!="") cout<<value.at(0)<<endl;
    }
    void PrintFirstLetter() {
        PrintFirstLetter(this->_value, " ");
    }

    // uppercase the first letter//
private:
    static string UppercaseTheFirstLetter(string value) {
        string res="" ;
        res += toupper(value.at(0));
        for (int i=1; i<value.length(); i++) {

            res+=value[i];

        }
        return res;
    }

public:

    static string UppercaseFirstLetterOfEachWord(string value, string delmi=" ") {

        short pos ;

        string FinalRes="";
        string word ;
        while ((pos=value.find(delmi))!=string::npos) {
            word= value.substr(0,pos); // get the word
            if (word!="") FinalRes+=UppercaseTheFirstLetter(word)+delmi; // uppercase the current word

            value.erase(0,pos+delmi.length());
        }
        if (value!=" ") FinalRes+=UppercaseTheFirstLetter(value);
        return FinalRes;
    }

    string UppercaseFirstLetterOfEachWord() {
        return UppercaseFirstLetterOfEachWord(this->_value);
    }


};


