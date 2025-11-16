#include <iostream>
#include "clsString.h"
using namespace std;

int main(){

    clsString String;
    String.SetValue("osama mohamoud");
    // cout<< String.CountWord()<<endl;
    // String.PrintFirstLetter();
    // clsString::PrintFirstLetter("kaka lala tka clk");

    cout<<String.UppercaseFirstLetterOfEachWord("osama mohamoud elsherif")<<endl;
    cout<<clsString::UppercaseFirstLetterOfEachWord("song is good!")<<endl;




}