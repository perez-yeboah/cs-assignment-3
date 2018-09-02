#include <iostream>

using namespace std;

int main() {
    int mrk;
    string grd;

    cout << "Enter your mark" << endl;
    cin >> mrk;

    if(mark >= 80 && mrk <= 100)
    {
        grd = "A";
    } else if(mark >= 75 && mrk <= 79)
    {
        grd = "B+";
    } else if(mark >= 70 && mrk <= 74)
    {
        grd = "B";
    } else if(mark >= 65 && mrk <= 69)
    {
        grd = "C+";
    } else if(mark >= 60 && mrk <= 64)
    {
        grd = "C";
    } else if(mark >= 55 && mrk <= 59)
    {
        grd = "D+";
    } else if(mark >= 50 && mrk <= 54)
    {
        grd = "D";
    } else if(mark >= 45 && mrk <= 49)
    {
        grd = "E";
    } else if(mark <= 44 && mrk >= 0)
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
