#pragma once

namespace ComProProject2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::CodeDom;
	using namespace System::Text;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			timer->Start();
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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Panel^  panel_cal;
	private: System::Windows::Forms::Button^  cal;
	private: System::Windows::Forms::TextBox^  total;

	private: System::Windows::Forms::TextBox^  amount;

	private: System::Windows::Forms::TextBox^  sell;

	private: System::Windows::Forms::TextBox^  buy;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  status;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel_rewind;
	private: System::Windows::Forms::WebBrowser^  rewind;
	private: System::Windows::Forms::Timer^  timer;
	private: System::Windows::Forms::Button^  clear;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Panel^  panel_release;
	private: System::Windows::Forms::WebBrowser^  gtdata;
	private: System::Windows::Forms::WebBrowser^  gold;
	private: System::Windows::Forms::WebBrowser^  taladthong;
	private: System::Windows::Forms::ToolStripMenuItem^  dateAndTimeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  refreshToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  clearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  themeSoonToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  defaultToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  lightGreenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lightBlueToolStripMenuItem;

	private: System::ComponentModel::IContainer^  components;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel_cal = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->cal = (gcnew System::Windows::Forms::Button());
			this->total = (gcnew System::Windows::Forms::TextBox());
			this->amount = (gcnew System::Windows::Forms::TextBox());
			this->sell = (gcnew System::Windows::Forms::TextBox());
			this->buy = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->refreshToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dateAndTimeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->themeSoonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->defaultToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->lightGreenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lightBlueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->status = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->panel_rewind = (gcnew System::Windows::Forms::Panel());
			this->rewind = (gcnew System::Windows::Forms::WebBrowser());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel_release = (gcnew System::Windows::Forms::Panel());
			this->gtdata = (gcnew System::Windows::Forms::WebBrowser());
			this->gold = (gcnew System::Windows::Forms::WebBrowser());
			this->taladthong = (gcnew System::Windows::Forms::WebBrowser());
			this->panel_cal->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->panel_rewind->SuspendLayout();
			this->panel_release->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Kanit Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(331, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ราคาทองล่าสุด";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Kanit Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(349, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(332, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"ราคาทองย้อนหลัง";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Kanit Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(687, 25);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(334, 34);
			this->button3->TabIndex = 2;
			this->button3->Text = L"คำนวณราคาทอง";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// panel_cal
			// 
			this->panel_cal->Controls->Add(this->label9);
			this->panel_cal->Controls->Add(this->label8);
			this->panel_cal->Controls->Add(this->label7);
			this->panel_cal->Controls->Add(this->label6);
			this->panel_cal->Controls->Add(this->label5);
			this->panel_cal->Controls->Add(this->label4);
			this->panel_cal->Controls->Add(this->label3);
			this->panel_cal->Controls->Add(this->label2);
			this->panel_cal->Controls->Add(this->clear);
			this->panel_cal->Controls->Add(this->cal);
			this->panel_cal->Controls->Add(this->total);
			this->panel_cal->Controls->Add(this->amount);
			this->panel_cal->Controls->Add(this->sell);
			this->panel_cal->Controls->Add(this->buy);
			this->panel_cal->Controls->Add(this->label1);
			this->panel_cal->Location = System::Drawing::Point(0, 63);
			this->panel_cal->Name = L"panel_cal";
			this->panel_cal->Size = System::Drawing::Size(1033, 519);
			this->panel_cal->TabIndex = 3;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Kanit Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(255, 252);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 22);
			this->label9->TabIndex = 13;
			this->label9->Text = L"กำไร/ขาดทุน";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Kanit Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(255, 212);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 22);
			this->label8->TabIndex = 12;
			this->label8->Text = L"ปริมาณ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Kanit Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(255, 172);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 22);
			this->label7->TabIndex = 11;
			this->label7->Text = L"ราคาทองที่ซื้อ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Kanit Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(255, 132);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(101, 22);
			this->label6->TabIndex = 10;
			this->label6->Text = L"ราคาทองรับซื้อ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Kanit Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(662, 212);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 22);
			this->label5->TabIndex = 9;
			this->label5->Text = L"บาท";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Kanit Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(662, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 22);
			this->label4->TabIndex = 8;
			this->label4->Text = L"฿";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Kanit Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(662, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 22);
			this->label3->TabIndex = 7;
			this->label3->Text = L"฿";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Kanit Light", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(662, 254);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 22);
			this->label2->TabIndex = 6;
			this->label2->Text = L"฿";
			// 
			// clear
			// 
			this->clear->Font = (gcnew System::Drawing::Font(L"Kanit Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->Location = System::Drawing::Point(581, 307);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(137, 37);
			this->clear->TabIndex = 5;
			this->clear->Text = L"ล้าง";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &Form1::clear_Click);
			// 
			// cal
			// 
			this->cal->Font = (gcnew System::Drawing::Font(L"Kanit Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cal->Location = System::Drawing::Point(313, 307);
			this->cal->Name = L"cal";
			this->cal->Size = System::Drawing::Size(137, 37);
			this->cal->TabIndex = 4;
			this->cal->Text = L"คำนวณ";
			this->cal->UseVisualStyleBackColor = true;
			this->cal->Click += gcnew System::EventHandler(this, &Form1::cal_Click);
			// 
			// total
			// 
			this->total->Enabled = false;
			this->total->Location = System::Drawing::Point(380, 254);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(263, 20);
			this->total->TabIndex = 4;
			this->total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// amount
			// 
			this->amount->Location = System::Drawing::Point(380, 212);
			this->amount->Name = L"amount";
			this->amount->Size = System::Drawing::Size(263, 20);
			this->amount->TabIndex = 3;
			this->amount->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->amount->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::amount_KeyPress);
			// 
			// sell
			// 
			this->sell->Location = System::Drawing::Point(380, 171);
			this->sell->Name = L"sell";
			this->sell->Size = System::Drawing::Size(263, 20);
			this->sell->TabIndex = 2;
			this->sell->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->sell->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::sell_KeyPress);
			// 
			// buy
			// 
			this->buy->Location = System::Drawing::Point(380, 134);
			this->buy->Name = L"buy";
			this->buy->Size = System::Drawing::Size(263, 20);
			this->buy->TabIndex = 1;
			this->buy->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->buy->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::buy_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Kanit", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(390, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(268, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"คำนวณราคาทองกำไร-ขาดทุน";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1033, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->refreshToolStripMenuItem,
					this->dateAndTimeToolStripMenuItem, this->clearToolStripMenuItem, this->themeSoonToolStripMenuItem, this->toolStripMenuItem2,
					this->exitToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// refreshToolStripMenuItem
			// 
			this->refreshToolStripMenuItem->Name = L"refreshToolStripMenuItem";
			this->refreshToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F5;
			this->refreshToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->refreshToolStripMenuItem->Text = L"Refresh";
			this->refreshToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::refreshToolStripMenuItem_Click);
			// 
			// dateAndTimeToolStripMenuItem
			// 
			this->dateAndTimeToolStripMenuItem->Checked = true;
			this->dateAndTimeToolStripMenuItem->CheckOnClick = true;
			this->dateAndTimeToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->dateAndTimeToolStripMenuItem->Name = L"dateAndTimeToolStripMenuItem";
			this->dateAndTimeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->dateAndTimeToolStripMenuItem->Text = L"Date and Time";
			this->dateAndTimeToolStripMenuItem->CheckedChanged += gcnew System::EventHandler(this, &Form1::dateAndTimeToolStripMenuItem_CheckedChanged);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->clearToolStripMenuItem->Text = L"Clear";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::clearToolStripMenuItem_Click);
			// 
			// themeSoonToolStripMenuItem
			// 
			this->themeSoonToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->defaultToolStripMenuItem,
					this->toolStripMenuItem3, this->lightGreenToolStripMenuItem, this->lightBlueToolStripMenuItem
			});
			this->themeSoonToolStripMenuItem->Name = L"themeSoonToolStripMenuItem";
			this->themeSoonToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->themeSoonToolStripMenuItem->Text = L"Theme";
			// 
			// defaultToolStripMenuItem
			// 
			this->defaultToolStripMenuItem->Name = L"defaultToolStripMenuItem";
			this->defaultToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->defaultToolStripMenuItem->Text = L"Default";
			this->defaultToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::defaultToolStripMenuItem_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(132, 6);
			// 
			// lightGreenToolStripMenuItem
			// 
			this->lightGreenToolStripMenuItem->Name = L"lightGreenToolStripMenuItem";
			this->lightGreenToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->lightGreenToolStripMenuItem->Text = L"Light Green";
			this->lightGreenToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::lightGreenToolStripMenuItem_Click);
			// 
			// lightBlueToolStripMenuItem
			// 
			this->lightBlueToolStripMenuItem->Name = L"lightBlueToolStripMenuItem";
			this->lightBlueToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->lightBlueToolStripMenuItem->Text = L"Light Blue";
			this->lightBlueToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::lightBlueToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(177, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->helpToolStripMenuItem1,
					this->toolStripMenuItem1, this->aboutToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// helpToolStripMenuItem1
			// 
			this->helpToolStripMenuItem1->Name = L"helpToolStripMenuItem1";
			this->helpToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F1));
			this->helpToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->helpToolStripMenuItem1->Text = L"Help";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(177, 6);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F12;
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::Color::Transparent;
			this->statusStrip1->Font = (gcnew System::Drawing::Font(L"Kanit Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->status });
			this->statusStrip1->Location = System::Drawing::Point(0, 585);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1033, 29);
			this->statusStrip1->SizingGrip = false;
			this->statusStrip1->TabIndex = 5;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// status
			// 
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(54, 24);
			this->status->Text = L"Ready";
			// 
			// panel_rewind
			// 
			this->panel_rewind->Controls->Add(this->rewind);
			this->panel_rewind->Location = System::Drawing::Point(0, 65);
			this->panel_rewind->Name = L"panel_rewind";
			this->panel_rewind->Size = System::Drawing::Size(1033, 517);
			this->panel_rewind->TabIndex = 5;
			// 
			// rewind
			// 
			this->rewind->Dock = System::Windows::Forms::DockStyle::Fill;
			this->rewind->Location = System::Drawing::Point(0, 0);
			this->rewind->MinimumSize = System::Drawing::Size(20, 20);
			this->rewind->Name = L"rewind";
			this->rewind->ScriptErrorsSuppressed = true;
			this->rewind->Size = System::Drawing::Size(1033, 517);
			this->rewind->TabIndex = 0;
			this->rewind->Url = (gcnew System::Uri(L"https://kittipot321.github.io/topfy/rewind.html", System::UriKind::Absolute));
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &Form1::timer_Tick);
			// 
			// panel_release
			// 
			this->panel_release->Controls->Add(this->gtdata);
			this->panel_release->Controls->Add(this->gold);
			this->panel_release->Controls->Add(this->taladthong);
			this->panel_release->Location = System::Drawing::Point(0, 63);
			this->panel_release->Name = L"panel_release";
			this->panel_release->Size = System::Drawing::Size(1033, 519);
			this->panel_release->TabIndex = 15;
			this->panel_release->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel_release_Paint);
			// 
			// gtdata
			// 
			this->gtdata->Location = System::Drawing::Point(581, 36);
			this->gtdata->MinimumSize = System::Drawing::Size(20, 20);
			this->gtdata->Name = L"gtdata";
			this->gtdata->ScriptErrorsSuppressed = true;
			this->gtdata->ScrollBarsEnabled = false;
			this->gtdata->Size = System::Drawing::Size(290, 238);
			this->gtdata->TabIndex = 2;
			this->gtdata->Url = (gcnew System::Uri(L"http://www.thaigold.info/RealTimeDataV2/GTfairprice2016.php", System::UriKind::Absolute));
			// 
			// gold
			// 
			this->gold->Location = System::Drawing::Point(151, 17);
			this->gold->MinimumSize = System::Drawing::Size(20, 20);
			this->gold->Name = L"gold";
			this->gold->ScriptErrorsSuppressed = true;
			this->gold->ScrollBarsEnabled = false;
			this->gold->Size = System::Drawing::Size(310, 269);
			this->gold->TabIndex = 1;
			this->gold->Url = (gcnew System::Uri(L"https://kittipot321.github.io/topfy/gold.html", System::UriKind::Absolute));
			// 
			// taladthong
			// 
			this->taladthong->Location = System::Drawing::Point(151, 307);
			this->taladthong->MinimumSize = System::Drawing::Size(20, 20);
			this->taladthong->Name = L"taladthong";
			this->taladthong->ScriptErrorsSuppressed = true;
			this->taladthong->ScrollBarsEnabled = false;
			this->taladthong->Size = System::Drawing::Size(760, 196);
			this->taladthong->TabIndex = 0;
			this->taladthong->Url = (gcnew System::Uri(L"https://kittipot321.github.io/topfy/index.html", System::UriKind::Absolute));
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1033, 614);
			this->Controls->Add(this->panel_release);
			this->Controls->Add(this->panel_cal);
			this->Controls->Add(this->panel_rewind);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GoldPrice";
			this->panel_cal->ResumeLayout(false);
			this->panel_cal->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->panel_rewind->ResumeLayout(false);
			this->panel_release->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//-----START-----
