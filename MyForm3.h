#pragma  once
#include "MyForm6.h"
#include <fstream>
#include <string>
#include"advising.h"
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
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ transcript;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->transcript = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(248, 556);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"view schedule";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Firebrick;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(421, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(176, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"set schedule";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(85, 113);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(277, 420);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// transcript
			// 
			this->transcript->Location = System::Drawing::Point(621, 113);
			this->transcript->Name = L"transcript";
			this->transcript->Size = System::Drawing::Size(279, 420);
			this->transcript->TabIndex = 3;
			this->transcript->Text = L"";
			this->transcript->TextChanged += gcnew System::EventHandler(this, &MyForm3::richTextBox2_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(754, 556);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 25);
			this->button3->TabIndex = 4;
			this->button3->Text = L"view transcript";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Brown;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 607);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(994, 72);
			this->panel1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Brown;
			this->label1->Location = System::Drawing::Point(36, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(355, 26);
			this->label1->TabIndex = 6;
			this->label1->Text = L"you need to set your schedule first !\r\n";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(994, 679);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->transcript);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm3";
			this->Text = L"student";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		string  text;
		string text1;
		string id;
		fstream habiba;
		habiba.open("temp.txt");
		getline(habiba, id);
		//string hh;
		fstream fun;
		fun.open(id + ".txt");
		while (!fun.eof()) {
			getline(fun, text1);
			text += text1 + "\n";
		}
		//fun >> text;
		//getline(fun, hh);
		this-> richTextBox1 ->Text = marshal_as<String^>(text);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm6^ f2 = gcnew MyForm6;
		f2->ShowDialog();
		/*string id;
		fstream habiba;
		habiba.open("temp.txt");
		getline(habiba, id);
		if (id != "202299999") {
			button2->Enabled = false;
		}*/
	}
	private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	advising object;
	string id= object.Temp();
	Students oobject;
	oobject.searchTranscript(id);
	string  text;
	string text1;
	fstream fun;
	fun.open(id + "transcript.txt");
	while (!fun.eof()) {
		getline(fun, text1);
		text += text1 + "\n";
	}
	this->transcript->Text = marshal_as<String^>(text);

}
};
}
