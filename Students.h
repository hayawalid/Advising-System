#pragma once
#include <string>
using namespace std;
class Students
{
public:

    Students(); // constructor
    ~Students(); // destructor
    //bool searchName(string file, string name);
    void searchID(std::string id);
    void studentState(string id);
    void displaygrade(std::string arr[], int size);
    void fillarray(std::string arr1[6][5], std::string arr2[6][5]);
    void displayschedules(std::string arr1[6][5], std::string arr2[6][5]);
    void choose1();
    void choose2();
    void regular();
    int checkfail(int c);
    void createtablewith1(std::string* arr);
    void createtablewith2(std::string* arr);
    void createtablewith3(std::string* arr);
    void createtablewith4(std::string* arr);
    void removingsubs();
    void failed();
    void probation();
    void checkGPA(double gpa);
    bool SearchForLetterF(std::string filename);
    bool GPA(std::string filename);
    void searchTranscript(string id);

};