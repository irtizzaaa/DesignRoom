#include <iostream>
#include <fstream>  // file reading functions

using namespace std;

int main()  {

    // shows instructions (readme)
    string line;
    ifstream readme("info");
    if (readme.is_open())    {
        while(getline(readme, line))    {
            cout << line << "\n";
        }
        readme.close();
    }

    // prompt to continue or close program
    char check;
    cout << "Press 1 to continue or 0 to exit: ";
    cin >> check;

    if (check == '1')   {
        system("clear");
    }
    else    {
        return 0;
    }

    // design selection code
    int selection;
    cout << "Welcome! This is the bedroom selection screen. We offer designs with 1, 2, 3 and 4 room(s). Please type in how many rooms you would like from the given choices." << endl;
    cin  >> selection;

    // design number validity checker
    if (selection < 1 || selection > 4)  {

        do
        {
            cout << "Invalid choice. Please type in 1, 2, 3 or 4." << endl;
            cin >> selection;
        }
        while (selection < 1 || selection > 4);

    }

    // clears console
    system("clear");

    // successful design selection message
    cout << "Great choice! We have received your choice and are preparing the design. This may take 2-5 seconds." << endl;

    cout << "Loading";

    cout << ".";

    cout << ".";

    cout << ".";

    cout << ".";

    cout << "\n\nYour design is ready!\n\n";

    cout << "Here is your " << selection << " bedroom design.\n\n";

    // deisgn 1 block
    if (selection == 1) {

        string line;
        ifstream readme("design1");
        if (readme.is_open())    {
            while(getline(readme, line))    {
                cout << line << "\n";
            }
            readme.close();
        }
    }

    // deisgn 2 block
    if (selection == 2) {

        string line;
        ifstream readme("design 2");
        if (readme.is_open())    {
            while(getline(readme, line))    {
                cout << line << "\n";
            }
            readme.close();
        }
    }

    // deisgn 3 block
    if (selection == 3) {

        string line;
        ifstream readme("design 3");
        if (readme.is_open())    {
            while(getline(readme, line))    {
                cout << line << "\n";
            }
            readme.close();
        }
    }

    // deisgn 4 block
    if (selection == 4) {

        string line;
        ifstream readme("design 4");
        if (readme.is_open())    {
            while(getline(readme, line))    {
                cout << line << "\n";
            }
            readme.close();
        }
    }

    cout << "\n";
    system("pause");

    while (selection != 0)  {

        cout << "\n- To see view of bedroom with window press 1\n- To see view of front apartment press 2\n- To change design press 3\n- To exit press 0\n";
        cin >> selection;

        system("clear");

        if (selection == 1) {
            string line;
            ifstream readme("view of bedroom with window");
            if (readme.is_open())    {
                while(getline(readme, line))    {
                    cout << line << "\n";
                }
                readme.close();
            }
            cout << "\n";
            system("pause");
        }

        if (selection == 2) {
            string line;
            ifstream readme("main door view");
            if (readme.is_open())    {
                while(getline(readme, line))    {
                    cout << line << "\n";
                }
                readme.close();
            }
            cout << "\n";
            system("pause");
        }

        if (selection == 3) {
            // design selection code
            int selection;
            cout << "Want to change the design? We offer designs with 1, 2, 3 and 4 room(s). Please type in how many rooms you would like from the given choices." << endl;
            cin  >> selection;

            // design number validity checker
            if (selection < 1 || selection > 4)  {

                do
                {
                    cout << "Invalid choice. Please type in 1, 2, 3 or 4." << endl;
                    cin >> selection;
                }
                while (selection < 1 || selection > 4);

            }

            // clears console
            system("clear");

            // successful design selection message
            cout << "Great choice! We have received your choice and are preparing the design. This may take 2-5 seconds." << endl;

            cout << "Loading";

            cout << ".";

            cout << ".";

            cout << ".";

            cout << ".";

            cout << "\n\nYour design is ready!\n\n";

            cout << "Here is your " << selection << " bedroom design.\n\n";

            // deisgn 1 block
            if (selection == 1) {

                string line;
                ifstream readme("design1");
                if (readme.is_open())    {
                    while(getline(readme, line))    {
                        cout << line << "\n";
                    }
                    readme.close();
                }
                system("pause");
            }

            // deisgn 2 block
            if (selection == 2) {

                string line;
                ifstream readme("design 2");
                if (readme.is_open())    {
                    while(getline(readme, line))    {
                        cout << line << "\n";
                    }
                    readme.close();
                }
                system("pause");
            }

            // deisgn 3 block
            if (selection == 3) {

                string line;
                ifstream readme("design 3");
                if (readme.is_open())    {
                    while(getline(readme, line))    {
                        cout << line << "\n";
                    }
                    readme.close();
                }
                system("pause");
            }

            // deisgn 4 block
            if (selection == 4) {

                string line;
                ifstream readme("design 4");
                if (readme.is_open())    {
                    while(getline(readme, line))    {
                        cout << line << "\n";
                    }
                    readme.close();
                }
                system("pause");
            }

        }

        if (selection == 0) {
            return 0;
        }

    }

    return 0;
}