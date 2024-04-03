#pragma once
#include <string.h>
#include<string>
using namespace std;
class advising
{
public:
	void FileToArray(string arr[24], string id);
	int search(string array[][7], int row, int j, int i);
	void Group2(string arr1[][7], int row, bool run, string arr2[][7]);
	void Group1(string arr1[][7], int row, bool run);
	void WriteArrayToFile(string arr[][1]);
	string Name;
	int id;
	void writescheduletofile(string x);
	void Generate(string gadwal[5], string math[12], string programming[12], string english[12], string probability[12], string ethics[12],string openfile);
     advising();
	advising(string name, int id);
	void GenerateToFile(string schedule[5]);
	string Temp();
	string coursename(string id);



};