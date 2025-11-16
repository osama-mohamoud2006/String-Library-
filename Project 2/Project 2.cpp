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
    // cout<<clsString::UppercaseFirstLetterOfEachWord("song is good!")<<endl;
    //
    //cout<<clsString::LowercaseFirstLetterOfEachWord("Life Is About:")<<endl;
    // cout<<String.LowercaseFirstLetterOfEachWord()<<endl;

//   cout<< clsString::UpperAll("osama is haha")<<endl;

   // cout << clsString::InvertStr("osama MOHAMOUD ELsherif") << endl;
  //  cout << String.InvertStr() << endl;

    cout<< clsString::CapitalLettersCount("alAlal")<<endl;

}