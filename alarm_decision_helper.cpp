#include <iostream>
using namespace std;

int main() {
    char weekdayInput, examInput, sickInput;
    bool isWeekday, hasExam, isSick;

    
    cout << "Is it a weekday? (Y/N): ";
    cin >> weekdayInput;

    cout << "Do you have an exam tomorrow? (Y/N): ";
    cin >> examInput;

    cout << "Are you feeling sick? (Y/N): ";
    cin >> sickInput;

    
    isWeekday = (weekdayInput == 'Y' || weekdayInput == 'y');
    hasExam = (examInput == 'Y' || examInput == 'y');
    isSick = (sickInput == 'Y' || sickInput == 'y');

    
    if (isWeekday && hasExam && !isSick) {
        cout << "Set alarm for 6 AM" << endl;
    } else {
        cout << "No need to set alarm" << endl;
    }

    return 0;
}
