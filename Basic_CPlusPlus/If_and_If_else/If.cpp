#include<iostream>
using namespace std;

int main (){
    int A = 0; // ประกาศตัวแปร A และกำหนดค่าเริ่มต้นเป็น 0
    cout<<"Please enter a number to A: "<< endl; // แสดงข้อความให้เราป้อนค่า
    cin >> A; // รับค่าจากเราแล้วเก็บใน A

    if(A<5){ // ถ้า A น้อยกว่า 5
        cout<<"Condition met"<<endl; // แสดงข้อความว่าเงื่อนไขเป็นจริง
    }
    
    return 0; // จบการทำงานของโปรแกรม
}