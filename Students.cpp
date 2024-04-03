#include "Students.h"
// advisingg.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//#include"Student.h"
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<cstdlib>
#include<vector>
using namespace std;
Students::Students() {
}
Students::~Students() {
}
bool Students::SearchForLetterF(string filename) {
	fstream file;
	file.open(filename);
	ifstream fileout(filename);
	char letter;
	bool found = false;
	while (fileout.get(letter)) {
		if (letter == 'F') {
			found = true;
			break;
		}
	}

	file.close();
	return found;
};

bool Students::GPA(string filename) {
	string gpa = "GPA: ";
	string line;
	string tempp;
	bool found = false;
	fstream file;
	file.open(filename);
	ifstream fileout(filename);
	while (getline(fileout, line))
	{
		size_t pos = line.find(gpa);
		if (pos != string::npos) {
			//storing those subjects in an array
			tempp = line.substr(4, 10);

		}
	}
	const char* str1 = tempp.c_str();
	double studentgpa = atof(str1);
	if (studentgpa < 2.00) {
		found = true;
	}
	return found;
};



//bool Advising::searchName(string file, string Name) {
//	string line;
//	fstream files;
//	files.open(file);
//	ifstream filesout(file);
//	while (getline(filesout, line))
//	{
//		size_t pos = line.find(Name);
//		if (pos != string::npos) {
//			return true;
//		}
//		return false;
//	}
//}

void Students::searchTranscript(string id)
{
	string filenames[3] = { "transcript1.txt", "transcript2.txt", "transcript3.txt" }; // array of filenames
	ifstream file; 
	bool found = false; 

	for (int i = 0; i < 3; i++) 
	{
		file.open(filenames[i].c_str()); 

		if (file.fail()) 
		{
			
			continue; 
		}

		string line;
		string line3;
		while (getline(file, line)) 
		{
			if (line.find(id) != string::npos) 
			{

				line3 = filenames[i];
				found = true; 

				break; 
			}
		}
		

		string line2;
		fstream fileinn;
		fileinn.open(line3);
		ifstream fileoutt;
		fstream filein;
		filein.open(id + "transcript.txt");
		while (getline(fileinn, line2)) {
			filein << line2 << endl;
		}


		file.close(); 

		if (found)
		{
			break;
		}
	}
	if (!found) 
	{
		cout << id << " not found in any file" << endl;

	}
}
void Students::searchID(string id)
{
	string filenames[3] = { "transcript1.txt", "transcript2.txt", "transcript3.txt" }; // array of filenames
	ifstream file; 
	bool found = false; 

	for (int i = 0; i < 3; i++) 
	{
		file.open(filenames[i].c_str()); 

		if (file.fail()) 
		{
			cout << "Error opening file: " << filenames[i] << endl;
			continue;
		}

		string line;
		fstream filein;
		filein.open("chosen.txt");
		ifstream fileout;
		while (getline(file, line)) 
		{
			if (line.find(id) != string::npos) 
			{
				filein << filenames[i];
				found = true; 
				break; 
			}
		}

		file.close(); 

		if (found) 
		{
			break;
		}
	}
	if (!found) 
	{
		cout << id << " not found in any file" << endl;

	}

}
void Students::fillarray(string arr1[6][5], string arr2[6][5]) {//fills an array from the file for the schdule
	ifstream data;
	data.open("grp1.txt");
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			data >> arr1[i][j];
		}
	}

	data.close();
	ifstream data2;
	data2.open("grp2.txt");
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			data2 >> arr2[i][j];
		}
	}
	data2.close();

};
void Students::displaygrade(string arr[], int size) {
	ifstream Grade;//Transcript array 
	Grade.open("Admin grades.txt");
	if (!Grade.is_open()) {
		cout << "Error opening Admin grades.txt" << endl;
		return;
	}
	for (int i = 0; i < 20; i++) {
		string kalam;
		getline(Grade, kalam);
		arr[i] = kalam;



	}
	Grade.close();
	int count = 0;
	ofstream transcript("transcript3.txt");
	if (!transcript.is_open()) {
		cout << "Error opening T.txt" << endl;
		return;
	}
	transcript << arr[0] << endl;
	transcript << arr[1] << endl;
	for (int i = 2; i <= 20; i++) {
		transcript << left << setw(20) << arr[i] << left << setw(20);
		count++;
		if (count % 3 == 0) {
			transcript << endl;
		}
	}
	transcript.close();
};
void Students::displayschedules(string arr1[6][5], string arr2[6][5]) {//displays the two schedules on the console for the student to choose
	cout << "Group 101 " << endl;
	cout << endl;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			cout << left << setw(10) << arr1[i][j] << "   ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Group 102 " << endl;
	cout << endl;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			cout << left << setw(10) << arr2[i][j] << "   ";
		}
		cout << endl;
	}
};
void Students::choose1() { //saves the choice of the student into a file
	/*ofstream data;
	data.open("202202743.txt");
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			data << left << setw(10) << arr[i][j] << "   ";
		}
		data << endl;
	}*/
	string  text;
	string text1;
	string id;
	fstream fil;
	fil.open("temp.txt");
	getline(fil, id);
	string hh;
	fstream fun;
	fun.open("haya.txt");
	while (!fun.eof()) {
		getline(fun, text1);
		text += text1 + "\n";
	}
	fstream student;
	student.open(id + ".txt");
	student << text;
	student.close();
};
void Students::choose2() { //saves the choice of the student into a file
	/*ofstream data2("schedule.txt");
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			data2 << left << setw(10) << arr[i][j] << "   ";
		}
		data2 << endl;
	}
	data2.close();*/

	string  text;
	string text1;
	string id;
	fstream fil;
	fil.open("temp.txt");
	getline(fil, id);
	string hh;
	fstream fun;
	fun.open("habiba.txt");
	while (!fun.eof()) {
		getline(fun, text1);
		text += text1 + "\n";
	}
	fstream student;
	student.open(id + ".txt");
	student << text;
	student.close();
};
void Students::regular() {
	int size = 5;//instructor, advising el bey7ded
	string SCHEDULE[6][5];
	string SCHEDULE2[6][5];
	string grade[16];
	fillarray(SCHEDULE, SCHEDULE2);
	displayschedules(SCHEDULE, SCHEDULE2);
	int student_choiceof_schedule;
	//cout << "Which schedule do u wish to choose, 101 or 102?" << endl;
	//cin >> student_choiceof_schedule;
	if (student_choiceof_schedule == 101) {
		choose1();


	}
	else if (student_choiceof_schedule == 102) {
		choose2();
	}
	else {
		cout << "No schedule matches your input!" << endl;
	}
	displaygrade(grade, size);



};

