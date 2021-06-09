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

	private: System::Windows::Forms::ToolStripMenuItem^  òåêñòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  timeNewRomanseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  êîë³ğToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÷åğâîíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  çåëåíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñèí³éToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÷îğíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  á³ëèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñòâîğèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  â³äêğèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  çáåğåãòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  çáåğåãòèßêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âèğ³çàòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âñòàâèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  êîï³şâàòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  î÷èñòèòèToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  ïğîÏğîãğàìóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âèéòèToolStripMenuItem;



	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::FontDialog^  fontDialog1;

	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  çë³âàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïîöåíòğóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñïğàâàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  æèğíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  êóğñèâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ï³äêğåñëåííÿToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  tahomaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  arialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  àáçàöèToolStripMenuItem;



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
			this->òåêñòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timeNewRomanseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tahomaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->arialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîë³ğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷åğâîíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷îğíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->á³ëèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çë³âàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîöåíòğóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àáçàöèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->æèğíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êóğñèâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ï³äêğåñëåííÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->ñòâîğèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->â³äêğèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåğåãòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåğåãòèßêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèğ³çàòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîï³şâàòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÏğîãğàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->òåêñòToolStripMenuItem, 
				this->êîë³ğToolStripMenuItem, this->çë³âàToolStripMenuItem, this->ïîöåíòğóToolStripMenuItem, this->ñïğàâàToolStripMenuItem, this->àáçàöèToolStripMenuItem, 
				this->æèğíèéToolStripMenuItem, this->êóğñèâToolStripMenuItem, this->ï³äêğåñëåííÿToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(12, 65);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(344, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// òåêñòToolStripMenuItem
			// 
			this->òåêñòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->timeNewRomanseToolStripMenuItem, 
				this->tahomaToolStripMenuItem, this->arialToolStripMenuItem});
			this->òåêñòToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"òåêñòToolStripMenuItem.Image")));
			this->òåêñòToolStripMenuItem->Name = L"òåêñòToolStripMenuItem";
			this->òåêñòToolStripMenuItem->Size = System::Drawing::Size(74, 20);
			this->òåêñòToolStripMenuItem->Text = L"Øğèôò";
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
			// êîë³ğToolStripMenuItem
			// 
			this->êîë³ğToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->÷åğâîíèéToolStripMenuItem, 
			this->çåëåíèéToolStripMenuItem, this->ñèí³éToolStripMenuItem, this->÷îğíèéToolStripMenuItem, this->á³ëèéToolStripMenuItem});
			this->êîë³ğToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"êîë³ğToolStripMenuItem.Image")));
			this->êîë³ğToolStripMenuItem->Name = L"êîë³ğToolStripMenuItem";
			this->êîë³ğToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->êîë³ğToolStripMenuItem->Text = L"Êîë³ğ";
			// 
			// ÷åğâîíèéToolStripMenuItem
			// 
			this->÷åğâîíèéToolStripMenuItem->Name = L"÷åğâîíèéToolStripMenuItem";
			this->÷åğâîíèéToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->÷åğâîíèéToolStripMenuItem->Text = L"×åğâîíèé";
			this->÷åğâîíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::÷åğâîíèéToolStripMenuItem_Click);
			// 
			// çåëåíèéToolStripMenuItem
			// 
			this->çåëåíèéToolStripMenuItem->Name = L"çåëåíèéToolStripMenuItem";
			this->çåëåíèéToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->çåëåíèéToolStripMenuItem->Text = L"Çåëåíèé";
			this->çåëåíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::çåëåíèéToolStripMenuItem_Click);
			// 
			// ñèí³éToolStripMenuItem
			// 
			this->ñèí³éToolStripMenuItem->Name = L"ñèí³éToolStripMenuItem";
			this->ñèí³éToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ñèí³éToolStripMenuItem->Text = L"Ñèí³é";
			this->ñèí³éToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ñèí³éToolStripMenuItem_Click);
			// 
			// ÷îğíèéToolStripMenuItem
			// 
			this->÷îğíèéToolStripMenuItem->Name = L"÷îğíèéToolStripMenuItem";
			this->÷îğíèéToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->÷îğíèéToolStripMenuItem->Text = L"×îğíèé";
			this->÷îğíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::÷îğíèéToolStripMenuItem_Click);
			// 
			// á³ëèéToolStripMenuItem
			// 
			this->á³ëèéToolStripMenuItem->Name = L"á³ëèéToolStripMenuItem";
			this->á³ëèéToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->á³ëèéToolStripMenuItem->Text = L"Á³ëèé";
			this->á³ëèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::á³ëèéToolStripMenuItem_Click);
			// 
			// çë³âàToolStripMenuItem
			// 
			this->çë³âàToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"çë³âàToolStripMenuItem.Image")));
			this->çë³âàToolStripMenuItem->Name = L"çë³âàToolStripMenuItem";
			this->çë³âàToolStripMenuItem->Size = System::Drawing::Size(28, 20);
			this->çë³âàToolStripMenuItem->ToolTipText = L"Çë³âà";
			this->çë³âàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::çë³âàToolStripMenuItem_Click);
			// 
			// ïîöåíòğóToolStripMenuItem
			// 
			this->ïîöåíòğóToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ïîöåíòğóToolStripMenuItem.Image")));
			this->ïîöåíòğóToolStripMenuItem->Name = L"ïîöåíòğóToolStripMenuItem";
			this->ïîöåíòğóToolStripMenuItem->Size = System::Drawing::Size(28, 20);
			this->ïîöåíòğóToolStripMenuItem->ToolTipText = L"Ïîöåíòğó";
			this->ïîöåíòğóToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ïîöåíòğóToolStripMenuItem_Click);
			// 
			// ñïğàâàToolStripMenuItem
			// 
			this->ñïğàâàToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ñïğàâàToolStripMenuItem.Image")));
			this->ñïğàâàToolStripMenuItem->Name = L"ñïğàâàToolStripMenuItem";
			this->ñïğàâàToolStripMenuItem->Size = System::Drawing::Size(28, 20);
			this->ñïğàâàToolStripMenuItem->ToolTipText = L"Ñïğàâà";
			this->ñïğàâàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ñïğàâàToolStripMenuItem_Click);
			// 
			// àáçàöèToolStripMenuItem
			// 
			this->àáçàöèToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"àáçàöèToolStripMenuItem.Image")));
			this->àáçàöèToolStripMenuItem->Name = L"àáçàöèToolStripMenuItem";
			this->àáçàöèToolStripMenuItem->Size = System::Drawing::Size(28, 20);
			this->àáçàöèToolStripMenuItem->ToolTipText = L"Àáçàöè";
			this->àáçàöèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::àáçàöèToolStripMenuItem_Click);
			// 
			// æèğíèéToolStripMenuItem
			// 
			this->æèğíèéToolStripMenuItem->Name = L"æèğíèéToolStripMenuItem";
			this->æèğíèéToolStripMenuItem->Size = System::Drawing::Size(30, 20);
			this->æèğíèéToolStripMenuItem->Text = L"Æ";
			this->æèğíèéToolStripMenuItem->ToolTipText = L"Æèğíèé";
			this->æèğíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::æèğíèéToolStripMenuItem_Click);
			// 
			// êóğñèâToolStripMenuItem
			// 
			this->êóğñèâToolStripMenuItem->Name = L"êóğñèâToolStripMenuItem";
			this->êóğñèâToolStripMenuItem->Size = System::Drawing::Size(26, 20);
			this->êóğñèâToolStripMenuItem->Text = L"Ê";
			this->êóğñèâToolStripMenuItem->ToolTipText = L"Êóğñèâ";
			this->êóğñèâToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::êóğñèâToolStripMenuItem_Click);
			// 
			// ï³äêğåñëåííÿToolStripMenuItem
			// 
			this->ï³äêğåñëåííÿToolStripMenuItem->Name = L"ï³äêğåñëåííÿToolStripMenuItem";
			this->ï³äêğåñëåííÿToolStripMenuItem->Size = System::Drawing::Size(28, 20);
			this->ï³äêğåñëåííÿToolStripMenuItem->Text = L"Ï";
			this->ï³äêğåñëåííÿToolStripMenuItem->ToolTipText = L"Ï²äêğåñëåííÿ";
			this->ï³äêğåñëåííÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ï³äêğåñëåííÿToolStripMenuItem_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {this->ñòâîğèòèToolStripMenuItem, 
			this->â³äêğèòèToolStripMenuItem, this->çáåğåãòèToolStripMenuItem, this->çáåğåãòèßêToolStripMenuItem, this->âèğ³çàòèToolStripMenuItem, 
			this->âñòàâèòèToolStripMenuItem, this->êîï³şâàòèToolStripMenuItem, this->î÷èñòèòèToolStripMenuItem, this->ïğîÏğîãğàìóToolStripMenuItem, 
			this->âèéòèToolStripMenuItem});
			this->menuStrip2->Location = System::Drawing::Point(9, 9);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->ShowItemToolTips = true;
			this->menuStrip2->Size = System::Drawing::Size(608, 56);
			this->menuStrip2->TabIndex = 1;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// ñòâîğèòèToolStripMenuItem
			// 
			this->ñòâîğèòèToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ñòâîğèòèToolStripMenuItem.Image")));
			this->ñòâîğèòèToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->ñòâîğèòèToolStripMenuItem->Name = L"ñòâîğèòèToolStripMenuItem";
			this->ñòâîğèòèToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->ñòâîğèòèToolStripMenuItem->ToolTipText = L"Ñòâîğèòè";
			this->ñòâîğèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ñòâîğèòèToolStripMenuItem_Click);
			// 
			// â³äêğèòèToolStripMenuItem
			// 
			this->â³äêğèòèToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"â³äêğèòèToolStripMenuItem.Image")));
			this->â³äêğèòèToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->â³äêğèòèToolStripMenuItem->Name = L"â³äêğèòèToolStripMenuItem";
			this->â³äêğèòèToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->â³äêğèòèToolStripMenuItem->ToolTipText = L"Â³äêğèòè";
			this->â³äêğèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::â³äêğèòèToolStripMenuItem_Click);
			// 
			// çáåğåãòèToolStripMenuItem
			// 
			this->çáåğåãòèToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"çáåğåãòèToolStripMenuItem.Image")));
			this->çáåğåãòèToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->çáåğåãòèToolStripMenuItem->Name = L"çáåğåãòèToolStripMenuItem";
			this->çáåğåãòèToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->çáåğåãòèToolStripMenuItem->ToolTipText = L"Çáåğåãòè";
			this->çáåğåãòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::çáåğåãòèToolStripMenuItem_Click);
			// 
			// çáåğåãòèßêToolStripMenuItem
			// 
			this->çáåğåãòèßêToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"çáåğåãòèßêToolStripMenuItem.Image")));
			this->çáåğåãòèßêToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->çáåğåãòèßêToolStripMenuItem->Name = L"çáåğåãòèßêToolStripMenuItem";
			this->çáåğåãòèßêToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->çáåğåãòèßêToolStripMenuItem->ToolTipText = L"Çáåğåãòè ÿê";
			this->çáåğåãòèßêToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::çáåğåãòèßêToolStripMenuItem_Click);
			// 
			// âèğ³çàòèToolStripMenuItem
			// 
			this->âèğ³çàòèToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"âèğ³çàòèToolStripMenuItem.Image")));
			this->âèğ³çàòèToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->âèğ³çàòèToolStripMenuItem->Name = L"âèğ³çàòèToolStripMenuItem";
			this->âèğ³çàòèToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->âèğ³çàòèToolStripMenuItem->ToolTipText = L"Âèğ³çàòè";
			this->âèğ³çàòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::âèğ³çàòèToolStripMenuItem_Click);
			// 
			// âñòàâèòèToolStripMenuItem
			// 
			this->âñòàâèòèToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"âñòàâèòèToolStripMenuItem.Image")));
			this->âñòàâèòèToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->âñòàâèòèToolStripMenuItem->Name = L"âñòàâèòèToolStripMenuItem";
			this->âñòàâèòèToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->âñòàâèòèToolStripMenuItem->ToolTipText = L"Âñòàâèòè";
			this->âñòàâèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::âñòàâèòèToolStripMenuItem_Click);
			// 
			// êîï³şâàòèToolStripMenuItem
			// 
			this->êîï³şâàòèToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"êîï³şâàòèToolStripMenuItem.Image")));
			this->êîï³şâàòèToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->êîï³şâàòèToolStripMenuItem->Name = L"êîï³şâàòèToolStripMenuItem";
			this->êîï³şâàòèToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->êîï³şâàòèToolStripMenuItem->ToolTipText = L"Êîï³şâàòè";
			this->êîï³şâàòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::êîï³şâàòèToolStripMenuItem_Click);
			// 
			// î÷èñòèòèToolStripMenuItem
			// 
			this->î÷èñòèòèToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"î÷èñòèòèToolStripMenuItem.Image")));
			this->î÷èñòèòèToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->î÷èñòèòèToolStripMenuItem->Name = L"î÷èñòèòèToolStripMenuItem";
			this->î÷èñòèòèToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->î÷èñòèòèToolStripMenuItem->ToolTipText = L"Î÷èñòèòè";
			this->î÷èñòèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::î÷èñòèòèToolStripMenuItem_Click);
			// 
			// ïğîÏğîãğàìóToolStripMenuItem
			// 
			this->ïğîÏğîãğàìóToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ïğîÏğîãğàìóToolStripMenuItem.Image")));
			this->ïğîÏğîãğàìóToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->ïğîÏğîãğàìóToolStripMenuItem->Name = L"ïğîÏğîãğàìóToolStripMenuItem";
			this->ïğîÏğîãğàìóToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->ïğîÏğîãğàìóToolStripMenuItem->ToolTipText = L"Ïğî ïğîãğàìó";
			this->ïğîÏğîãğàìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ïğîÏğîãğàìóToolStripMenuItem_Click);
			// 
			// âèéòèToolStripMenuItem
			// 
			this->âèéòèToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"âèéòèToolStripMenuItem.Image")));
			this->âèéòèToolStripMenuItem->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->âèéòèToolStripMenuItem->Name = L"âèéòèToolStripMenuItem";
			this->âèéòèToolStripMenuItem->Size = System::Drawing::Size(60, 52);
			this->âèéòèToolStripMenuItem->ToolTipText = L"Âèéòè";
			this->âèéòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::âèéòèToolStripMenuItem_Click);
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
	private: System::Void ñòâîğèòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
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
	private: System::Void â³äêğèòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 openFileDialog1->Filter = "txt files (*.txt)|*.txt"; 
				 openFileDialog1->ShowDialog(); 
				 richTextBox1->Text = IO::File::ReadAllText(openFileDialog1->FileName);
			 }
	private: System::Void çáåğåãòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 IO::File::WriteAllText(saveFileDialog1->FileName,richTextBox1->Text);
			 }
	private: System::Void çáåğåãòèßêToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 saveFileDialog1->Filter = "txt files(*.txt)|*.txt|All files (*.*)|*.*";
				 saveFileDialog1->FileName = filename;
				 saveFileDialog1->RestoreDirectory = true ;
				 saveFileDialog1->ShowDialog();
				 IO::File::WriteAllText(saveFileDialog1->FileName,richTextBox1->Text);
			 }
	private: System::Void âèğ³çàòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 richTextBox1->Cut();
			 }
	private: System::Void âñòàâèòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 richTextBox1->Paste();
			 }
	private: System::Void êîï³şâàòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 richTextBox1->Copy();
			 }
	private: System::Void î÷èñòèòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 richTextBox1->Clear();
			 }
	private: System::Void ïğîÏğîãğàìóToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 MessageBox::Show("It`s info. I still know what can be written here, so it will be so "+ filename +"","Info" );
			 }
	private: System::Void âèéòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
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
			 // ğåàë³çàö³ÿ  øğèôò³â
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
			 // ê³íåöü ğåàë³çàö³¿  øğèôò³â
	private: System::Void çë³âàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 
				 richTextBox1->SelectionIndent = 8;  

			 }
	private: System::Void ïîöåíòğóToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 
				 richTextBox1->SelectionHangingIndent =34;
			 }
	private: System::Void ñïğàâàToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			
				 richTextBox1->SelectionRightIndent = 5;
			 }
   private: System::Void àáçàöèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 richTextBox1->SelectionBullet = true;  
		     }
			 // ğåàë³çàö³ÿ òèï³â øğèôò³â
	private: System::Void êóğñèâToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 System::Drawing::Font^ comment_font =
					 gcnew System::Drawing::Font(
					 richTextBox1->SelectionFont,
					 System::Drawing::FontStyle::Italic);

				 richTextBox1->SelectionFont = comment_font;
			 }
	private: System::Void æèğíèéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 System::Drawing::Font^ comment_font =
					 gcnew System::Drawing::Font(
					 richTextBox1->SelectionFont,
					 System::Drawing::FontStyle::Bold);

				 richTextBox1->SelectionFont = comment_font;
			 }
	private: System::Void ï³äêğåñëåííÿToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 System::Drawing::Font^ comment_font =
					 gcnew System::Drawing::Font(
					 richTextBox1->SelectionFont,
					 System::Drawing::FontStyle::Underline);

				 richTextBox1->SelectionFont = comment_font;
			 }
			 // ê³íåöü ğåàë³çàö³¿ òèï³â øğèôò³â

			 // ğåàë³çàö³ÿ êîëüîğ³â
	private: System::Void ÷îğíèéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 richTextBox1->SelectionColor = (System::Drawing::Color::Black);
			 }
	private: System::Void ÷åğâîíèéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 richTextBox1->SelectionColor = (System::Drawing::Color::Red);
			 }
	private: System::Void çåëåíèéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 richTextBox1->SelectionColor = (System::Drawing::Color::Green);
			 }
	private: System::Void ñèí³éToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 richTextBox1->SelectionColor = (System::Drawing::Color::Blue);
			 }
	private: System::Void á³ëèéToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 richTextBox1->SelectionColor = (System::Drawing::Color::White);
			 }
			 // ê³íåöü ğåàë³çàö³¿ êîëüîğ³â

};
}

