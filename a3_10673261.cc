#include <iostream>

using namespace std;

int main() {
    int mrk;
    string grd;

    cout << "Enter your mark" << endl;
    cin >> mrk;

    if(mak >= 80 && mrk <= 100)
    {
        grd = "A";
    } else if(mrk >= 75 && mrk <= 79)
    {
        grd = "B+";
    } else if(mrk >= 70 && mrk <= 74)
    {
        grd = "B";
    } else if(mrk >= 65 && mrk <= 69)
    {
        grd = "C+";
    } else if(mrk >= 60 && mrk <= 64)
    {
        grd = "C";
    } else if(mrk >= 55 && mrk <= 59)
    {
        grd = "D+";
    } else if(mrk >= 50 && mrk <= 54)
    {
        grd = "D";
    } else if(mrk >= 45 && mrk <= 49)
    {
        grd = "E";
    } else if(mrk <= 44 && mrk >= 0)
    {
        grd = "F";
    } else
    {
        cout << "Enter a valid grade " << endl;
        break;
    }

    cout << "Your Grade Is " << grd << endl;
    return 0;
}
