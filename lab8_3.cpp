/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

#include <iostream>
using namespace std;

int main (){
    int age,tall,bounty;
    string character;
    cout << "Enter your age: ";
    cin >> age;

if(age<=25){
    cout << "Enter your height: ";
    cin >> tall;
    if(tall<100){
        character = "Chopper";
    }
    else if (tall<180){
        character = "Usopp";
    }
    else 
    {
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty>1100000000){
            character = "Zoro";
        }
        else {
            character = "Sanji";
        }
    }
}
    else if (age<=60)
    {
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty>500000000){
            character = "Jinbe";
        }
        else {
            character = "Franky";
        }
    }
else
{
    character="Brook";
}
cout << "Your character = " << character;

}