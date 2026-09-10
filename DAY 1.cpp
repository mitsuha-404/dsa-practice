// to run a prg, comment out the other ones, save it and then run 

#include <iostream>
using namespace std;

int main(){

    // input: side of a square; output: area of the square

    int side;
    cin >> side;
    cout << "Area:" << side * side << endl;

    // enter cost of pencil, pen and eraser from user. output total cost to user as bill

    float pencil, pen, eraser;
    cin >> pencil;
    cin >> pen;
    cin >> eraser;
    float totalcost = pencil + pen + eraser;
    cout << "Total = " << totalcost << endl;

    return 0;

}