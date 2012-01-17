// Name: Dhruvdeep Varun
// ID: 200801040
// DA-IICT, Gandhinagar

// Program-2: Elimination Game

#include <iostream>
#include <iomanip>

using namespace std;

int eliminate(int, int, int);

int eliminate(int m, int n, int round)
{
    int victim = n * round;
    while (victim > m)
    {
        victim = (n * (victim - m) - 1) / (n - 1);
    }

    return(victim);
}

int main()
{
    int m, n, round;        // m is the total number of kids
                            // n is the position of the kid to be eliminated in each round
    cout << "\nHow many kids are playing the game? ";
    cin  >> m;
    cout << "\nEnter the position of the kid to be eliminated: ";
    cin  >> n;

    int elimination[m];     // This array holds the position of kids eliminated in each round

    for(round=1; round<=m; round++)
    {
        elimination[round-1] = eliminate(m, n, round);
    }

    // Displaying the results for each round elimination
    cout << "     Round  Eliminated\n";
    cout << "----------  ----------\n";
    for (round = 1; round <= m; round++)
    {
        cout << setw(10) << right << round << setw(12) << right << elimination[round - 1] << endl;
    }
    cout << endl;
    return 0;
}
