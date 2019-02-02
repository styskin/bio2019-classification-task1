//
//  main.cpp
//  task1
//
//  Created by Andrey Styskin on 02.02.2019.
//  Copyright © 2019 Andrey Styskin. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream in;
    in.open("tests.txt");
    ofstream out;
    out.open("output.txt");
    int T;
    in >> T;
    for (int t = 0; t < T; ++t) {
        double n, a, b;
        in >> n >> a >> b;
        for (int i = 1; i < 10000000; ++i) {
            n = a * n - b * n * n;
            if (n < 0) {
                n = 0;
                break;
            }
            if (n > 1e50) {
                n = -1;
                break;
            }
//            cout << n << endl;
        }
//        cout << "=======" << endl;
        out << n << endl;
    }
    in.close();
    out.close();

    return 0;
}
