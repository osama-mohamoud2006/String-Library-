#include <iostream>
#include "clsString.h"
using namespace std;

int main(){

    clsString String;
    String.SetValue("osama mohamoud");
    cout<< String.CountWord()<<endl;

    String.PrintFirstLetter(String.GetValue());

}