#pragma once

namespace PomodoroX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::ComponentModel::IContainer^ components;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Open Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(36, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pomodoro";
			this->label1->Click += gcnew System::EventHandler(this, &mainForm::Label1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 15));
			this->button3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button3->Location = System::Drawing::Point(335, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(48, 30);
			this->button3->TabIndex = 3;
			this->button3->TabStop = false;
			this->button3->Text = L"×";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &mainForm::Button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(7, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(26, 28);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &mainForm::PictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(21, 553);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(30, 28);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &mainForm::PictureBox1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(326, 543);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(38, 38);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &mainForm::PictureBox1_Click);
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Open Sans Light", 42));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(383, 601);
			this->label2->TabIndex = 5;
			this->label2->Text = L"00:00:00";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &mainForm::Label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Open Sans Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gainsboro;
			this->label3->Location = System::Drawing::Point(156, 553);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 28);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Timer";
			this->label3->Click += gcnew System::EventHandler(this, &mainForm::Label3_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(383, 601);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pomodoro x";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label2->Text = __TIME__;
}
private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
