#include <iostream>

using namespace std;


int main() {

 int numStudents = 10;
 int numMarks = 3;
    char names[10][100];
    int marks[10][3];
    int sum[10];
    double average[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin.getline(names[i], 100);

        sum[i] = 0;
        for (int j = 0; j < 3; j++) {
            cout << "Enter mark " << j + 1 << " for " << names[i] << ": ";
            cin >> marks[i][j];
            sum[i] += marks[i][j];
        }
        cin.ignore();

        average[i] = sum[i] / (numMarks * 1.0);
    }

    cout << endl;
    cout << "Student\tMarks\t\tSum\tAverage" << endl;
    for (int i = 0; i < 10; i++) {
        cout << names[i] << "\t";
        for (int j = 0; j < 3; j++) {
            cout << marks[i][j] << " ";
        }
        cout << "\t" << sum[i] << "\t" << average[i] << endl;
    }

    return 0;
}
