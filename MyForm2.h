#pragma once
#include "MyForm4.h"

#include "advising.h"
#include <fstream>
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
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ComboBox^ course;

	private: System::Windows::Forms::Button^ select;
	private: System::Windows::Forms::Label^ label2;


	private: System::ComponentModel::IContainer^ components;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->course = (gcnew System::Windows::Forms::ComboBox());
			this->select = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Firebrick;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(847, 59);
			this->panel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"welcome !";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(515, 163);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(234, 74);
			this->button2->TabIndex = 3;
			this->button2->Text = L"set schedule";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(515, 353);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(234, 74);
			this->button3->TabIndex = 5;
			this->button3->Text = L"view schedule";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(20, 119);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(323, 404);
			this->richTextBox2->TabIndex = 6;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &MyForm2::richTextBox2_TextChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// course
			// 
			this->course->FormattingEnabled = true;
			this->course->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"programming", L"Math" });
			this->course->Location = System::Drawing::Point(77, 268);
			this->course->Name = L"course";
			this->course->Size = System::Drawing::Size(171, 24);
			this->course->TabIndex = 7;
			this->course->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox1_SelectedIndexChanged);
			// 
			// select
			// 
			this->select->Location = System::Drawing::Point(134, 379);
			this->select->Name = L"select";
			this->select->Size = System::Drawing::Size(75, 23);
			this->select->TabIndex = 8;
			this->select->Text = L"select";
			this->select->UseVisualStyleBackColor = true;
			this->select->Click += gcnew System::EventHandler(this, &MyForm2::select_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Brown;
			this->label2->Location = System::Drawing::Point(16, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(354, 23);
			this->label2->TabIndex = 9;
			this->label2->Text = L"note: you need to set the schedule first !";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 573);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->select);
			this->Controls->Add(this->course);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel2);
			this->Name = L"MyForm2";
			this->Text = L"instructor view";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {

	}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm4^ f2 = gcnew MyForm4();
	f2->ShowDialog();
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	/*fstream file;
	file.open("habiba.txt");
	int value;
	file >> value;
	this->label2->Text = value + "";*/
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	/*fstream file;
	file.open("habiba.txt");
	int value;
	file >>value;
	if (value == 1234) {
    this->label2->Text =  "programming"+value;
	}
	*/
	//int value = Convert::ToInt32(textBox1->Text);
	//string file = to_string(value) + ".txt";
	//fstream filee;
	//filee.open(file);
	////filee << "success";
	
	//while (!filee.eof()) {
	//	getline(filee, text1);
	//	text += text1 + "\n";
	//}

	//this->->Text = marshal_as<String^>(text);
    string  text;
	string text1;
	advising object;
	object.Temp();
	string id=object.Temp();
	string hh;
	fstream fun;
	fun.open(id + ".txt");
	while (!fun.eof()) {
		getline(fun, text1);
		text += text1+"\n";
	}
	//fun >> text;
	//getline(fun, hh);
	this->richTextBox2->Text = marshal_as<String^>(text);
	/*string  file = id+".txt";
	string text;
	fstream filee;
	filee.open(file);*/

	/*string text1;
	while (!fil.eof()) {
		getline(fil, text1);
		text += text1 + "\n";
	}*/
	

}



private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {




}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	/*int value = Convert::ToInt32(comboBox1->Text);
	string file = to_string(value) + ".txt";
	fstream filee;
	filee.open("haya.txt");
	filee << value;*/
	//this->comboBox1->Text = marshal_as<String^>("haya.txt");

}
private: System::Void select_Click(System::Object^ sender, System::EventArgs^ e) {
	int value = Convert::ToInt32(course->Text);
	string file = to_string(value) + ".txt";
	fstream filee;
	filee.open("haya.txt");
	filee << value;
}
};
}
