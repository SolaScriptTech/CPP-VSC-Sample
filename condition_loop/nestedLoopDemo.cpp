#include <iostream>
#include <string>

using namespace std;

int main()
{

    int count = 0;
    /*
    int outer = 1;
    
    while(outer <= 5){
        cout << "outer count is " << outer << endl;
        int inner = 6;
    
        while(inner > 0) {
            if (inner == 2)
                cout << "inner count is really 2" << endl;
            else
                cout << "inner count is " << inner << endl;
            count++;
            inner--;
        }
        outer++;
    }*/
    
    for(int outer=1; outer <= 5; outer++){
        cout << "outer count is " << outer << endl;
        for(int inner=5; inner>0; inner--){
            count++;            
            if (inner == 2) {
                cout << "Inner is really 2" << endl;
                break;
            } else
                cout << "Inner is " << inner << endl;
            // cout << "yet another loop" << endl;
        }
    }
    


    cout << "Total Count: " << count << endl;    
    cout << "We are out of loop!" << endl;

   return 0;
}