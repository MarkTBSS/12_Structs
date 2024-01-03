#include <iostream>
using namespace std;

struct Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    // วิธีสร้าง Instance ใน C++
    Student aiyaInstance;
    // วิธี Assigned ค่าเข้าไปในแต่ละ Field
    aiyaInstance.age = 15;
    aiyaInstance.first_name = "Aiya";
    aiyaInstance.last_name = "Aiyara";
    aiyaInstance.standard = 10;

    // การเข้าถึงค่าใน Struct
    cout << "Age: " << aiyaInstance.age << endl;
    cout << "First Name: " << aiyaInstance.first_name << endl;
    cout << "Last Name: " << aiyaInstance.last_name << endl;
    cout << "Standard: " << aiyaInstance.standard << endl;

    return 0;
}