#pragma once

namespace GUII {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Diagnostics;

	bool flag;
	bool flag1;


	void Brute_Force(String^line, String^word)
	{

		int len_word = word->Length;
		int len_line = line->Length;

		for (int i = 0; i < len_line; i++)
		{
			int j = 0;
			while (j < len_word && line[i + j] == word[j])
			{
				j++;
			}
			if (j == len_word)
			{
				if (flag == false && flag1 == false)
				{
					if (len_word == len_line)
					{
						MessageBox::Show("Word Found!! without checks!\n");
						MessageBox::Show(word);
					}
					else if (len_word != len_line)
					{
						MessageBox::Show("Word Found!! without checks!\n");
						MessageBox::Show(line);
					}
				}
				else if (flag == true && flag1 == false)
				{

					if (len_word == len_line)
					{
					MessageBox::Show("Word Found!! matching whole word only!\n");
					MessageBox::Show(word);
					}
				}
			}
		}

		for (int i = 0; i < len_line; i++)
		{
			int j = 0;

			Char wordd = word[j];
			Char linee = line[i + j];
			int var1 = (int)wordd;
			int var2 = (int)linee;

			while (j < len_word && var1 == var2)
			{
				wordd = word[j];
				linee = line[i + j];
				var1 = (int)wordd;
				var2 = (int)linee;
				j++;
			}
			if (j == len_word)
			{

				if (flag1 == false && flag == false)
				{
					if (len_word == len_line)
					{
						MessageBox::Show("Word Found!\n");
						MessageBox::Show(word);
					}
					else if (len_word != len_line)
					{
						MessageBox::Show("Word Found!\n");
						MessageBox::Show(line);
					}
				}

				else if (flag1 == true && flag == false)
				{

					//if (len_word == len_line)
					//{
					MessageBox::Show("Word Found!\n");
					MessageBox::Show(word);
					//}
				}
			}

		}


	}

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Label^  label1;



	private: System::ComponentModel::IContainer^  components;

	private:
		


#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(409, 34);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Find Text";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(409, 96);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cancle";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(17, 194);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(183, 21);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Match Whole Word Only";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(17, 238);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(104, 21);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"Match Case";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(216, 37);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(109, 41);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Find What : ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(652, 321);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}



#pragma endregion


	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		String^ line;
		String^ word = textBox1->Text;

		StreamReader^ input_file = File::OpenText("Research#1.txt");
		while ((line = input_file->ReadLine()) != nullptr)
		{
			Brute_Force(line, word);
		}
		 input_file = File::OpenText("Research#2.txt");
		 while ((line = input_file->ReadLine()) != nullptr)
		 {
			 Brute_Force(line, word);
		 }
		 input_file = File::OpenText("Research#3.txt");
		 while ((line = input_file->ReadLine()) != nullptr)
		 {
			 Brute_Force(line, word);
		 }
		 input_file = File::OpenText("Research#4.txt");
		 while ((line = input_file->ReadLine()) != nullptr)
		 {
			 Brute_Force(line, word);
		 }
		 input_file = File::OpenText("Research#5.txt");
		 while ((line = input_file->ReadLine()) != nullptr)
		 {
			 Brute_Force(line, word);
		 }
		 input_file = File::OpenText("Research#6.txt");
		 while ((line = input_file->ReadLine()) != nullptr)
		 {
			 Brute_Force(line, word);
		 }
		 input_file = File::OpenText("Research#7.txt");
		 while ((line = input_file->ReadLine()) != nullptr)
		 {
			 Brute_Force(line, word);
		 }
		 input_file = File::OpenText("Research#9.txt");
		 while ((line = input_file->ReadLine()) != nullptr)
		 {
			 Brute_Force(line, word);
		 }
		 input_file = File::OpenText("Research#10.txt");
		 while ((line = input_file->ReadLine()) != nullptr)
		 {
			 Brute_Force(line, word);
		 }
		
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		flag = true;
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Searching Finished!\n");
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		flag1 = true;
	}
	};
}