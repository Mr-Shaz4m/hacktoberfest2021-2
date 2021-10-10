#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

class outputs
{
protected:
    void outAdd(int a, int b, double c)
    {
        cout << " ______________________________" << endl;
        cout << "<   Sum of vector " << a << " and " << b << " is " << c << "  >" << endl;
        cout << " ------------------------------" << endl;
        cout << "   \\" << endl;
        cout << "    \\" << endl;
        cout << "        .--." << endl;
        cout << "       |o_o |" << endl;
        cout << "       |:_/ |" << endl;
        cout << "      //   \\ \\" << endl;
        cout << "     (|     | )" << endl;
        cout << "    /'\\_   _/`\\" << endl;
        cout << "    \\___)=(___/" << endl;
    }
    void outsubs(int a, int b, double c)
    {
        cout << " ______________________________" << endl;
        cout << "<   Substracion of vector " << a << " and " << b << " is " << c << "  >" << endl;
        cout << " ------------------------------" << endl;
        cout << "   \\" << endl;
        cout << "    \\" << endl;
        cout << "        .--." << endl;
        cout << "       |o_o |" << endl;
        cout << "       |:_/ |" << endl;
        cout << "      //   \\ \\" << endl;
        cout << "     (|     | )" << endl;
        cout << "    /'\\_   _/`\\" << endl;
        cout << "    \\___)=(___/" << endl;
    }
    void outdot(int a, int b, double c)
    {
        cout << " ______________________________" << endl;
        cout << "<   Product of vector " << a << " and " << b << " is " << c << "  >" << endl;
        cout << " ------------------------------" << endl;
        cout << "   \\" << endl;
        cout << "    \\" << endl;
        cout << "        .--." << endl;
        cout << "       |o_o |" << endl;
        cout << "       |:_/ |" << endl;
        cout << "      //   \\ \\" << endl;
        cout << "     (|     | )" << endl;
        cout << "    /'\\_   _/`\\" << endl;
        cout << "    \\___)=(___/" << endl;
    }
};

class Banner //Banners here
{
protected:
    void ProBanner() //I am Main Banner
    {
        cout << " _______________________________________________________\n";
        cout << "/                                                       \\ \n";
        cout << "|          Hey ! Welcome to Project Vector              |\n";
        cout << "\\_________              _______________________________/ \n";
        cout << "          \\_         __/    ___---------__               \n";
        cout << "            \\      _/      /              \\_             \n";
        cout << "             \\    /       /                 \\            \n";
        cout << "              |  /       | _    _ \\          \\           \n";
        cout << "              | |       / / \\  / \\ |          \\          \n";
        cout << "              | |       ||   ||   ||           |         \n";
        cout << "              | |       | \\_//\\_\\/ |         |         \n";
        cout << "              | |       |_| (||)   |_______|   |         \n";
        cout << "              | |         |  ||     | _  / /   |         \n";
        cout << "               \\ \\        |_________|| / /   /          \n";
        cout << "                \\ \\_       |_|_|_|_|/|  _/___/           \n";
        cout << "                 \\__>       _ _/_ _ /  |                 \n";
        cout << "                          .|_|_|_|_|   |                 \n";
        cout << "                          |           /                  \n";
        cout << "                          |__________/                   \n";
        cout << "\n";
        cout << "\t\tA project by Mr.HH\n";
        cout << "\nPress Enter key Gently...";
        system("cls");
    }

    void addBanner() //Vector Addition Banner
    {
        cout << " _______________________________________________________\n";
        cout << "/                                                       \\ \n";
        cout << "|         Hey ! Welcome to  Vector  Addition            |\n";
        cout << "\\_________              _______________________________/ \n";
        cout << "          \\_         __/    ___---------__               \n";
        cout << "            \\      _/      /              \\_             \n";
        cout << "             \\    /       /                 \\            \n";
        cout << "              |  /       | _    _ \\          \\           \n";
        cout << "              | |       / / \\  / \\ |          \\          \n";
        cout << "              | |       ||   ||   ||           |         \n";
        cout << "              | |       | \\_//\\_\\/ |         |         \n";
        cout << "              | |       |_| (||)   |_______|   |         \n";
        cout << "              | |         |  ||     | _  / /   |         \n";
        cout << "               \\ \\        |_________|| / /   /          \n";
        cout << "                \\ \\_       |_|_|_|_|/|  _/___/           \n";
        cout << "                 \\__>       _ _/_ _ /  |                 \n";
        cout << "                          .|_|_|_|_|   |                 \n";
        cout << "                          |           /                  \n";
        cout << "                          |__________/                   \n";
        cout << "\n";
        cout << "Note :- A and B are Dummy Vector\n";
        cout << "\t\tPress Enter Key To Continue...";
        system("cls");
    }

