//
//  main.cpp
//  Probelem-Solving
//
//  Created by Muhammad Omar on 10/26/19.
//  Copyright © 2019 Muhammad Omar. All rights reserved.
//  Muhammad.omar.eg@gmail.com

#include <iostream>
#include <string>
using namespace std;

class Problem {
  public:
    string result;
    int anaton = 0;
    int daink = 0;
    string soluation(int n , string s);
    
};



string Problem::soluation(int n , string s){
    for (int index = 0 ; index < n; index++) {
        if (s[index] == 'D') {
            daink++;
        } else if (s[index] == 'A'){
            anaton++;
        }
    }
    if (anaton > daink) {
        result = "Anton";
    } else if (daink > anaton){
        result = "Danik";
    } else {
        result = "Friendship";
    }
    return result;
};

int main(int argc, const char * argv[]) {
    int n ;
    string s ;
    Problem AntionAndDaink ;
    cin >> n >> s ;
    string soluation = AntionAndDaink.soluation(n, s);
    cout << soluation << endl;
    return 0;
}
