/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    
    fstream dataFile("string_data.txt", std::fstream::in);
    
    int total=0;
    string dataline;
    while(!dataFile.eof()) {
        getline(dataFile, dataline);
        // cout << dataline << endl;
        //TODO: output the sum of individual digit of dataline
        // for example, 1943 shall output as 3491, 17
        // for example, 31 shall output as 13, 4
        int lineTotal=0;
        for(int pos=0;pos<dataline.length();pos++) {
            if (dataline[pos] == ' ') {
                continue; // skip spaces
            }
            int iDigit = (dataline[pos]-'0');
            cout << iDigit;
            lineTotal+=iDigit;
        }
        cout << ", " << lineTotal;
        cout << endl;
    }
   cout << "End of Program!\n";

    return 0;
}