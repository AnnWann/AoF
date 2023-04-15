#pragma once
#include "src/Calculus/Calculus.h"
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace CppCLRWinFormsProject {

	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ functiontext;
	protected:

	private: System::Windows::Forms::Label^ label2;
	protected: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ BText;

	private: System::Windows::Forms::TextBox^ AText;

	private: System::Windows::Forms::TextBox^ precisiontext;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	protected:
	private:






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->functiontext = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->BText = (gcnew System::Windows::Forms::TextBox());
			this->AText = (gcnew System::Windows::Forms::TextBox());
			this->precisiontext = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"F(x):";
			// 
			// functiontext
			// 
			this->functiontext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->functiontext->Location = System::Drawing::Point(73, 21);
			this->functiontext->Name = L"functiontext";
			this->functiontext->Size = System::Drawing::Size(520, 30);
			this->functiontext->TabIndex = 1;
			this->functiontext->Text = L"Type the function here; example: \"3*x^2 - 12\"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(220, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Select the method(s):";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::SystemColors::Window;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Rectangle", L"Trapeze", L"Isosceles Pike",
					L"Equilateral Pike", L"Rectangle + Semicircunference", L"Rectangle + Tall Semiellipse", L"Rectangle + Short Semiellipse", L"Rectangle + Tall Semihexagon",
					L"Rectangle + Short Semihexagon"
			});
			this->checkedListBox1->Location = System::Drawing::Point(13, 176);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(244, 174);
			this->checkedListBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(272, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(334, 174);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->BText);
			this->groupBox1->Controls->Add(this->AText);
			this->groupBox1->Controls->Add(this->precisiontext);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->functiontext);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->checkedListBox1);
			this->groupBox1->Location = System::Drawing::Point(32, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(632, 368);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(255, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(338, 32);
			this->label7->TabIndex = 11;
			this->label7->Text = L"This software uses exprtk libraries to evaluate functions. \nTo see visit partow.n"
				L"et/programming/exprtk/";
			// 
			// BText
			// 
			this->BText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BText->Location = System::Drawing::Point(452, 100);
			this->BText->Name = L"BText";
			this->BText->Size = System::Drawing::Size(100, 30);
			this->BText->TabIndex = 10;
			// 
			// AText
			// 
			this->AText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AText->Location = System::Drawing::Point(307, 102);
			this->AText->Name = L"AText";
			this->AText->Size = System::Drawing::Size(100, 30);
			this->AText->TabIndex = 9;
			// 
			// precisiontext
			// 
			this->precisiontext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->precisiontext->Location = System::Drawing::Point(157, 102);
			this->precisiontext->Name = L"precisiontext";
			this->precisiontext->Size = System::Drawing::Size(100, 30);
			this->precisiontext->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(413, 105);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L"B:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(267, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"A:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Precision(n):";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Location = System::Drawing::Point(32, 415);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(632, 253);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Result(s):";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(13, 63);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(583, 161);
			this->textBox2->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(29, 684);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(637, 64);
			this->label8->TabIndex = 7;
			this->label8->Text = L"software developed as an assigment for the University Jorge Amado on the theme of"
				L" function area calculus\r\nusing different methods.\r\nDeveloped by: Uaná Gasparim\r\n"
				L"Guided by: Vicente Cardoso ";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(693, 748);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"AoF";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			double precision, initial_point, end_point;

			precision = System::Convert::ToDouble(precisiontext->Text);
			initial_point = System::Convert::ToDouble(AText->Text);
			end_point = System::Convert::ToDouble(BText->Text);
			std::string function = marshal_as<std::string>(functiontext->Text);

			Calculus calculationObj(precision, initial_point, end_point, function);
			bool methods[9]{};
			System::String^ checkstate;
			for (int index = 0; index < sizeof(methods); index++) {
				checkstate = System::Convert::ToString(checkedListBox1->GetItemCheckState(index));
				if (checkstate->Equals("Checked")) methods[index] = true;
				else methods[index] = false;
			}
			std::list <double> results;
			std::string results_str = "";

			if (methods[0]) results.push_back(calculationObj.rectangleArea());
			if (methods[1]) results.push_back(calculationObj.trapezeArea());
			if (methods[2]) results.push_back(calculationObj.isoscelesPike());
			if (methods[3]) results.push_back(calculationObj.equilateralPike());
			if (methods[4]) results.push_back(calculationObj.semicircunference());
			if (methods[5]) results.push_back(calculationObj.semiellipse_OUT());
			if (methods[6]) results.push_back(calculationObj.semiellipse_IN());
			if (methods[7]) results.push_back(calculationObj.semihexagon_OUT());
			if (methods[8]) results.push_back(calculationObj.semihexagon_IN());

			while (!results.empty()) {
				results_str = results_str + std::to_string(results.front()) + "/";
				results.pop_front();
			}
			results_str.pop_back();
			textBox2->Text = gcnew String(results_str.c_str());

			functiontext->Text = "";
			precisiontext->Text = "";
			AText->Text = "";
			BText->Text = "";
		}catch(const std::exception&)
		{
			textBox2->Text = "invalid values";
		}
	}

};
};
	
