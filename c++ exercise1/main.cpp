#include <iostream>
using namespace std;
class Student{
public:
    Student(int a,string b,char c){
        num=a;
        name=b;
        sex=c;
    }
    ~Student(){
        cout<<"Destructor called."<<'\n';
    }
    void display(){
        cout<<"Constructor called."<<'\n'<<"num:"<<num<<'\n'<<"name:"<<name<<'\n'<<"sex:"<<sex<<'\n';
        
    }
    
private:
    int num;
    string name;
    char sex;
    
};
int main()
{Student stud1(10010,"Wang_li",'f');
    stud1.display();
    Student stud2(10011,"Zhang_fun",'m');
    stud2.display();
    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;
struct student{
    char num[10];
    char xueyuan[10];
    char xingming[10];
};