void Students::checkGPA(double gpa)
{
	if (gpa < 2.0)
	{
		return;
	}
}

void Students::createtablewith1(string* arr)
{
	ifstream failedsubout("transcript2.txt");
	string line2;
	string removedsub[5];
	int f = 0;
	fstream table1;
	table1.open("table1.txt", ios::in);
	ifstream table1out("table1.txt");
	while (getline(failedsubout, line2))
	{

		//failed csc
		ifstream newfile;
		newfile.open("table15.txt");
		if (newfile.fail())
		{
			cout << "failed to open the file";

		}
		newfile.seekg(530, ios::beg);
		int count = 0;
		while (count < 10)
		{
			getline(newfile, arr[count]);
			count++;

		}
		newfile.close();
		for (int k = 0; k < count; k++)
		{
			table1 << arr[k] << endl;;
		}
	}
}
void Students::createtablewith2(string* arr)
{
	//failed physics
	ifstream newfile;
	newfile.open("table15.txt");
	fstream table2;
	table2.open("table2.txt", ios::in);
	ifstream table2out("table2.txt");
	if (newfile.fail())
	{
		cout << "failed to open the file";

	}
	newfile.seekg(0, ios::beg);
	int count = 0;
	while (count < 10)
	{
		getline(newfile, arr[count]);
		count++;

	}
	newfile.close();
	for (int k = 0; k < count; k++)
	{
		table2 << arr[k] << endl;
	}
}
void Students::createtablewith3(string* arr)
{
	fstream table3;
	table3.open("table3.txt", ios::in);
	ifstream table3out("table3.txt");
	//failed any subject that is not prerequisite
	ifstream newfile;
	newfile.open("table15.txt");
	if (newfile.fail())
	{
		cout << "failed to open the file";

	}
	newfile.seekg(1050, ios::beg);
	int count = 0;
	while (count < 10)
	{
		getline(newfile, arr[count]);
		count++;

	}
	newfile.close();
	for (int k = 0; k < count; k++)
	{
		table3 << arr[k] << endl; ;
	}
}
void Students::createtablewith4(string* arr)
{
	fstream table4;
	table4.open("table4.txt", ios::in);
	ifstream table4out("table4.txt");
	//failed EAP
	ifstream newfile;

	/*ofstream schedule;
	schedule.open("table10.txt", ios::app);
	schedule.close();*/

	newfile.open("table15.txt");
	if (newfile.fail())
	{
		cout << "failed to open the file";
		return;
	}

	newfile.seekg(1570, ios::beg);
	int count = 0;
	while (count < 10)
	{
		getline(newfile, arr[count]);
		count++;

	}
	newfile.close();
	for (int k = 0; k < count; k++)
	{
		table4 << arr[k] << endl;
	}
}
void Students::removingsubs() {
	ifstream failedsubout("transcript2.txt");
	string line2;
	string removedsub[5];
	int f = 0;

	while (getline(failedsubout, line2))
	{
		size_t pos = line2.find("F");
		if (pos != string::npos) {
			//storing those subjects in an array
			removedsub[f] = line2.substr(0, 7);
			f++;

		}

	}
	string arr[3] = { "table1.txt","table2.txt" ,"table4.txt" };
	string line;
	fstream file;
	string line3;

	for (int i = 0; i < 3; i++) // loop through all 3 files
	{

		file.open(arr[i].c_str()); // open file for reading
		ifstream fileout(arr[i]);
		while (getline(fileout, line)) // read each line in the file
		{
			if ((line.find(removedsub[0]) != string::npos) || (line.find(removedsub[1]) != string::npos))// check if name is found in the line
			{
				line3 = arr[i];
				break;
			}



		}

	}
	
	fstream in;
	in.open(line3);
	ifstream outline(line3);
	string tables;
	string  text;
	string id;
	fstream fil;
	fil.open("temp.txt");
	getline(fil, id);
	fstream final;
	final.open(id+".txt");
	ifstream finalout("202207542.txt");
	string text1;
	while (getline(outline, text1)) {
		//final << outt << endl;
		text += text1 + "\n";
		
		//cout << tables << endl;
	}
	fstream student;
	student.open(id + ".txt");
	student << text;
	student.close();

}

