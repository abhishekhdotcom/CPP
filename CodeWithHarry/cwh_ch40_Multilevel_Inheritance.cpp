#include <iostream>
using namespace std;

// Student class...
class Student
{
protected:
    int roll_num;

public:
    void set_roll_num(int);
    void get_roll_num(void);
};

void Student::set_roll_num(int r)
{
    roll_num = r;
}

void Student::get_roll_num()
{
    cout << "The roll Number is: " << roll_num << endl;
}

// Exam class...
class Exam : public Student
{
protected:
    float math, phy;

public:
    void set_mark(float, float);
    void get_mark(void);
};

void Exam::set_mark(float m1, float p1)
{
    math = m1;
    phy = p1;
}

void Exam::get_mark()
{
    cout << "The marks of math is: " << math << endl;
    cout << "The marks of Physics is: " << phy << endl;
}

// Result class...
class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_num();
        get_mark();
        cout << "Your percenage is: " << (math + phy) / 2 <<"%"<< endl;
    }
};

int main()
{
    Result abhi;
    abhi.set_roll_num(05);
    abhi.set_mark(45, 65);

    abhi.display_result();
    return 0;
}