    void DotBanner() //Vector Dot Product Banner
    {
        cout << " _______________________________________________________\n";
        cout << "/                                                       \\ \n";
        cout << "|       Hey ! Welcome to  Vector Dot Product             |\n";
        cout << "\\_________              _______________________________/ \n";
        cout << "          \\_         __/    ___---------__               \n";
        cout << "            \\      _/      /              \\_             \n";
        cout << "             \\    /       /                 \\            \n";
        cout << "              |  /       | _    _ \\          \\           \n";
        cout << "              | |       / / \\  / \\ |          \\          \n";
        cout << "              | |       ||   ||   ||           |         \n";
        cout << "              | |       | \\_//\\_\\/ |         |         \n";
        cout << "              | |       |_| (||)   |_______|   |         \n";
        cout << "              | |         |  ||     | _  / /   |         \n";
        cout << "               \\ \\        |_________|| / /   /          \n";
        cout << "                \\ \\_       |_|_|_|_|/|  _/___/           \n";
        cout << "                 \\__>       _ _/_ _ /  |                 \n";
        cout << "                          .|_|_|_|_|   |                 \n";
        cout << "                          |           /                  \n";
        cout << "                          |__________/                   \n";
        cout << "\n";
        cout << "Note :- A and B are Dummy Vector\n";
        cout << "\t\tPress Enter Key To Continue...";
        system("cls");
    }

    void CrossBanner() // Vector Cross Product Banner
    {
        cout << " _______________________________________________________\n";
        cout << "/                                                       \\ \n";
        cout << "|      Hey ! Welcome to Vector  Cross Product            |\n";
        cout << "\\_________              _______________________________/ \n";
        cout << "          \\_         __/    ___---------__               \n";
        cout << "            \\      _/      /              \\_             \n";
        cout << "             \\    /       /                 \\            \n";
        cout << "              |  /       | _    _ \\          \\           \n";
        cout << "              | |       / / \\  / \\ |          \\          \n";
        cout << "              | |       ||   ||   ||           |         \n";
        cout << "              | |       | \\_//\\_\\/ |         |         \n";
        cout << "              | |       |_| (||)   |_______|   |         \n";
        cout << "              | |         |  ||     | _  / /   |         \n";
        cout << "               \\ \\        |_________|| / /   /          \n";
        cout << "                \\ \\_       |_|_|_|_|/|  _/___/           \n";
        cout << "                 \\__>       _ _/_ _ /  |                 \n";
        cout << "                          .|_|_|_|_|   |                 \n";
        cout << "                          |           /                  \n";
        cout << "                          |__________/                   \n";
        cout << "\n";
        cout << "Note :- A and B are Dummy Vector\n";
        cout << "\t\tPress Enter Key To Continue...";
        system("cls");
        cout << " _______________________________________________________\n";
        cout << "/                                                       \\ \n";
        cout << "|                      Mode                              |\n";
        cout << "\\_________              _______________________________/ \n";
        cout << "          \\_         __/    ___---------__               \n";
        cout << "            \\      _/      /              \\_             \n";
        cout << "             \\    /       /                 \\            \n";
        cout << "              |  /       | _    _ \\          \\           \n";
        cout << "              | |       / / \\  / \\ |          \\          \n";
        cout << "              | |       ||   ||   ||           |         \n";
        cout << "              | |       | \\_//\\_\\/ |         |         \n";
        cout << "              | |       |_| (||)   |_______|   |         \n";
        cout << "              | |         |  ||     | _  / /   |         \n";
        cout << "               \\ \\        |_________|| / /   /          \n";
        cout << "                \\ \\_       |_|_|_|_|/|  _/___/           \n";
        cout << "                 \\__>       _ _/_ _ /  |                 \n";
        cout << "                          .|_|_|_|_|   |                 \n";
        cout << "                          |           /                  \n";
        cout << "                          |__________/                   \n";
        cout << "\n";
    }

