//
//  main.cpp
//  task1
//
//  Created by Andrey Styskin on 02.02.2019.
//  Copyright © 2019 Andrey Styskin. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream in;
    in.open("tests.txt");
    ofstream out;
    out.open("output.txt");
    int T;
    in >> T;
    for (int t = 0; t < T; ++t) {
        double n, nn, a, b;
        in >> n >> a >> b;
        for (int i = 1; i < 100000000; ++i) {
            nn = a * n - b * n * n;
            if (fabs(nn - n) < 1e-12) {
                break;
            }
            n = nn;
            if (n < 0) {
                n = 0;
                break;
            }
            if (n > 1e50) {
                n = -1;
                break;
            }
        }
        out << n << endl;
    }
    in.close();
    out.close();

    return 0;
}
