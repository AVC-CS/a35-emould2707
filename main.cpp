#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int rdnum1, rdnum2, rdnum3;
    int total, avg;

    srand(time(0));
    rdnum1 = rand() %100;
    rdnum2 = rand() %100;
    rdnum3 = rand() %100;
    cout << rdnum1 << " " << rdnum2 << " " << rdnum3 << endl;
    total = rdnum1 + rdnum2 + rdnum3;
    avg = total / 3;
    cout << total << " " << avg << endl;
    


    // TODO: seed the random number generator with time(0)

    // TODO: generate 3 random numbers between 0 and 99

    // TODO: compute the total summation

    // TODO: print the 3 random numbers on the first line

    // TODO: print the total and average (integer division) on the second line

    return 0;
}
