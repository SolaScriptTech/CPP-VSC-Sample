#include <iostream>
#include <string>

using namespace std;

int main()
{
   string msg;
   
    cout << "Enter a message: ";
    //cin >> msg; // This will only read until the first space
    getline(cin, msg);
   
   for(int i=0; i<msg.length();i++)
    cout << msg[i];
   
   return 0;
}