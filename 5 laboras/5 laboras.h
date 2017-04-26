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
	private: System::Windows::Forms::MonthCalendar^  kalendorius;
	protected:


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
			this->kalendorius = (gcnew System::Windows::Forms::MonthCalendar());
			this->SuspendLayout();
			// 
			// kalendorius
			// 
			this->kalendorius->Location = System::Drawing::Point(103, 99);
			this->kalendorius->Name = L"kalendorius";
			this->kalendorius->TabIndex = 0;
			// 
			// My5laboras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(299, 279);
			this->Controls->Add(this->kalendorius);
			this->Name = L"My5laboras";
			this->Text = L"My5laboras";
			this->ResumeLayout(false);

		}
	}