    void subsBanner() // Vector Substraction Banner
    {
        cout << " _______________________________________________________\n";
        cout << "/                                                       \\ \n";
        cout << "|      Hey ! Welcome to  Vector Substraction             |\n";
        cout << "\\_________              _______________________________/ \n";
        cout << "          \\_         __/    ___---------__               \n";
        cout << "            \\      _/      /              \\_             \n";
        cout << "             \\    /       /                 \\            \n";
        cout << "              |  /       | _    _ \\          \\           \n";
        cout << "              | |       / / \\  / \\ |          \\          \n";
        cout << "              | |       ||   ||   ||           |         \n";
        cout << "              | |       | \\_//\\_\\/ |         |         \n";
        cout << "              | |       |_| (||)   |_______|   |         \n";
        cout << "              | |         |  ||     | _  / /   |         \n";
        cout << "               \\ \\        |_________|| / /   /          \n";
        cout << "                \\ \\_       |_|_|_|_|/|  _/___/           \n";
        cout << "                 \\__>       _ _/_ _ /  |                 \n";
        cout << "                          .|_|_|_|_|   |                 \n";
        cout << "                          |           /                  \n";
        cout << "                          |__________/                   \n";
        cout << "\n";
        cout << "Note :- A and B are Dummy Vector\n";
        cout << "\t\tPress Enter Key To Continue...";
        system("cls");
    }
    void indexSelectA() // Vector Substraction Banner
    {
        cout << " _______________________________________________________\n";
        cout << "/                                                       \\ \n";
        cout << "|   Choose index for the directon of vector A            |\n";
        cout << "\\_________              _______________________________/ \n";
        cout << "          \\_         __/    ___---------__               \n";
        cout << "            \\      _/      /              \\_             \n";
        cout << "             \\    /       /                 \\            \n";
        cout << "              |  /       | _    _ \\          \\           \n";
        cout << "              | |       / / \\  / \\ |          \\          \n";
        cout << "              | |       ||   ||   ||           |         \n";
        cout << "              | |       | \\_//\\_\\/ |         |         \n";
        cout << "              | |       |_| (||)   |_______|   |         \n";
        cout << "              | |         |  ||     | _  / /   |         \n";
        cout << "               \\ \\        |_________|| / /   /          \n";
        cout << "                \\ \\_       |_|_|_|_|/|  _/___/           \n";
        cout << "                 \\__>       _ _/_ _ /  |                 \n";
        cout << "                          .|_|_|_|_|   |                 \n";
        cout << "                          |           /                  \n";
        cout << "                          |__________/                   \n";
        cout << "\n";
    }
    void indexSelectB() // Vector Substraction Banner
    {
        cout << " _______________________________________________________\n";
        cout << "/                                                       \\ \n";
        cout << "|   Choose index for the directon of vector B            |\n";
        cout << "\\_________              _______________________________/ \n";
        cout << "          \\_         __/    ___---------__               \n";
        cout << "            \\      _/      /              \\_             \n";
        cout << "             \\    /       /                 \\            \n";
        cout << "              |  /       | _    _ \\          \\           \n";
        cout << "              | |       / / \\  / \\ |          \\          \n";
        cout << "              | |       ||   ||   ||           |         \n";
        cout << "              | |       | \\_//\\_\\/ |         |         \n";
        cout << "              | |       |_| (||)   |_______|   |         \n";
        cout << "              | |         |  ||     | _  / /   |         \n";
        cout << "               \\ \\        |_________|| / /   /          \n";
        cout << "                \\ \\_       |_|_|_|_|/|  _/___/           \n";
        cout << "                 \\__>       _ _/_ _ /  |                 \n";
        cout << "                          .|_|_|_|_|   |                 \n";
        cout << "                          |           /                  \n";
        cout << "                          |__________/                   \n";
        cout << "\n";
    }
    void indexSelectC()
    {
        cout << " _______________________________________________________\n";
        cout << "/                                                       \\ \n";
        cout << "|   Choose index for the directon of resultant           |\n";
        cout << "\\_________              _______________________________/ \n";
        cout << "          \\_         __/    ___---------__               \n";
        cout << "            \\      _/      /              \\_             \n";
        cout << "             \\    /       /                 \\            \n";
        cout << "              |  /       | _    _ \\          \\           \n";
        cout << "              | |       / / \\  / \\ |          \\          \n";
        cout << "              | |       ||   ||   ||           |         \n";
        cout << "              | |       | \\_//\\_\\/ |         |         \n";
        cout << "              | |       |_| (||)   |_______|   |         \n";
        cout << "              | |         |  ||     | _  / /   |         \n";
        cout << "               \\ \\        |_________|| / /   /          \n";
        cout << "                \\ \\_       |_|_|_|_|/|  _/___/           \n";
        cout << "                 \\__>       _ _/_ _ /  |                 \n";
        cout << "                          .|_|_|_|_|   |                 \n";
        cout << "                          |           /                  \n";
        cout << "                          |__________/                   \n";
        cout << "\n";
    }
    void outCrossVect(int i, int b, double c, char a)
    {
        cout << " _______________________________________________" << endl;
        cout << "<   Product of vector " << a << " and " << b << " is " << c << a << " (cap)"
             << ">" << endl;
        cout << " ------------------------------------------------" << endl;
        cout << "   \\" << endl;
        cout << "    \\" << endl;
        cout << "        .--." << endl;
        cout << "       |o_o |" << endl;
        cout << "       |:_/ |" << endl;
        cout << "      //   \\ \\" << endl;
        cout << "     (|     | )" << endl;
        cout << "    /'\\_   _/`\\" << endl;
        cout << "    \\___)=(___/" << endl;
    }
};

