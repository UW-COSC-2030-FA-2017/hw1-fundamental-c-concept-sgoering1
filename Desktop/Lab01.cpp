#include <iostream>
#include <fstream>
using std::ifstream;
#include <string>
using std::string;
using namespace std;

int main()
{
    //Declare Variables, string object, and in stream object
    double first, last, sec, seclast, count;
    string filename;
    ifstream inFile;
    //Prompt user and get user input
    cout << "Enter in a file" << endl;
    cin >> filename;
    inFile.open(filename);
    if(inFile.is_open()){
        while(!inFile.eof()){
            //If at the start of the file set all variables
            //to the first number, this takes care of setting the
            //the variable "first" to the first number
            if(count == 0){
                inFile >> first;
                sec = first;
                seclast= first;
                last = first;
            }
            //If at the second position in the file set all variables
            //but the variable first to second
            if(count == 1){
                inFile >> sec;
                seclast = sec;
                last = sec;
            }
            //If not at position two in the file set the second to last and the
            //last to the current position, when at the end of the file the last will
            //be set to last and the second to last to the second to last.
            if(count > 1){
                seclast = last;
                inFile >> last;
            }
          count++;
        }
        inFile.close();
    }else{
            cout << "Could not open file"; //if the file could not be opened then close program
            return 0;
        }
    //Output the resulting variables
    cout << "The first number is: " << first << "\nThe second is: " <<
        sec << "\nThe second to last is: " << seclast << "\nThe last is: " <<
        last << "\nThe number of numbers is: " << count;
    //Repeat the process for the second file
    cout << "Enter in a file" << endl;
    cin >> filename;
    inFile.open(filename);
    if(inFile.is_open()){
        while(!inFile.eof()){
            if(count == 0){
                inFile >> first;
                sec = first;
                seclast= first;
                last = first;
            }
            if(count == 1){
                inFile >> sec;
                seclast = sec;
                last = sec;
            }
            if(count > 1){
                seclast = last;
                inFile >> last;
            }
          count++;
        }
        inFile.close();
    }else{
        cout << "Could not open file";
        return 0;
    }
    cout << "The first number is: " << first << "\nThe second is: " <<
        sec << "\nThe second to last is: " << seclast << "\nThe last is: " <<
        last << "\nThe number of numbers is: " << count;
    return 0;
}

