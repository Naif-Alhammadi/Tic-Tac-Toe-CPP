#include <iostream>
using namespace std;
void pos();
char po[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}};
int main()
{
    pos();
    int num1, num2;
    bool stop1 = true;
    bool stop2 = true;
    bool stop3 = true;
    bool stop4 = true;
    bool stop5 = true;
    bool stop6 = true;
    bool stop7 = true;
    bool stop8 = true;
    bool stop9 = true;

    int won = 0;
    while (won != 3)
    {
        cout << "comp1 chooes a number";
        cin >> num1;
        cin.clear();
        cin.ignore();
        if (num1 > 0 && num1 < 10)
        {
            switch (num1)
            {
            case 1:
                if (stop1)
                {
                    po[0][0] = 'x';
                    stop1 = false;
                    pos();
                }
                break;
            case 2:
                if (stop2)
                {
                    po[0][1] = 'x';
                    stop2 = false;
                    pos();
                }
                break;
            case 3:
                if (stop3)
                {
                    po[0][2] = 'x';
                    stop3 = false;
                    pos();
                }
                break;

            case 4:
                if (stop4)
                {
                    po[1][0] = 'x';
                    stop4 = false;
                    pos();
                }
                break;
            case 5:
                if (stop5)
                {
                    po[1][1] = 'x';
                    stop5 = false;
                    pos();
                }
                break;
            case 6:
                if (stop6)
                {
                    po[1][2] = 'x';
                    stop6 = false;
                    pos();
                }
                break;
            case 7:
                if (stop7)
                {
                    po[2][0] = 'x';
                    stop7 = false;
                    pos();
                }
                break;
            case 8:
                if (stop8)
                {
                    po[2][1] = 'x';
                    stop8 = false;
                    pos();
                }
                break;
            case 9:
                if (stop9)
                {
                    po[2][2] = 'x';
                    stop9 = false;
                    pos();
                }
                break;
            default:
                cout << "wrong symbols \n";
            }
            if (po[0][0] == 'x' && po[0][1] == 'x' && po[0][2] == 'x')
            {
                cout << "user 1 won🎉🎉🎊\n"
                     << endl;
                break;
            }

            if (po[1][0] == 'x' && po[1][1] == 'x' && po[1][2] == 'x')
            {
                cout << "user 1 won🎉🎉🎊\n"
                     << endl;
                break;
            }

            if (po[2][0] == 'x' && po[2][1] == 'x' && po[2][2] == 'x')
            {
                cout << "user 1 won🎉🎉🎊\n"
                     << endl;
                break;
            }

            if (po[0][0] == 'x' && po[1][0] == 'x' && po[2][0] == 'x')
            {
                cout << "user 1 won🎉🎉🎊\n"
                     << endl;
                break;
            }

            if (po[0][1] == 'x' && po[1][1] == 'x' && po[2][1] == 'x')
            {
                cout << "user 1 won🎉🎉🎊\n"
                     << endl;
                break;
            }

            if (po[0][2] == 'x' && po[1][2] == 'x' && po[2][2] == 'x')
            {
                cout << "user 1 won🎉🎉🎊\n"
                     << endl;
                break;
            }

            if (po[0][0] == 'x' && po[1][1] == 'x' && po[2][2] == 'x')
            {
                cout << "user 1 won🎉🎉🎊\n"
                     << endl;
                break;
            }

            if (po[0][2] == 'x' && po[1][1] == 'x' && po[2][0] == 'x')
            {
                cout << "user 1 won🎉🎉🎊\n"
                     << endl;
                break;
            }

            cout << "comp2 chooes a number";
            cin >> num2;

            switch (num2)
            {
            case 1:
                if (stop1)
                {
                    po[0][0] = 'o';
                    stop1 = false;
                    pos();
                }
                break;
            case 2:
                if (stop2)
                {
                    po[0][1] = 'o';
                    stop2 = false;
                    pos();
                }
                break;
            case 3:
                if (stop3)
                {
                    po[0][2] = 'o';
                    stop3 = false;
                    pos();
                }
                break;

            case 4:
                if (stop4)
                {
                    po[1][0] = 'o';
                    stop4 = false;
                    pos();
                }
                break;
            case 5:
                if (stop5)
                {
                    po[1][1] = 'o';
                    stop5 = false;
                    pos();
                }
                break;
            case 6:
                if (stop6)
                {
                    po[1][2] = 'o';
                    stop6 = false;
                    pos();
                }
                break;
            case 7:
                if (stop7)
                {
                    po[2][0] = 'o';
                    stop7 = false;
                    pos();
                }
                break;
            case 8:
                if (stop8)
                {
                    po[2][1] = 'o';
                    stop8 = false;
                    pos();
                }
                break;
            case 9:
                if (stop9)
                {
                    po[2][2] = 'o';
                    stop9 = false;
                    pos();
                }
                break;
            default:
            {
                cout << "wrong symbols \n";
            }
            }
            if (po[0][0] == 'o' && po[0][1] == 'o' && po[0][2] == 'o')
            {
                cout << "user 2 won🎉🎉🎊\n"
                     << endl;
                break;
            }

            if (po[1][0] == 'o' && po[1][1] == 'o' && po[1][2] == 'o')
            {
                cout << "user 2 won🎉🎉🎊\n"
                     << endl;
                break;
            }

            if (po[2][0] == 'o' && po[2][1] == 'o' && po[2][2] == 'o')
            {
                cout << "user 2 won🎉🎉🎊\n"
                     << endl;
                break;
            }

            if (po[0][0] == 'o' && po[1][0] == 'o' && po[2][0] == 'o')
            {
                cout << "user 2 won🎉🎉🎊\n"
                     << endl;
                break;
            }

            if (po[0][1] == 'o' && po[1][1] == 'o' && po[2][1] == 'o')
            {
                cout << "user 2 won🎉🎉🎊\n"
                     << endl;
                break;
            }

            if (po[0][2] == 'o' && po[1][2] == 'o' && po[2][2] == 'o')
            {
                cout << "user 2 won🎉🎉🎊\n"
                     << endl;
                break;
            }

            if (po[0][0] == 'o' && po[1][1] == 'o' && po[2][2] == 'o')
            {
                cout << "user 2 won🎉🎉🎊\n"
                     << endl;
                break;
            }

            if (po[0][2] == 'o' && po[1][1] == 'o' && po[2][0] == 'o')
            {
                cout << "user 2 won🎉🎉🎊\n"
                     << endl;
                break;
            }
        }
    }
}

void pos()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << '\t' << po[i][j] << '\t';
        cout << endl
             << '\n';
    }
}