class inputTaker
{
private:
    int temp;

protected:
    int getA()
    {
        cout << " _______________________________________________________\n";
        cout << "/                                                       \\ \n";
        cout << "|                 Enter magnitude of A vector            |\n";
        cout << "\\_________              _______________________________/ \n";
        cout << "          \\_         __/    ___---------__               \n";
        cout << "            \\      _/      /              \\_             \n";
        cout << "             \\    /       /                 \\            \n";
        cout << "              |  /       | _    _ \\          \\           \n";
        cout << "              | |       / / \\  / \\ |          \\          \n";
        cout << "              | |       ||   ||   ||           |         \n";
        cout << "              | |       | \\_//\\_\\/ |         |         \n";
        cout << "              | |       |_| (||)   |_______|   |         \n";
        cout << "              | |         |  ||     | _  / /   |         \n";
        cout << "               \\ \\        |_________|| / /   /          \n";
        cout << "                \\ \\_       |_|_|_|_|/|  _/___/           \n";
        cout << "                 \\__>       _ _/_ _ /  |                 \n";
        cout << "                          .|_|_|_|_|   |                 \n";
        cout << "                          |           /                  \n";
        cout << "                          |__________/                   \n";
        cout << "\n\n>>";
        cin >> temp;
        system("cls");
        return temp;
    }
    int getB()
    {
        cout << " _______________________________________________________\n";
        cout << "/                                                       \\ \n";
        cout << "|                 Enter magnitude of B vector            |\n";
        cout << "\\_________              _______________________________/ \n";
        cout << "          \\_         __/    ___---------__               \n";
        cout << "            \\      _/      /              \\_             \n";
        cout << "             \\    /       /                 \\            \n";
        cout << "              |  /       | _    _ \\          \\           \n";
        cout << "              | |       / / \\  / \\ |          \\          \n";
        cout << "              | |       ||   ||   ||           |         \n";
        cout << "              | |       | \\_//\\_\\/ |         |         \n";
        cout << "              | |       |_| (||)   |_______|   |         \n";
        cout << "              | |         |  ||     | _  / /   |         \n";
        cout << "               \\ \\        |_________|| / /   /          \n";
        cout << "                \\ \\_       |_|_|_|_|/|  _/___/           \n";
        cout << "                 \\__>       _ _/_ _ /  |                 \n";
        cout << "                          .|_|_|_|_|   |                 \n";
        cout << "                          |           /                  \n";
        cout << "                          |__________/                   \n";
        cout << "\n\n>>";
        cin >> temp;
        system("cls");
        return temp;
    }
    int getTheta()
    {
        cout << " _______________________________________________________\n";
        cout << "/                                                       \\ \n";
        cout << "| Provide  short angle between Vector A and Vector B     |\n";
        cout << "\\_________              _______________________________/ \n";
        cout << "          \\_         __/    ___---------__               \n";
        cout << "            \\      _/      /              \\_             \n";
        cout << "             \\    /       /                 \\            \n";
        cout << "              |  /       | _    _ \\          \\           \n";
        cout << "              | |       / / \\  / \\ |          \\          \n";
        cout << "              | |       ||   ||   ||           |         \n";
        cout << "              | |       | \\_//\\_\\/ |         |         \n";
        cout << "              | |       |_| (||)   |_______|   |         \n";
        cout << "              | |         |  ||     | _  / /   |         \n";
        cout << "               \\ \\        |_________|| / /   /          \n";
        cout << "                \\ \\_       |_|_|_|_|/|  _/___/           \n";
        cout << "                 \\__>       _ _/_ _ /  |                 \n";
        cout << "                          .|_|_|_|_|   |                 \n";
        cout << "                          |           /                  \n";
        cout << "                          |__________/                   \n";
        cout << "\n\n>>";
        cin >> temp;
        system("cls");
        return temp;
    }
};
class Vectors : protected Banner, Thita, inputTaker, outputs //Vector calculation here
{
protected:
    int a, b, deg, temp0, temp1, mode, dir0, dir1;
    double deg1;

public:
    Vectors()
    {
        a = 0;
        b = 0;
        deg = 0;
        temp0 = 0;
        temp1 = 0;
        mode = 0;
        dir0 = 0;
        dir1 = 0;
        deg1 = 0;
        ProBanner();
    }
    void VectDotProduct() //I Will give you value of dot product
    {
        // VectorBanner();
        DotBanner();
        a = getA();
        b = getB();
        deg1 = getTheta();
        /*Algorithm*/
        if (deg1 == 1) // I am cos 0
        {
            outdot(a, b, (a * b));
        }
        else if (deg1 == (-1)) // I am cos 180
        {
            outdot(a, b, (a * b * (-1)));
        }
        else if (deg1 == 0) //I am cos 90
        {
            outdot(a, b, deg1);
        }
        else
        {
            temp0 = (a * a) + (b * b);
            double temp2 = a * b * (deg1);
            outdot(a, b, temp0);
        }
        cout << "\n\nPress Enter key to Gentely...";
    }

