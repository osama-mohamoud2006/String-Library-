#include <iostream>
#include "clsString.h"
using namespace std;

int main() {

    clsString String;
    String.SetValue("osama mohamoud");
    //cout << String.CountWord() << endl;
    // String.PrintFirstLetter();
    // clsString::PrintFirstLetter("kaka lala tka clk");

    // cout<<String.UppercaseFirstLetterOfEachWord()<<endl;
     //cout<<clsString::UppercaseFirstLetterOfEachWord("song is good!")<<endl;
    //
   // cout<<clsString::LowercaseFirstLetterOfEachWord("Life Is About:")<<endl;
    // cout<<String.LowercaseFirstLetterOfEachWord()<<endl;

//   cout<< clsString::UpperAll("osama is haha")<<endl;

   // cout << clsString::InvertStr("osama MOHAMOUD ELsherif") << endl;
  //  cout << String.InvertStr() << endl;

    //cout<< clsString::CountCapitalLetters("Mohammed Abu-Hadhoud")<<endl;
    //cout << String.CountCapitalLetters() << endl;
   
    //cout << clsString::CountSmallLetters("Mohammed Abu-Hadhoud") << endl;
   // cout << String.CountSmallLetters() << endl;
   // cout << clsString::GetLengthWithoutCountSpace("Mohammed Abu-Hadhoud") << endl;
    //cout << String.GetLengthWithoutCountSpace() << endl;

  //  cout << clsString::CountCharInString('m', "Mohammed Abu-Hadhoud Programming Advices", true) << endl; //count the same char 
  //cout<< clsString::CountCharInString('m', "Mohammed Abu-Hadhoud Programming Advices")<<endl;

  //cout << String.CountCharInString('o') << endl;

    //cout << clsString::IsVowel('f') << endl;

  /*  cout << clsString::CountTheVowelCharsInString("Mohammed Abu-Hadhoud Programming Advices") << endl;
    cout << String.CountTheVowelCharsInString() << endl;*/

  /*  clsString::PrintVowelsInString("Mohammed Abu-Hadhoud Programming Advices");
        cout<<endl;
    String.PrintVowelsInString();*/

   /* vector<string> splited = String.SplitString();
    for (string i : splited) cout << i << endl;*/

    //cout<< clsString::TrimRight("life is shity!            ")<<endl;
    //cout << clsString::TrimString("   life is shity     ", "right")<<endl;
    //cout << clsString::TrimString("   life is shity     ", "left")<<endl;
    //cout << clsString::TrimString("   life is shity     ", "all") << endl;

   /* vector<string> words{ "osama", "mohamoud","ahmed","mohammed"};*/
 /*   cout << clsString::JoinString(words) << endl;*/

 /* words=String.SplitStringOfThisObject();
  for (string i : words) cout << i << endl;*/

   // cout<<clsString::ReplaceWord("Ahmed is good and salma is good also","good","bad") << endl;
   // cout << String.ReplaceWord("osama", "salma") << endl;

    cout << clsString::ReplaceWord("Welcome to Egypt , Egypt is beautiful country ","Egypt","Usa",false) << endl;

   
}