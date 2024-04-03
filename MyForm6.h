#pragma once
#include<fstream>
#include <string>
#include"Students.h"
#include <msclr\marshal_cppstd.h>
using namespace std;
using namespace System;
using namespace msclr::interop;
using namespace std;
namespace GuiAdvising {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(30, 25);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(309, 408);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm6::richTextBox1_TextChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(457, 25);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(321, 408);
			this->richTextBox2->TabIndex = 3;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &MyForm6::richTextBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(153, 439);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"view schedule 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(626, 439);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"view schedule 2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm6::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 493);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(229, 29);
			this->button3->TabIndex = 6;
			this->button3->Text = L"choose schedule 1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm6::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 539);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(229, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"choose schedule 2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm6::button4_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Brown;
			this->panel1->Controls->Add(this->button5);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 587);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(815, 72);
			this->panel1->TabIndex = 8;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(672, 20);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(121, 30);
			this->button5->TabIndex = 0;
			this->button5->Text = L"back to sign in";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm6::button5_Click);
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(815, 659);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm6";
			this->Text = L"choose";
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Students object;
		object.choose1();
	}
private: System::Void MyForm6_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {




}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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
	//fun >> text;
	//getline(fun, hh);
	this->richTextBox1->Text = marshal_as<String^>(text);
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
	//fun >> text;
	//getline(fun, hh);
	this->richTextBox2->Text = marshal_as<String^>(text);
}
private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	/*string  text;
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
	student.close();*/
	Students object;
	object.choose2();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
};
}