void Students::failed()
{
	string id;
	fstream fil;
	fil.open("temp.txt");
	getline(fil, id);

	ifstream failedsubout("transcript2.txt");
	fstream final;
	final.open(id+".txt");
	//ifstream finalout("202207542.txt");
	string line2;
	string removedsub[5];
	int f = 0;
	while (getline(failedsubout, line2))
	{
		size_t pos = line2.find("F");
		if (pos != string::npos) {
			//storing those subjects in an array
			removedsub[f] = line2.substr(0, 7);
			f++;

		}

	}
	string notpre[2] = { "ethics ","prob   " };
	string outt;
	fstream table;
	table.open("table3.txt");
	ifstream tableout("table3.txt");
	ifstream preout("pre.txt");
	string line;
	string pre;
	if (((notpre[0] == removedsub[0]) && (notpre[1] == removedsub[1])) || ((notpre[1] == removedsub[0]) && (notpre[0] == removedsub[1]))) {
		while (getline(tableout, outt)) {
			final << outt << endl;
		}
	}
	while (getline(preout, line))
	{
		if (line.find(removedsub[0]) != string::npos) {

			removingsubs();
			break;

		}


	}
}

void Students::probation() {
	//student's transcript file.
	string subject[5] = { "Artificial Intellegence","Statistical Analysis","Image Processing    ","Software Engineering","Ethics              " };
	string grade[5] = { "F","B","C+","C-","B-" };
	double GPA = 1.988;
	string ID = "202200593";
	fstream transcript;
	transcript.open("transcript1.txt", ios::in);
	transcript << "ID:  " << ID << endl;
	for (int i = 0; i < 5; ++i) {
		transcript << subject[i] << "\t|\t" << grade[i] << "\n";
	}
	transcript << "GPA:" << GPA << endl;
	transcript.close();
	//searching for failed subjects
	ifstream transcriptout("transcript1.txt");
	string gradeF;
	string line;
	gradeF = "F";
	string failed[5];
	int j = 0;
	while (getline(transcriptout, line))
	{
		size_t pos = line.find(gradeF);
		//storing failed subjects in an array
		if (pos != string::npos) {
			failed[j] = line.substr(0, 23);
			j++;
		}
	}
	//elective choice
	string elective;
	int choice = 0;
	if (choice == 0) {
		elective = { "Business Model" };
	}
	else {
		elective = { "Desktop Publishing" };
	}
	fstream final;
	final.open("202200593.txt");
	ifstream finalout("202200593.txt");
	string sub[5] = { "Software Project Management","Machine Learning","Theory of Computation & Compiler Design","Desktop Publishing","Business Modeling" };
	string time[5] = { "8:30 10:30","10:30 12:00","1:00 2:00","2:30 4:00","4:00 6:00" };
	string day[6] = { "Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday" };
	if (j == 0) {
		if (choice == 0) {
			fstream scheduleneww;
			scheduleneww.open("scheduleneww.txt", ios::in);
			scheduleneww << "\t\t\t\t\t\t\t" << "|" << day[0] << "\t\t\t" << "| " << day[1] << "\t\t\t" << "| " << day[2] << "\t\t\t" << "| " << day[3] << "\t\t\t\t\t" << "| " << day[4] << "\t\t\t\t" << "| " << day[5] << "\n";
			scheduleneww << sub[0] << "\t\t\t\t\t\t" << time[0] << "/" << time[1] << "" << "| " << time[0] << "" << "| " << "\t\t\t\t" << time[0] << "" << "| " << "\t\t\t\t" << "| " << "\t\t\t\t" << "| " << "\n";
			scheduleneww << sub[1] << "\t\t\t\t\t" << time[2] << "/" << time[3] << "" << "| " << time[1] << "" << "| " << "\t\t\t\t" << time[1] << "" << "| " << "\t\t\t\t" << "| " << "\t\t\t\t" << "| " << "\n";
			scheduleneww << sub[2] << "\t\t\t\t\t" << "\t\t\t\t\t" << "" << "| " << time[3] << "/" << time[2] << "| " << "\t\t\t\t" << time[2] << "" << "| " << "\t\t\t\t" << "| " << time[0] << "" << "| " << "\n";
			scheduleneww << elective << "\t\t\t\t\t" << "\t\t\t\t\t" << "" << "| " << "\t\t\t\t\t" << "" << "| " << time[3] << "/" << time[4] << "| " << time[0] << "" << "| " << "\t\t\t\t" << "| " << time[0] << "" << "| " << "\n";
			ifstream schedulenewwout("scheduleneww.txt");
			string line7;
			while (getline(schedulenewwout, line7)) {
				cout << line7 << endl;

			}
			scheduleneww.close();
		}
		else if (choice == 1) {
			fstream scheduleneww2;
			scheduleneww2.open("scheduleneww2.txt", ios::in);
			scheduleneww2 << "\t\t\t" << "" << day[0] << "\t\t\t" << "| " << day[1] << "\t\t\t" << "| " << day[2] << "\t\t\t" << "| " << day[3] << "\t\t\t\t\t" << "| " << day[4] << "\t\t\t\t" << "| " << day[5] << "\n";
			scheduleneww2 << sub[0] << "\t\t\t" << time[0] << "/" << time[1] << "" << "| " << time[0] << "" << "| " << "\t\t\t\t" << time[0] << "" << "| " << "\t\t\t\t" << "| " << "\t\t\t\t" << "| " << "\n";
			scheduleneww2 << sub[1] << "\t\t" << time[2] << "/" << time[3] << "" << "| " << time[1] << "" << "| " << "\t\t\t\t" << time[1] << "" << "| " << "\t\t\t\t" << "| " << "\t\t\t\t" << "| " << "\n";
			scheduleneww2 << sub[2] << "\t\t" << "\t\t\t\t\t" << "" << "| " << time[2] << "/" << time[3] << "| " << "\t\t\t\t" << time[2] << "" << "| " << "\t\t\t\t" << "| " << time[0] << "" << "| " << "\n";
			scheduleneww2 << elective << "\t\t" << "\t\t\t\t\t" << "" << "| " << "\t\t\t\t" << "" << "| " << "\t\t\t\t" << time[3] << "" << "| " << time[0] << "/" << time[1] << "| " << time[1] << "" << "| " << "\n";
			ifstream scheduleneww2out("scheduleneww2.txt");
			string line8;
			while (getline(scheduleneww2out, line8)) {
				cout << line8 << endl;

			}
			scheduleneww2.close();
		}
	}
	else {
		//All prerequisites and subjects for student's next semester
		string pre[5] = { "Data Structures & Algorithms","Discrete Mathematics & linear algebra","Artificial Intellegence" };
		//file storing subjects and their prerequisties
		fstream semester2;
		semester2.open("semester2.txt", ios::in);
		semester2 << sub[0] << "\t\t\t\t|\t" << "\n";
		semester2 << sub[1] << "\t\t\t\t\t\t|\t" << pre[2] << "\n";
		semester2 << sub[2] << "\t|\t" << pre[0] << "\n";
		semester2 << sub[2] << "\t|\t" << pre[1] << "\n";
		semester2 << sub[3] << "\t\t\t\t\t\t|\t" << "\n";
		semester2 << sub[4] << "\t\t\t\t\t\t|\t" << "\n";
		semester2.close();
		//searching for subjects in semester2 which require prerequisties that student failed in semester1
		ifstream semester2out("semester2.txt");
		string line2;
		string removedsub[5];
		int f = 0;
		for (int n = 0; n < 5; ++n) {
			while (getline(semester2out, line2))
			{
				size_t pos = line2.find(failed[n]);
				if (pos != string::npos) {
					//storing those subjects in an array
					removedsub[f] = line2.substr(0, 22);
					n++;
					break;
				}
			}
			break;
		}

		//second semster subjects
		fstream schedule;
		schedule.open("sem2.txt", ios::in);
		schedule << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << "|" << day[0] << "\t\t\t\t\t\t\t" << "| " << day[1] << "\t\t\t\t\t\t\t" << "| " << day[2] << "\t\t\t\t\t\t\t" << "| " << day[3] << "\t\t\t\t\t\t\t" << "| " << day[4] << "\t\t\t\t\t\t\t" << "| " << day[5] << "\n";
		schedule << sub[0] << "\t\t\t\t\t\t\t" << time[0] << "/" << time[1] << "\t" << "| " << time[0] << "\t" << "| " << "\t\t\t\t\t\t\t" << time[0] << "\t" << "| " << "\t\t\t\t\t\t\t" << "| " << "\t\t\t\t\t\t\t" << "| " << "\n";
		schedule << sub[1] << "\t\t\t\t\t\t\t" << time[2] << "/" << time[3] << "\t" << "| " << time[1] << "\t" << "| " << "\t\t\t\t\t\t\t" << time[1] << "\t" << "| " << "\t\t\t\t\t\t\t" << "| " << "\t\t\t\t\t\t\t" << "| " << "\n";
		schedule << sub[2] << "\t\t\t\t\t\t\t" << "\t\t\t\t\t\t\t" << "\t" << "| " << time[2] << "/" << time[3] << "\t" << "| " << "\t\t\t\t\t\t\t" << time[2] << "\t" << "| " << "\t\t\t\t\t\t\t" << "| " << time[0] << "\t" << "| " << "\n";
		schedule << sub[3] << "\t\t\t\t\t\t\t" << "\t\t\t\t\t\t\t" << "\t" << "| " << "\t\t\t\t\t\t\t" << "\t" << "| " << time[3] << " / " << time[4] << "| " << time[0] << "\t" << "| " << "\t\t\t\t\t\t\t" << "| " << time[1] << "\t" << "| " << "\n";
		schedule << sub[4] << "\t\t\t\t\t\t\t" << "\t\t\t\t\t\t\t" << "\t" << "| " << "\t\t\t\t\t\t\t" << "\t" << "| " << "\t\t\t\t\t\t\t" << "\t\t\t\t\t\t\t" << "\t" << "| " << time[0] << "| " << time[2] << "/" << time[3] << "| " << time[4] << "| " << "\n";
		//first semester subjects
		string sub2[5] = { "Statistical Analysis","Artificial Intellegence","Image Processing ","Software Engineering","Ethics " };
		fstream schedule2;
		schedule2.open("sem1.txt", ios::in);
		schedule2 << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << "|" << day[0] << "\t\t\t\t\t\t\t" << "| " << day[1] << "\t\t\t\t\t\t\t" << "| " << day[2] << "\t\t\t\t\t\t\t" << "| " << day[3] << "\t\t\t\t\t\t\t" << "| " << day[4] << "\t\t\t\t\t\t\t" << "| " << day[5] << "\n";
		schedule2 << sub2[0] << "\t\t\t\t\t\t\t" << time[0] << "/" << time[1] << "\t" << "| " << time[0] << "\t" << "| " << "\t\t\t\t\t\t\t" << time[0] << "\t" << "| " << "\t\t\t\t\t\t\t" << "| " << "\t\t\t\t\t\t\t" << "| " << "\n";
		schedule2 << sub2[1] << "\t\t\t\t\t\t\t" << time[2] << "/" << time[3] << "\t" << "| " << time[1] << "\t" << "| " << "\t\t\t\t\t\t\t" << time[1] << "\t" << "| " << "\t\t\t\t\t\t\t" << "| " << "\t\t\t\t\t\t\t" << "| " << "\n";
		schedule2 << sub2[2] << "\t\t\t\t\t\t\t" << "\t\t\t\t\t\t\t" << "\t" << "| " << time[2] << "/" << time[3] << "\t" << "| " << "\t\t\t\t\t\t\t" << time[2] << "\t" << "| " << "\t\t\t\t\t\t\t" << "| " << time[0] << "\t" << "| " << "\n";
		schedule2 << sub2[3] << "\t\t\t\t\t\t\t" << "\t\t\t\t\t\t\t" << "\t" << "| " << "\t\t\t\t\t\t\t" << "\t" << "| " << time[3] << "/" << time[4] << "| " << time[0] << "\t" << "| " << "\t\t\t\t\t\t\t" << "| " << time[1] << "\t" << "| " << "\n";
		schedule2 << sub2[4] << "\t\t\t\t\t\t\t" << "\t\t\t\t\t\t\t" << "\t" << "| " << "\t\t\t\t\t\t\t" << "\t" << "| " << "\t\t\t\t\t\t\t" << "\t\t\t\t\t\t\t" << "\t" << "| " << time[0] << "| " << time[2] << "/" << time[3] << "| " << time[0] << "| " << "\n";
		//storing timing of removed subject in a temporary variable
		ifstream scheduleout("sem2.txt");
		string line3;
		string temp;
		ifstream file("sem1.txt");
		string linne;
		while (std::getline(file, line)) {

			line.erase(remove_if(line.begin(), line.end(), isspace), line.end());

			if (line.find(removedsub[0]) != string::npos) {

				temp = linne.substr(16, 40);
			}
		}
		//storing timing of  subject that student is retaking in a temporary variable
		ifstream schedule2out("sem1.txt");
		string line4;
		string temp2;
		ifstream filee("sem2.txt");
		string linnne;
		while (std::getline(filee, line)) {

			line.erase(remove_if(line.begin(), line.end(), isspace), line.end());

			if (line.find(failed[0]) != string::npos) {

				temp2 = linnne.substr(23, 40);
			}
		}
		//comparing timings with eachother to modify schedule
		const char* str1 = temp.c_str();
		const char* str2 = temp2.c_str();
		int value = strcmp(str1, str2);
		//if timings are equal replace sub[1] with failed[0]
		//remove sub[3] and sub[4] and put elective based on student's choice
		if ((value == 0) && (choice == 0)) {
			fstream schedulenew;
			schedulenew.open("schedulenew.txt", ios::in);
			ifstream schedulenewout("schedulenew.txt");
			string line5;
			while (getline(schedulenewout, line5)) {
				final << line5 << endl;

			}
			schedulenew.close();
		}
		else if ((value == 0) && (choice == 1)) {
			fstream schedulenew2;
			ifstream schedulenew2out("schedulenew2.txt");
			string line6;
			while (getline(schedulenew2out, line6)) {
				final << line6 << endl;

			}
			schedulenew2.close();
		}

	}

}


void Students::studentState(string id) {

	searchID(id);
	fstream file;
	file.open("chosen.txt");
	ifstream fileout("chosen.txt");
	string student[1];
	string line;
	while (getline(fileout, line)) {
		student[0] = line;
	}

	if ((SearchForLetterF(student[0]) == 0) && (GPA(student[0]) == 0)) {
		regular();
	}
	else if ((GPA(student[0]) == 0) && (SearchForLetterF(student[0]) == 1)) {
		failed();
	}
	else {
		probation();
	}

};










