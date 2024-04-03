#pragma once
//#include "MyForm2.h"
#include "advising.h"
#include <fstream>
#include <iostream>
using namespace std;
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
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Label^ label1;





	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button25;













	protected:
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
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button25 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(32, 177);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 57);
			this->button1->TabIndex = 0;
			this->button1->Text = L"8:00 to 10;00";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click_2);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(32, 417);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 57);
			this->button2->TabIndex = 1;
			this->button2->Text = L"1:00 to 3:00";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(461, 304);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 57);
			this->button3->TabIndex = 2;
			this->button3->Text = L"10:00 to 12:00";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(321, 302);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 57);
			this->button4->TabIndex = 3;
			this->button4->Text = L"10:00 to 12:00";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm4::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(32, 302);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 57);
			this->button5->TabIndex = 4;
			this->button5->Text = L"10:00 to 12:00";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm4::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(461, 177);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(93, 57);
			this->button6->TabIndex = 5;
			this->button6->Text = L"8:00 to 10:00";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm4::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(321, 177);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(93, 57);
			this->button7->TabIndex = 6;
			this->button7->Text = L"8:00 to 10:00";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm4::button7_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::Brown;
			this->richTextBox1->Location = System::Drawing::Point(330, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(202, 28);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"choose at most 12 slots";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm4::richTextBox1_TextChanged);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(312, 417);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(93, 57);
			this->button8->TabIndex = 8;
			this->button8->Text = L"1:00 to 3:00";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm4::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(461, 417);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(93, 57);
			this->button9->TabIndex = 9;
			this->button9->Text = L"1:00 to 3:00";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm4::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(596, 177);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(93, 57);
			this->button10->TabIndex = 10;
			this->button10->Text = L"8:00 to 10:00";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm4::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(596, 304);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(93, 57);
			this->button11->TabIndex = 11;
			this->button11->Text = L"10:00 to 12:00";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm4::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(596, 417);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(93, 57);
			this->button12->TabIndex = 12;
			this->button12->Text = L"1:00 to 3:00";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm4::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(743, 177);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(93, 57);
			this->button13->TabIndex = 13;
			this->button13->Text = L"8:00 to 10:00";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm4::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(743, 304);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(93, 57);
			this->button14->TabIndex = 14;
			this->button14->Text = L"10:00 to 12:00";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm4::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(743, 417);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(93, 57);
			this->button15->TabIndex = 15;
			this->button15->Text = L"1:00 to 3:00";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm4::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(165, 177);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(93, 57);
			this->button16->TabIndex = 16;
			this->button16->Text = L"8:00 to 10:00";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm4::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(165, 302);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(93, 57);
			this->button17->TabIndex = 17;
			this->button17->Text = L"10:00 to 12:00";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm4::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(165, 417);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(93, 57);
			this->button18->TabIndex = 18;
			this->button18->Text = L"1:00 to 3:00";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm4::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(32, 523);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(93, 57);
			this->button19->TabIndex = 19;
			this->button19->Text = L"3:00 to 6:00";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm4::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(165, 523);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(93, 57);
			this->button20->TabIndex = 20;
			this->button20->Text = L"3:00 to 6:00";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm4::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(312, 523);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(93, 57);
			this->button21->TabIndex = 21;
			this->button21->Text = L"3:00 to 6:00";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm4::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(461, 523);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(93, 57);
			this->button22->TabIndex = 22;
			this->button22->Text = L"3:00 to 6:00";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm4::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(594, 523);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(93, 57);
			this->button23->TabIndex = 23;
			this->button23->Text = L"3:00 to 6:00";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm4::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(747, 523);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(93, 57);
			this->button24->TabIndex = 24;
			this->button24->Text = L"3:00 to 6:00";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm4::button24_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 23);
			this->label1->TabIndex = 25;
			this->label1->Text = L"saturday";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(187, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 23);
			this->label7->TabIndex = 31;
			this->label7->Text = L"sunday";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm4::label7_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(326, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 23);
			this->label2->TabIndex = 32;
			this->label2->Text = L"monday";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(457, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 23);
			this->label3->TabIndex = 33;
			this->label3->Text = L"tuesday";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(589, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 23);
			this->label4->TabIndex = 34;
			this->label4->Text = L"wednesday";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(743, 92);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 23);
			this->label5->TabIndex = 35;
			this->label5->Text = L"thursday";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Brown;
			this->panel1->Controls->Add(this->button25);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 621);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(890, 73);
			this->panel1->TabIndex = 36;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(733, 18);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(107, 27);
			this->button25->TabIndex = 0;
			this->button25->Text = L"back to sign in";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm4::button25_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 694);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm4";
			this->Text = L"instructor choice";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//label2->Text = textBox1->Text;
	//label2->Text=
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	//string id;
	//fstream fil;
	//fil.open("temp.txt");
	//getline(fil, id);
	//string hh;
	//fstream fun;
	//fun.open(id+".txt");
	////getline(fun, hh);
	string num = "8 to 10 sat\n" ;
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button1->Text = L"reserved";
	
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "8 to 10 mon\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button7->Text = L"reserved";

}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	string id;
	fstream fil;
	fil.open("temp.txt");
	getline(fil, id);
	string hh;
	fstream fun;
	fun.open(id + ".txt", std::ios_base::app);
	//getline(fun, hh);
	string num = "8 to 10 sun\n";
	fun << num;
	this->button16->Text = L"reserved";
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	string num = "1 to 3 sat\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button2->Text = L"reserved";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "8 to 10 tue\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button6->Text = L"reserved";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "8 to 10 wed\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button10->Text = L"reserved";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "8 to 10 thu\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button13->Text = L"reserved";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "10 to 12 sat\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button5->Text = L"reserved";
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "10 to 12 sun\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button17->Text = L"reserved";
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "1 to 3 sun\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button18->Text = L"reserved";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "10 to 12 tue\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button3->Text = L"reserved";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "1 to 3 tue\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button9->Text = L"reserved";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "10 to 12 mon\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button4->Text = L"reserved";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "1 to 3 mon\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button8->Text = L"reserved";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "10 to 12 wed\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button11->Text = L"reserved";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "1 to 3 wed\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button12->Text = L"reserved";
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "10 to 12 thu\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button14->Text = L"reserved";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "1 to 3 thu\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button15->Text = L"reserved";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "4 to 6 sat\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button19->Text = L"reserved";
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "4 to 6 sun\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button20->Text = L"reserved";
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "4 to 6 mon\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button21->Text = L"reserved";
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "4 to 6 tue\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button22->Text = L"reserved";
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "4 to 6 wed\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button23->Text = L"reserved";
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	string num = "4 to 6 thu\n";
	//fun << num; 
	advising object;
	object.writescheduletofile(num);
	this->button24->Text = L"reserved";
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
};
}
