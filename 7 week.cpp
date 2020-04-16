#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class PatientRecord
{
    int id;  // Unique identifier of the patient
    char *name;// Name of the patient. (Needs to be dynamically allocated.)
    double w;// Weight of the patient.
    int age;// Age of the patient.
public:
    PatientRecord(int n)
    {
        id=n;
    }
    PatientRecord(int n, char *p)
    {
        id=n;
        name = new char[strlen(p)+1];
        strcpy(name, p);

    }//write the constructor to set id,patient name;
    ~PatientRecord()
    {
        delete [] name;
    }
    PatientRecord(const PatientRecord &record)
    {
        name = new char[strlen(record.name)+1];
        strcpy(name, record.name);
        w=record.w;
        age=record.age;
        id=record.id;
    } // set the copy constructor
    void SetName(char *nam)
    {
        name = new char[strlen(nam)+1];
        strcpy(name, nam);
    }
    void SetWeight(double o)
    {
        w=o;
    }
    void SetAge(int a)
    {
        age=a;
    }
    int GetId()
    {
        return id;
    }
    const char* GetName()
    {
        return name;
    }
    double GetWeight()
    {
        return w;
    }
    int GetAge()
    {
        return age;
    }

    void show()
    {
        cout<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Weight: "<<w<<endl;
        cout<<endl;
    }

};
int main()
{


    PatientRecord rec1(1);
    PatientRecord rec2(2);

    rec1.SetName("Saifur");
    rec1.SetAge(30);
    rec1.SetWeight(70);

    rec2.SetName("Nayeem");
    rec2.SetAge(20);
    rec2.SetWeight(50);

    PatientRecord rec3(rec1);
    PatientRecord rec4 = rec2;
    rec1.show();
    rec2.show();
    rec3.show();
    rec4.show();
    return 0;
}
