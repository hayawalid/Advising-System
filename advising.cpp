#include "advising.h"
#include <iostream>
#include<iostream>
#include <string>
#include <iomanip>
#include<fstream>
#include<string>
using namespace std;


advising::advising() {
    string name="hbrie";
    int ID=567 ;
   
};
advising::advising(string name, int id) {
    string Name = name;
    int ID = id;
};
string advising::Temp() {
    string id;
    fstream fil;
    fil.open("temp.txt");
    getline(fil, id);
    return id;
}

void advising::writescheduletofile(string x)
{
    string id;
    fstream fil;
    fil.open("temp.txt");
    getline(fil, id);
    string hh;
    fstream fun;
    fun.open(id + ".txt", std::ios_base::app);
    fun << x;
};

void advising:: FileToArray(string Slots[12],string id) {
    //string Slots[24];
    
    fstream fil;
    /*fil.open("temp.txt");
    getline(fil, id);*/
    fstream Tim;
    Tim.open(id + ".txt");
    int i = 0;
    for (int i = 0; i < 12; i++) {
        string s;
        getline(Tim, s);
        Slots[i] = s;
    }
}

void advising::Generate (string gadwal[10], string dataStructure[12], string DataBase[12], string oop[12], string CO[12], string SOC[12],string openfile) {
   
        int mat, prog, eng, prob, eth, count = 0;
        static int call_count = 0;
        srand((unsigned)time(0) + call_count);
        call_count++;
        while (count < 1) {
            mat = rand() % 11;
            prog = rand() % 11;
            eng = rand() % 11;
            prob = rand() % 11;
            eth = rand() % 11;
            if (dataStructure[mat] != DataBase[prog] && dataStructure[mat] != oop[eng] && dataStructure[mat] != CO[prob] && dataStructure[mat] !=SOC[eth]
                && DataBase[prog] != oop[eng] && DataBase[prog] != CO[prob] && DataBase[prog] != SOC[eth]
                && oop[eng] != CO[prob] && oop[eng] != SOC[eth]
                && CO[prob] != SOC[eth]) {
                gadwal[1] = dataStructure[mat];
                gadwal[3] = DataBase[prog];
                gadwal[5] = oop[eng];
                gadwal[7] = CO[prob];
                gadwal[9] = SOC[eth];
                gadwal[0] = "Data Structures & Algorithms";
                gadwal[2] = "Database Management Systems";
                gadwal[4] = "Object Oriented Programming";
                gadwal[6] = "Computer Organization";
                gadwal[8] = "computer application";
                    

                count++;

            }

        }
        fstream file;
        

        file.open(openfile+".txt", std::ios_base::app);
        if (file.is_open()) {
            for (int i = 0; i < 10; i++)
            {
                file << gadwal[i] << endl;
            }
            file.close();
        }
    }
//void advising::GenerateToFile(string schedule[5]) {
//    
//        fstream file;
//        file.open("202299999.txt");
//        if (file.is_open()) {
//            for (int i = 0; i < 5; i++)
//            {
//                file << schedule[i] << endl;
//            }
//            file.close();
//        }
//
// }

string advising::coursename(string id) {
    if (id == "202202798")
        return "programming";
    else if (id == "202204444")
        return "Math";
    else if (id == "202201234")
        return "probability";
    else if (id == "202206738")
        return "Physics";
    else if (id == "202299999")
        return "Data Structure";
}










   



   