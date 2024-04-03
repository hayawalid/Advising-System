#pragma once
#include "MyForm1.h"
namespace GuiAdvising {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ sign;
	private: System::Windows::Forms::Label^ welcome;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->sign = (gcnew System::Windows::Forms::Button());
			this->welcome = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// sign
			// 
			this->sign->BackColor = System::Drawing::Color::Brown;
			this->sign->Font = (gcnew System::Drawing::Font(L"Malgun Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sign->ForeColor = System::Drawing::Color::White;
			this->sign->Location = System::Drawing::Point(367, 219);
			this->sign->Name = L"sign";
			this->sign->Size = System::Drawing::Size(114, 37);
			this->sign->TabIndex = 0;
			this->sign->Text = L"sign in";
			this->sign->UseVisualStyleBackColor = false;
			this->sign->Click += gcnew System::EventHandler(this, &MyForm::sign_Click);
			// 
			// welcome
			// 
			this->welcome->AutoSize = true;
			this->welcome->BackColor = System::Drawing::Color::Transparent;
			this->welcome->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcome->ForeColor = System::Drawing::Color::White;
			this->welcome->Location = System::Drawing::Point(125, 169);
			this->welcome->Name = L"welcome";
			this->welcome->Size = System::Drawing::Size(614, 37);
			this->welcome->TabIndex = 1;
			this->welcome->Text = L"welcome to miu advising system!";
			this->welcome->Click += gcnew System::EventHandler(this, &MyForm::welcome_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(816, 542);
			this->Controls->Add(this->welcome);
			this->Controls->Add(this->sign);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->Text = L"start";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void welcome_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void sign_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm1^ f2 = gcnew MyForm1();
		f2->ShowDialog();
	}
	};
}
