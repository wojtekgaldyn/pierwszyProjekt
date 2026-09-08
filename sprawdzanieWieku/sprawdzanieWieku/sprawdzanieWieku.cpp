#include <iostream>
using namespace std;

int main()
{
    int podanyWiek;
    cout << "Podaj wiek\n";
    cin >> podanyWiek;
    if (podanyWiek >= 5 && podanyWiek <= 6) {
        cout << "Chodzisz do przedszkola\n";
    }
    else if (podanyWiek >= 7 && podanyWiek <= 15) {
        cout << "Chodzisz do szkoly podstawowej\n";
    }
    else if (podanyWiek >= 16 && podanyWiek <= 19) {
        cout << "Chodzisz do szkoly sredniej\n";
    }

}


