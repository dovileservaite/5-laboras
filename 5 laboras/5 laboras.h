#pragma once

namespace My5laboras {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for My5laboras
	/// </summary>
	public ref class My5laboras : public System::Windows::Forms::Form
	{
	public:
		My5laboras(void)
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
		~My5laboras()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::ComponentModel::IContainer^  components;

	protected:

	protected:


	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(186)));
			this->label1->Location = System::Drawing::Point(71, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Skaièiuotuvas";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(112, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L" skaicius";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(86, 100);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 31);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Skaièiuoti";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &My5laboras::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(75, 59);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(109, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Áveskite skaièiø";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label3->Location = System::Drawing::Point(35, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Rezultatas:";
			// 
			// My5laboras
			// 
			this->ClientSize = System::Drawing::Size(277, 234);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"My5laboras";
			this->Text = L"Galvosûkiai";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void My5laboras_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void My5laboras_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void My5laboras_FontChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}


private: System::Void checkedListBox1(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	String ^ in = textBox2 -> Text;
	int ini = System::Convert::ToInt16(in);

	int rezultatas =1;
	for (int i = 1; i <= ini; i++)
	{
		rezultatas = rezultatas + i;
	}
	in = System::Convert::ToString(rezultatas);
	label2->Text = in;
}
}
	;}