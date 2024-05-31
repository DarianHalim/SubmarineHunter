#include <iostream>
using namespace std;

int main()
{
    // GameFields

    bool shipsfield[6][6] = {
        {1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
    };

    // Stats
    int hits = 0;
    int numberOfTurns = 3;

    // Player Only Allowed 3 Chances To Hit
    while (numberOfTurns != 0)
    {
        cout << "Submarine Hunter Game\n";
        cout << "============================================================\n";
        cout << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t \n";
        cout << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t \n";
        cout << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t \n";
        cout << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t \n";
        cout << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t \n";
        cout << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t"
             << "0 \t \n";
        cout << "============================================================= \n";

        int row, column;
        cout << "Select Coordinates To Fire[0-6] \n";
        cout << "Ammunition Remaining: " << numberOfTurns << "\n\n";

        do
        {
            cout << "Selecting Target Row: \n";
            cin >> row;
        } while (!(row < 7));

        do
        {
            cout << "Select Target Column:\n";
            cin >> column;
        } while (!(column < 7));

        if (shipsfield[row][column])
        {
            shipsfield[row][column] = 0;

            hits++;

            string any;
            cout << "You Hit The Submarine, You Saved The Convoy! \n";
            cout << "You Won With " << numberOfTurns << " Ammunition Left \n";
            cout << "Press Any Key Button End Game \n";
            system("pause");

            numberOfTurns = 0;
        }
        else
        {
            string restart;

            numberOfTurns--;
            cout << "You Missed " << numberOfTurns << " Ammunition Remaining \n";

            if (numberOfTurns == 0)
            {
                do
                {
                    cout << "Restart [Y/N]: ";
                    cin >> restart;
                } while ( restart != "Y"  && restart != "N");

                if (restart == "Y")
                {
                    cout << "Bye Loseeer No 2nd Chances \n";
                    system("pause");
                }
                else
                {
                    cout << "Bye Loseeer \n";
                    system("pause");
                }
            }
        }
    }

    return 0;
}