    void VectCrossProduct() //I will give you value of cross product
    {
        CrossBanner();
        cout << "\nMode selector\nEnter index number to select mode";
        cout << "\n 1.Two Directions are given \n 2.Only one direction given\n\n>";
        cin >> mode;
        if (mode == 1 || mode == 2)
        {
            system("cls");
            cout << "Welcome to Mode" << mode << endl;
            a = getA();
            b = getB();
            deg = getTheta();
            double deg1 = sin(deg);
            if (deg1 == 0)
            {
                temp0 = 0;
            }
            else if (deg == 1)
            {
                temp0 = a * b;
            }
            else
            {
                temp0 = (a * b * deg1);
            }
            switch (mode)
            {
            case 1:
                indexSelectA();
                cout << "\n1.'i'\n2.'j'\n3.'k'\n>";
                cin >> dir0;
                system("cls");
                indexSelectB();
                cout << " \n1.'i'\n2.'j'\n3.'k'\n>";
                cin >> dir1;
                system("cls");
                if (dir0 == 1 && dir1 == 2)
                {
                    outCrossVect(a, b, temp0, 'k');
                }
                else if (dir0 == 2 && dir1 == 3)
                {

                    outCrossVect(a, b, temp0, 'i');
                }
                else if (dir0 == 3 && dir1 == 1)
                {

                    outCrossVect(a, b, temp0, 'j');
                }
                else if (dir0 == 2 && dir1 == 1)
                {
                    outCrossVect(a, b, temp0, '-k');
                }
                else if (dir0 == 3 && dir1 == 2)
                {

                    outCrossVect(a, b, temp0, '-i');
                }
                else if (dir0 == 1 && dir1 == 3)
                {
                    outCrossVect(a, b, temp0, '-j');
                }
                else
                {
                    cout << "Invaild Input";
                    cout << "\n\nPress Enter key to Gentely";
                    system("cls");
                    VectCrossProduct();
                }
                cout << "\n\nPress Enter key to Gentely";
                break;
            case 2:
                indexSelectC();
                cout << " \n1.'i'\n2.'j'\n3.'k'\n4.'-i'\n5.'-j'\n6.'-k'\n>";
                cin >> dir0;
                system("cls");
                if (dir0 == 1)
                    outCrossVect(a, b, temp0, 'i');
                else if (dir0 == 2)
                    outCrossVect(a, b, temp0, 'j');
                else if (dir0 == 3)
                    outCrossVect(a, b, temp0, 'k');
                if (dir0 == 4)
                    outCrossVect(a, b, temp0, '-i');
                else if (dir0 == 5)
                    outCrossVect(a, b, temp0, '-j');
                else if (dir0 == 6)
                    outCrossVect(a, b, temp0, '-k');
                else
                {
                    cout << "Invaild input\n";
                    cout << "\t\tPress Enter Key Gently...";
                    system("cls");
                    VectCrossProduct();
                }
                break;
            }
        }
        else
        {
            cout << "Invaild Mode\n";
            cout << "\t\tPress Enter Key Gently...";
            system("cls");
            VectCrossProduct();
        }
    }
    void VectAdd() //I will add your vector
    {
        // VectorBanner();
        addBanner();
        a = getA();
        b = getB();
        deg = getTheta();
        deg1 = cos(deg, 'a'); //a is for determining addition
        /*Algorithm*/
        if (deg1 == 1) // I am cos 0
        {

            outAdd(a, b, (a + b));
        }
        else if (deg1 == (-1)) // I am cos 180
        {
            outAdd(a, b, (abs(a - b)));
        }
        else if (deg1 == 0) //I am cos 90
        {
            temp0 = (a * a) + (b * b);
            outAdd(a, b, (sqrt(temp0)));
        }
        else
        {
            temp0 = (a * a) + (b * b);
            double temp2 = sqrt(2 * a * b * deg1 + temp0);
            outAdd(a, b, temp2);
        }
        system("cls");
    }

