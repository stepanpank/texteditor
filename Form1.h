#pragma once

namespace Project {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::MenuStrip^  menuStrip2;

	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  timeNewRomanseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;



	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::FontDialog^  fontDialog1;

	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  tahomaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  arialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timeNewRomanseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tahomaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->arialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->�����ToolStripMenuItem, 
				this->����ToolStripMenuItem, this->����ToolStripMenuItem, this->��������ToolStripMenuItem, this->������ToolStripMenuItem, this->������ToolStripMenuItem, 
				this->������ToolStripMenuItem, this->������ToolStripMenuItem, this->�����������ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(12, 65);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(344, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->timeNewRomanseToolStripMenuItem, 
				this->tahomaToolStripMenuItem, this->arialToolStripMenuItem});
			this->�����ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"�����ToolStripMenuItem.Image")));
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(74, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// timeNewRomanseToolStripMenuItem
			// 
			this->timeNewRomanseToolStripMenuItem->Name = L"timeNewRomanseToolStripMenuItem";
			this->timeNewRomanseToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->timeNewRomanseToolStripMenuItem->Text = L"Time New Romanse";
			this->timeNewRomanseToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::timeNewRomanseToolStripMenuItem_Click);
			// 
			// tahomaToolStripMenuItem
			// 
			this->tahomaToolStripMenuItem->Name = L"tahomaToolStripMenuItem";
			this->tahomaToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->tahomaToolStripMenuItem->Text = L"Tahoma";
			this->tahomaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::tahomaToolStripMenuItem_Click);
			// 
			// arialToolStripMenuItem
			// 
			this->arialToolStripMenuItem->Name = L"arialToolStripMenuItem";
			this->arialToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->arialToolStripMenuItem->Text = L"Arial";
			this->arialToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::arialToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->��������ToolStripMenuItem, 
			this->�������ToolStripMenuItem, this->����ToolStripMenuItem, this->������ToolStripMenuItem, this->����ToolStripMenuItem});
			this->����ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"����ToolStripMenuItem.Image")));
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�������ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::������ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->����ToolStripMenuItem->Text = L"�����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"����ToolStripMenuItem.Image")));
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(28, 20);
			this->����ToolStripMenuItem->ToolTipText = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(28, 20);
			this->��������ToolStripMenuItem->ToolTipText = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"������ToolStripMenuItem.Image")));
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(28, 20);
			this->������ToolStripMenuItem->ToolTipText = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"������ToolStripMenuItem.Image")));
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(28, 20);
			this->������ToolStripMenuItem->ToolTipText = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(30, 20);
			this->������ToolStripMenuItem->Text = L"�";
			this->������ToolStripMenuItem->ToolTipText = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(26, 20);
			this->������ToolStripMenuItem->Text = L"�";
			this->������ToolStripMenuItem->ToolTipText = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(28, 20);
			this->�����������ToolStripMenuItem->Text = L"�";
			this->�����������ToolStripMenuItem->ToolTipText = L"ϲ����������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�����������ToolStripMenuItem_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {this->��������ToolStripMenuItem, 
			this->�������ToolStripMenuItem, this->��������ToolStripMenuItem, this->����������ToolStripMenuItem, this->�������ToolStripMenuItem, 
			this->��������ToolStripMenuItem, this->��������ToolStripMenuItem, this->��������ToolStripMenuItem, this->�����������ToolStripMenuItem, 
			this->�����ToolStripMenuItem});
			this->menuStrip2->Location = System::Drawing::Point(9, 9);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->ShowItemToolTips = true;
			this->menuStrip2->Size = System::Drawing::Size(608, 56);
			this->menuStrip2->TabIndex = 1;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->��������ToolStripMenuItem->ToolTipText = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"�������ToolStripMenuItem.Image")));
			this->�������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->�������ToolStripMenuItem->ToolTipText = L"³������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->��������ToolStripMenuItem->ToolTipText = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"����������ToolStripMenuItem.Image")));
			this->����������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->����������ToolStripMenuItem->ToolTipText = L"�������� ��";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"�������ToolStripMenuItem.Image")));
			this->�������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->�������ToolStripMenuItem->ToolTipText = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->��������ToolStripMenuItem->ToolTipText = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->��������ToolStripMenuItem->ToolTipText = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->��������ToolStripMenuItem->ToolTipText = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"�����������ToolStripMenuItem.Image")));
			this->�����������ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->�����������ToolStripMenuItem->ToolTipText = L"��� ��������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�����������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"�����ToolStripMenuItem.Image")));
			this->�����ToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->�����ToolStripMenuItem->ToolTipText = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�����ToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(12, 92);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(594, 235);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 339);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip2);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"WorDREader";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::String^ filename;
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 {
					 filename = "Untitled";
					 System::Windows::Forms::DialogResult res;
					 res = MessageBox::Show("Do you want save " + filename + ".txt","Notepad", MessageBoxButtons::YesNoCancel); 
					 switch (res) 
					 {
					 case System::Windows::Forms::DialogResult::Yes : 
						 { 
							 saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*"; 
							 saveFileDialog1->FileName = filename; saveFileDialog1->RestoreDirectory = true ;
							 saveFileDialog1->ShowDialog(); IO::File::WriteAllText(saveFileDialog1->FileName,richTextBox1->Text);
							 richTextBox1->Clear();
						 } break;
					 case System::Windows::Forms::DialogResult::No : richTextBox1->Clear(); 
						 break;
					 case System::Windows::Forms::DialogResult::Cancel :
						 break; 
					 } 
				 }
			 }
	private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 openFileDialog1->Filter = "txt files (*.txt)|*.txt"; 
				 openFileDialog1->ShowDialog(); 
				 richTextBox1->Text = IO::File::ReadAllText(openFileDialog1->FileName);
			 }
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 IO::File::WriteAllText(saveFileDialog1->FileName,richTextBox1->Text);
			 }
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 saveFileDialog1->Filter = "txt files(*.txt)|*.txt|All files (*.*)|*.*";
				 saveFileDialog1->FileName = filename;
				 saveFileDialog1->RestoreDirectory = true ;
				 saveFileDialog1->ShowDialog();
				 IO::File::WriteAllText(saveFileDialog1->FileName,richTextBox1->Text);
			 }
	private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 richTextBox1->Cut();
			 }
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 richTextBox1->Paste();
			 }
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 richTextBox1->Copy();
			 }
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 richTextBox1->Clear();
			 }
	private: System::Void �����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 MessageBox::Show("It`s info. I still know what can be written here, so it will be so "+ filename +"","Info" );
			 }
	private: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 filename = "Untitled";
				 System::Windows::Forms::DialogResult res; 
				 res = MessageBox::Show("Do you want save " + filename +".txt","Notepad", MessageBoxButtons ::YesNoCancel);
				 switch (res) 
				 {
				 case System::Windows::Forms::DialogResult::Yes : 
					 {
						 saveFileDialog1->Filter = "txt files(*.txt)|*.txt|All files (*.*)|*.*";
						 saveFileDialog1->FileName = filename;
						 saveFileDialog1->RestoreDirectory = true ;
						 saveFileDialog1->ShowDialog();
						 IO::File::WriteAllText(saveFileDialog1->FileName,richTextBox1->Text);
						 richTextBox1->Clear(); Application :: Exit(); 
					 } break; 
				 case System::Windows::Forms::DialogResult::No : richTextBox1->Clear();
					 Application :: Exit(); break; 
				 case System::Windows::Forms::DialogResult ::Cancel : break; 
				 }  		  
			 }
			 // ���������  ������
	private: System::Void timeNewRomanseToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 System::Drawing::Font^ font =
					 gcnew System::Drawing::Font("Time New Roman",10, FontStyle::Regular);

				 richTextBox1->SelectionFont = font;

			 }
	private: System::Void tahomaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)  
			 {
				 System::Drawing::Font^ font =
					 gcnew System::Drawing::Font("Tahoma",10, FontStyle::Regular);

				 richTextBox1->SelectionFont = font;
			 }
	private: System::Void arialToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 System::Drawing::Font^ font =
					 gcnew System::Drawing::Font("Arial",10, FontStyle::Regular);

				 richTextBox1->SelectionFont = font;
			 }
			 // ����� ���������  ������
	private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 
				 richTextBox1->SelectionIndent = 8;  

			 }
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 
				 richTextBox1->SelectionHangingIndent =34;
			 }
	private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			
				 richTextBox1->SelectionRightIndent = 5;
			 }
   private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 richTextBox1->SelectionBullet = true;  
		     }
			 // ��������� ���� ������
	private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 System::Drawing::Font^ comment_font =
					 gcnew System::Drawing::Font(
					 richTextBox1->SelectionFont,
					 System::Drawing::FontStyle::Italic);

				 richTextBox1->SelectionFont = comment_font;
			 }
	private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 System::Drawing::Font^ comment_font =
					 gcnew System::Drawing::Font(
					 richTextBox1->SelectionFont,
					 System::Drawing::FontStyle::Bold);

				 richTextBox1->SelectionFont = comment_font;
			 }
	private: System::Void �����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 System::Drawing::Font^ comment_font =
					 gcnew System::Drawing::Font(
					 richTextBox1->SelectionFont,
					 System::Drawing::FontStyle::Underline);

				 richTextBox1->SelectionFont = comment_font;
			 }
			 // ����� ��������� ���� ������

			 // ��������� �������
	private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 richTextBox1->SelectionColor = (System::Drawing::Color::Black);
			 }
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 richTextBox1->SelectionColor = (System::Drawing::Color::Red);
			 }
	private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 richTextBox1->SelectionColor = (System::Drawing::Color::Green);
			 }
	private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 richTextBox1->SelectionColor = (System::Drawing::Color::Blue);
			 }
	private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 richTextBox1->SelectionColor = (System::Drawing::Color::White);
			 }
			 // ����� ��������� �������

};
}

