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

    //check if a no. is even or odd
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if(num % 2 == 0){
        cout << "the number is even";
    }
    else{
        cout << "the number is odd";
    }

    //logical operators
    int x = 200, y = 50, z = 100;
    if(x > y && y > z){
    cout << "Hello \n";
    }

    if(z > y && z < x){
    cout << "C++ \n";
    }
    if((y+200) < x && (y+150) < z){
    cout << "Hello C++ \n";
    }

    //Write a C++ program to get a number from the user and print whether it's positive, negative or zero.
    int x;
    cout << "enter a number:";
    cin >> x;
    
    if(x >= 1){
        cout << x << " is positive";
    }
    else if(x == 0){
        cout << "zero";
    }
    else{
        cout << x << " is negative";
    }

    //Write a C++ program that takes a year from the user and print whether that year is a leap year or not.
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }


    return 0;

}