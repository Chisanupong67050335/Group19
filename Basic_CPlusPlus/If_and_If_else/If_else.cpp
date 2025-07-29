#include<iostream>
using namespace std;

int main() {
    int A = 0; // ประกาศตัวแปร A และกำหนดค่าเริ่มต้นเป็น 0
    cout << "Please enter a number for A: " << endl; // แสดงข้อความให้เราป้อนค่า
    cin >> A; // รับค่าจากเราแล้วเก็บไว้ใน A

    if (A == 8) { // ถ้า A เท่ากับ 8
        cout << "A is 8" << endl;
    } else if (A > 8) { // ถ้า A มากกว่า 8
        cout << "A is greater than 8" << endl;
    } else { // กรณีที่เหลือคือ A น้อยกว่า 8
        cout << "A is less than 8" << endl;
    }

    return 0; // จบการทำงานของโปรแกรม
}