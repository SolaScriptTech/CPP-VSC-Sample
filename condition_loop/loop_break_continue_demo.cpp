#include <iostream>

using namespace std;

int main()
{
    
    //int count = 5;
    
    /*
    while(count > 0) {
        if (count == 2)
            cout << "Count is really 2" << endl;
        else
            cout << "Count is " << count << endl;
        count--;
    }*/
    

    int count = 1;
    
    do {
        if (count == 2) {
            cout << "Count is really 2" << endl;
            continue;
        } else
            cout << "Count is " << count << endl;
        cout << "yet another loop" << endl;
        //count++;
    } while(count++ <= 5);

    
    /*
    for(int count=5; count>0; count--){
        if (count == 2) {
            cout << "Count is really 2" << endl;
            
        } else
            cout << "Count is " << count << endl;
        continue;
        cout << "yet another loop" << endl;
    }*/
    
    cout << "We are out of loop!" << endl;

   return 0;
}