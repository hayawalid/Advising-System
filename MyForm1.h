#pragma once
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm5.h"
#include "advising.h"
#include "Students.h"
#include<windows.h>
#include <string>
#include<iostream>
#include<fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
using namespace System;
using namespace msclr::interop;



namespace GuiAdvising {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ username;

	private: System::Windows::Forms::TextBox^ textBox1;







	private: System::Windows::Forms::PictureBox^ pictureBox4;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ confirm;


	private: System::Windows::Forms::RadioButton^ student;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;

	//private: System::Windows::Forms::PictureBox^ pictureBox2;

	//private: System::Windows::Forms::PictureBox^ pictureBox1;

	//private: System::Windows::Forms::PictureBox^ pictureBox3;
	//private: System::Windows::Forms::PictureBox^ pictureBox1;
	//private: System::Windows::Forms::PictureBox^ pictureBox2;
	//private: System::Windows::Forms::PictureBox^ pictureBox3;




	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->username = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->confirm = (gcnew System::Windows::Forms::Button());
			this->student = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Brown;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(911, 24);
			this->panel1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(342, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(7, 256);
			this->label2->TabIndex = 3;
			this->label2->Text = L"\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Brown;
			this->panel2->Location = System::Drawing::Point(0, 21);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(28, 447);
			this->panel2->TabIndex = 0;
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->ForeColor = System::Drawing::Color::Brown;
			this->username->Location = System::Drawing::Point(34, 153);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(43, 22);
			this->username->TabIndex = 4;
			this->username->Text = L"ID : ";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(142, 153);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(360, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(503, 30);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(384, 226);
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(634, 320);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(427, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"confirm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// confirm
			// 
			this->confirm->BackColor = System::Drawing::Color::Firebrick;
			this->confirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->confirm->ForeColor = System::Drawing::Color::Transparent;
			this->confirm->Location = System::Drawing::Point(780, 465);
			this->confirm->Name = L"confirm";
			this->confirm->Size = System::Drawing::Size(107, 38);
			this->confirm->TabIndex = 16;
			this->confirm->Text = L"next";
			this->confirm->UseVisualStyleBackColor = false;
			this->confirm->Click += gcnew System::EventHandler(this, &MyForm1::confirm_Click);
			// 
			// student
			// 
			this->student->AutoSize = true;
			this->student->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->student->Location = System::Drawing::Point(308, 465);
			this->student->Name = L"student";
			this->student->Size = System::Drawing::Size(78, 20);
			this->student->TabIndex = 11;
			this->student->TabStop = true;
			this->student->Text = L"student";
			this->student->UseVisualStyleBackColor = true;
			this->student->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::student_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(559, 465);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(88, 20);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"instructor";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(55, 465);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(71, 20);
			this->radioButton1->TabIndex = 20;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Admin";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton1_CheckedChanged);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(910, 526);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->confirm);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->student);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->username);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox4);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void confirm_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//int value = Convert::ToInt32(textBox1->Text);
	//int num;
	//fstream file;
	//file.open("habiba.txt");
	//while (!file.eof()) {
	//	file >> num;
	//	if (value == num) {

	//		//this->textBox2->Text = L"student";
	//		////file.open("102.txt");
	//		break;
	//	}

	//}
	int value = Convert::ToInt32(textBox1->Text);
	if (radioButton2->Checked && Auth(value) == 0) {
		this->Hide();
		MyForm2^ f2 = gcnew MyForm2;
		f2->ShowDialog();
	}
	else if (student -> Checked && Auth(value) == 0) {
		string id;
		fstream fil;
		fil.open("temp.txt");
		getline(fil, id);

		Students object;
		object.studentState(id);
		/*string id;
		fstream habiba;
		habiba.open("temp.txt");
		getline(habiba, id);
		if (id != "202299999") {
			button2->Enabled = false;
		}*/
		this->Hide();
		MyForm3^ f2 = gcnew MyForm3;
		f2->ShowDialog();
	}
	else if (radioButton1->Checked && Auth(value) == 0) {
		this->Hide();
		MyForm5^ f2 = gcnew MyForm5;
		f2->ShowDialog();
	}


}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	/*int num;
	advising object;
	cin >> num;
	object.writescheduletofile(num);*/
}


int Auth(int value) {
		   int result = 1;

		   string num;
		   fstream file;

		   file.open("ID.txt");

		   while (!file.eof()) {
			   getline(file, num);
			   if (to_string(value) == num) {
				   result = 0;

			   }
		   }

		   return result;
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    int value = Convert::ToInt32(textBox1->Text);
	
	if (Auth(value) == 0) {

		string file = to_string(value) + ".txt";
		fstream filee;
		filee.open(file);
		//filee << "success";
		string  text;
		string text1;
		while (!filee.eof()) {
			getline(filee, text1);
			text += text1+"\n";
		}
		
		//this->richTextBox1->Text = marshal_as<String^>(text);

		
		ofstream MyFile("temp.txt");
		MyFile << value;

	}

}
private: System::Void student_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
