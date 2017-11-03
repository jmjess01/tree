#include <iostream>
using namespace std;

void printStars(int blanks, int starsInLine);

int main()
{
    int noOfLines; //variable to store the number of lines
    int counter;
    int noOfBlanks;
        cout << "Enter the number of star lines (1 to 20)" << endl;
        cout << "to be printed :" << endl;
        cin >> noOfLines;
   
    while (noOfLines < 0 || noOfLines>20)
    {
        cout << "Someone's a bit ornery. Enter within the parameters, please." << endl;
        cin>> noOfLines;
    }
    
    cout << endl << endl;
    noOfBlanks = 30;
    
    for (counter = 1; counter <= noOfLines; counter++)
    {
        printStars(noOfBlanks, counter);
        noOfBlanks--;
    }
    
    return 0;
}

void printStars(int blanks, int starsInLine)
{
    int count;
    for (count = 1; count <= blanks; count++)
        cout << ' ';
    for (count = 1; count <= starsInLine; count ++)
        cout << " * ";
    cout << endl;
}


















