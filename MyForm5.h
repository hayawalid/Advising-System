#pragma once
#include "advising.h"
#include<fstream>
#include<string>
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
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ Data;
	private: System::Windows::Forms::RichTextBox^ viewData;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button3;

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
			this->Data = (gcnew System::Windows::Forms::Button());
			this->viewData = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(103, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(268, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"generate schedule 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(103, 364);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(268, 53);
			this->button2->TabIndex = 1;
			this->button2->Text = L"generate schedule 2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm5::button2_Click);
			// 
			// Data
			// 
			this->Data->Location = System::Drawing::Point(538, 542);
			this->Data->Name = L"Data";
			this->Data->Size = System::Drawing::Size(156, 42);
			this->Data->TabIndex = 2;
			this->Data->Text = L"View DataBase";
			this->Data->UseVisualStyleBackColor = true;
			this->Data->Click += gcnew System::EventHandler(this, &MyForm5::Data_Click);
			// 
			// viewData
			// 
			this->viewData->Location = System::Drawing::Point(538, 77);
			this->viewData->Name = L"viewData";
			this->viewData->Size = System::Drawing::Size(391, 459);
			this->viewData->TabIndex = 3;
			this->viewData->Text = L"";
			this->viewData->TextChanged += gcnew System::EventHandler(this, &MyForm5::viewData_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Brown;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(957, 48);
			this->panel1->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Brown;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(802, 569);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 36);
			this->button3->TabIndex = 5;
			this->button3->Text = L"back to sign in";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm5::button3_Click);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(957, 627);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->viewData);
			this->Controls->Add(this->Data);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm5";
			this->Text = L"generate";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		string dr1[12],dr2[12],dr3[12],dr4[12],dr5[12];
		advising object;
		string filee = "habiba";
		string gadwal1[10];
		object.FileToArray(dr1,"202204444");
		object.FileToArray(dr2, "202299999");
		object.FileToArray(dr3, "202202798");
		object.FileToArray(dr4, "202201234");
		object.FileToArray(dr5, "202206738");
		object.Generate(gadwal1,dr1,dr2,dr3,dr4,dr5,filee);
		//object.Generate(gadwal2,dr1,dr2,dr3,dr4,dr5);
		//object.GenerateToFile(gadwal1);
		//object.GenerateToFile(gadwal2);

		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		string dr1[12], dr2[12], dr3[12], dr4[12], dr5[12];
		string file = "Haya";
		advising object;
		string gadwal2[10];
		object.FileToArray(dr1, "202204444");
		object.FileToArray(dr2, "202299999");
		object.FileToArray(dr3, "202202798");
		object.FileToArray(dr4, "202201234");
		object.FileToArray(dr5, "202206738");
		object.Generate(gadwal2, dr1, dr2, dr3, dr4, dr5,file);
	}
	private: System::Void Data_Click(System::Object^ sender, System::EventArgs^ e) {
		string  text;
		string text1;
		string id;
		//string hh;
		fstream fun;
		fun.open( "DataBase.txt");
		while (!fun.eof()) {
			getline(fun, text1);
			text += text1 + "\n";
		}
		//fun >> text;
		//getline(fun, hh);

		this->viewData->Text = marshal_as<String^>(text);
	}
private: System::Void viewData_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
};
}