#pragma endregion
		// change pages
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		panel_cal->Visible = false;
		panel_rewind->Visible = false;
		panel_release->Visible = true;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		panel_cal->Visible = false;
		panel_rewind->Visible = true;
		panel_release->Visible = false;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		panel_cal->Visible = true;
		panel_rewind->Visible = false;
		panel_release->Visible = false;
	}
		//cal_zone
	private: System::Void cal_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (buy->Text == "" || sell->Text == "" || amount->Text == "")
		{
			MessageBox::Show(L"กรุณาใส่ตัวเลขให้ครบทุกช่อง", L"คำเตือน!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			int totals;
			int first;
			int second;
			int samount;
			first = int::Parse(buy->Text);
			second = int::Parse(sell->Text);
			samount = int::Parse(amount->Text);
			totals = ((first * samount) - (second * samount));
			total->Text = totals.ToString();
			if (totals > 0)
			{
				label9->Text = L"กำไร";
			}
			else if (totals < 0)
			{
				label9->Text = L"ขาดทุน";
			}
			else
			{
				label9->Text = L"เท่ากัน";
			}
		}
	}
		// clear
	private: System::Void clear_Click(System::Object^  sender, System::EventArgs^  e) {
		buy->Text = "";
		sell->Text = "";
		amount->Text = "";
		total->Text = "";
		label9->Text = L"กำไร/ขาดทุน";
	}
		// clock
	private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {
		DateTime top = DateTime::UtcNow.ToLocalTime();
		this->status->Text = top.ToString("F");
	}
	
		// input number only! and maxlength = 5
	private: System::Void buy_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((e->KeyChar < '0' || e->KeyChar > '9') && (e->KeyChar != '\b'))
			e->Handled = true;
		buy->MaxLength = 5;
	}
	
	private: System::Void sell_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((e->KeyChar < '0' || e->KeyChar > '9') && (e->KeyChar != '\b'))
			e->Handled = true;
		sell->MaxLength = 5;
	}
	private: System::Void amount_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((e->KeyChar < '0' || e->KeyChar > '9') && (e->KeyChar != '\b'))
			e->Handled = true;
		amount->MaxLength = 3;
	}
	// Menustrip
		//Exit
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
		// Show date and time
	private: System::Void dateAndTimeToolStripMenuItem_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (status->Visible == false)
		{
			CheckState::Unchecked;
			status->Visible = true;
		}
		else
		{
			CheckState::Checked;
			status->Visible = false;
		}
	}
		// Refresh
	private: System::Void refreshToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		gold->Refresh();
		gtdata->Refresh();
		taladthong->Refresh();
		rewind->Refresh();
	}
		// About
	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		MessageBox::Show(L"พัฒนาโดย ภาษา C++", "About", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
		// Clear
	private: System::Void clearToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		clear_Click(sender, e);
	}
	private: System::Void pull_Click(System::Object^  sender, System::EventArgs^  e)
	{
		
	}
	private: System::Void defaultToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->BackColor = System::Drawing::Color::WhiteSmoke;
	}
	private: System::Void lightGreenToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->BackColor = System::Drawing::Color::FromArgb(139, 195, 74);
	}
	private: System::Void lightBlueToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->BackColor = System::Drawing::Color::FromArgb(3, 169, 244);
	}
private: System::Void panel_release_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
