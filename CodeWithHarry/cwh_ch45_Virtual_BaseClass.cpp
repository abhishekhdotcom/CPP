#include <iostream>
using namespace std;

// Student class...
class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int a)
    {
        roll_no = a;
    }

    void print_num(void)
    {
        cout << "Your roll number is: " << roll_no << endl;
    }
};

// Test class...
class Test : virtual public Student
{
protected:
    float math, phy;

public:
    void set_mark(float m1, float p1)
    {
        math = m1;
        phy = p1;
    }

    void print_mark(void)
    {
        cout << "your result is here: " << endl
             << "Math: " << math << endl
             << "Physics: " << phy << endl;
    }
};

// Sport class...
class Sport : virtual public Student
{
protected:
    float score;

public:
    void set_score(float scr)
    {
        score = scr;
    }

    void print_score(void)
    {
        cout << "Your Sport Score is: " << score << endl;
    }
};

// Result class...
class Result : public Test, public Sport
{
private:
    float total;

public:
    void display(void)
    {
        total = math + phy + score;
        print_num();
        print_mark();
        print_score();
        cout << "your total score is: " << total << endl;
    }
};

int main()
{
    Result abhi;
    abhi.set_roll_no(05);
    abhi.set_mark(54, 65);
    abhi.set_score(8);
    abhi.display();
    return 0;
}