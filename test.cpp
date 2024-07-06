#include <iostream>
using namespace std;

template <typename T>
class Array
{
public:
    void create(T type, string elements)
    {
        cout << type << " " << elements;
    }
};

int main()
{
    int option = 1;
    while (option != 5)
    {
        cout << "OPTIONS FOR ARRAY:" << endl;
        cout << " 1. Create\n 2. Read elements\n 3. Update\n 4. Delete\n 5. Exit";
        cin >> option;
        switch (option)
        {
        case 1:
            string type, elements;
            cout << "Enter type of elements:\n";
            cin >> type;
            cout << "Enter elements (, separated):\n";
            cin >> elements;
        }
    }

    return 0;
}