    void VectSubs() //I will subtract your vector
    {
        // VectorBanner();
        subsBanner();
        a = getA();
        b = getB();
        deg = getTheta();
        deg1 = cos(deg, 's'); // s is for detrmining substraction
        /*Algorithm*/
        if (deg1 == 1) // I am cos 0
        {
            outsubs(a, b, (a + b));
        }
        else if (deg1 == (-1)) // I am cos 180
        {
            outsubs(a, b, (abs(a - b)));
        }
        else if (deg1 == 0) //I am cos 90
        {
            temp0 = (a * a) + (b * b);
            outsubs(a, b, sqrt(temp0));
        }
        else
        {
            temp0 = (a * a) + (b * b);
            double temp2 = sqrt(temp0 + (2 * a * b * deg1));
            outsubs(a, b, temp2);
        }
        cout << "\n\nPress Enter key to Gentely..";
        system("cls");
    }
};
class Runner : protected Vectors //Mode selection Here
{
private:
    int select;

public:
    Runner()
    {
        select = 0;
    }
    void mainIndex()
    {
        system("cls");
        cout << "  _______________________ " << endl;
        cout << "<   Moo...Select Mode !  >" << endl;
        cout << " ----------------------- " << endl;
        cout << "        \\   ^__^" << endl;
        cout << "         \\  (oo)\\_______" << endl;
        cout << "            (__)\\       )\\/\\" << endl;
        cout << "                ||----w |" << endl;
        cout << "                ||     ||" << endl;
    }
    int runnner()
    {
        while (1)
        {
            mainIndex();
            cout << "\n1. Vector Addition";
            cout << "\n2. Vector Substraction";
            cout << "\n3. Vector Dot Product";
            cout << "\n4. Vector Cross Product";
            cout << "\n0. Exit";
            cout << "\nEnter Index number to select mode";
            cout << "\n>>";
            cin >> select;
            switch (select)
            {
            case 1:
                VectAdd();
                break;
            case 2:
                VectSubs();
                break;
            case 3:
                VectDotProduct();
                break;
            case 4:
                VectCrossProduct();
                break;
            case 0:
                exit(1);
                break;

            default:
                break;
            }
        }
    }
    void run()
    {
        mainIndex();
        cout << "\n1. Enter to Vector";
        cout << "\n2. Banner";
        cout << "\n3. Quit";
    }
};

int main()
{
    Runner r1;
    r1.runnner();
}