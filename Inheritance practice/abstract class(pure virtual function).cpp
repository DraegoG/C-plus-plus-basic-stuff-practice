#include <iostream>

using namespace std;

class Person
{   //An abstract class
    public:                         // Object of this class can't be created
    virtual void task()=0;        //A pure virtual function
    string name;
    int age;
};

class Student: public Person
{
    public :
    void task()
    {
        cout<<"Learning"<<endl;
    }

};
class Mentor:public Person
{
  public:
  void task()
  {
      cout<<"Teaching";
  }
};

int main() {
    Student s1;
    Mentor m1;
    s1.task();
    m1.task();
}
