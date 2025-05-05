#include <iostream>
using namespace std;

int main(){ 
    int limit;
    cout << "Enter the upper limit for the loops (1-5 is safe):";
    cin >> limit;
    
    for (int a = 1; a <= limit; a++){
        for (int b = 1; b <= limit; b++){
            for (int c = 1; c <= limit; c++){ 
                for (int d = 1; d <= limit; d++){ 
                    for (int e = 1; e <= limit;e++){ 
                        for (int f = 1; f<= limit; f++){ 
                            for (int g = 1; g <= limit; g++) {
                                cout << a <<b<<c<<d<<e<<f<<g<<endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;

}