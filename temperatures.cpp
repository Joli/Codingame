//#4

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    
    cerr << n << endl;
    
    int max = 5526; 
    int actual = 5526;
    
if (n > 0) {
    
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        
       
        
        if (abs(t) < max) {
            max = abs(t);
            actual = t; }
            
         if (t == actual) {
            if (t < 0) {
                actual = t; 
                }
            }
    
        else if (abs(t) == max) { //negative possibility
            actual = abs(t); }
        
    }
    
    cout << actual << endl;
}

else {
    cout << 0 << endl; }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    
    //for (int j = 0; j < n; j++) {

    
    
}
