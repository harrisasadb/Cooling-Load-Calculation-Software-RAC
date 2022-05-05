#pragma once

namespace RAC {

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
	private: System::Windows::Forms::Panel^  panelmain;
	protected:

	protected:






	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  buttonexit;
	private: System::Windows::Forms::Button^  buttonnew;
	private: System::Windows::Forms::Button^  buttonabout;



	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  buttonback;

	private: System::Windows::Forms::Button^  buttonnext;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblnet;

	private: System::Windows::Forms::Label^  lblvent;

	private: System::Windows::Forms::Label^  lblinternal;

	private: System::Windows::Forms::Label^  lblexternal;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  txtintemp;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  txtouthumidity;

	private: System::Windows::Forms::TextBox^  txtinhumidity;


	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  txtouttemp;


	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  txtwallh2;


	private: System::Windows::Forms::TextBox^  txtwalll2;
	private: System::Windows::Forms::TextBox^  txtwallh1;



	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  txtwalll1;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;


	private: System::Windows::Forms::TextBox^  txtwallh3;

	private: System::Windows::Forms::TextBox^  txtwalll3;






	private: System::Windows::Forms::Label^  label23;


	private: System::Windows::Forms::TextBox^  txtwallh4;

	private: System::Windows::Forms::TextBox^  txtwalll4;

	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label17;





















private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::TextBox^  txtwinclf4;

private: System::Windows::Forms::TextBox^  txtwinw4;

private: System::Windows::Forms::TextBox^  txtwinl4;

private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TextBox^  txtwinclf3;

private: System::Windows::Forms::TextBox^  txtwinw3;

private: System::Windows::Forms::TextBox^  txtwinl3;
private: System::Windows::Forms::TextBox^  txtwinclf2;


private: System::Windows::Forms::TextBox^  txtwinclf1;

private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::TextBox^  txtwinw2;

private: System::Windows::Forms::TextBox^  txtwinl2;
private: System::Windows::Forms::TextBox^  txtwinw1;


private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::TextBox^  txtwinl1;

private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::TextBox^  txtappclf;














private: System::Windows::Forms::TextBox^  txtapp;


private: System::Windows::Forms::Label^  label45;

private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Panel^  panel6;
private: System::Windows::Forms::TextBox^  txtpplclf;












private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::TextBox^  txtoccupants;



private: System::Windows::Forms::Label^  label53;

private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Panel^  panel7;
private: System::Windows::Forms::TextBox^  txtvent;


















private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::ComboBox^  cmbactivity;

private: System::Windows::Forms::Label^  lblstatus;
private: System::Windows::Forms::Panel^  panelabout;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  lblnett;

private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::TextBox^  txtlightclf;

private: System::Windows::Forms::TextBox^  txtlight;

private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::TextBox^  txtwalltd4;

private: System::Windows::Forms::TextBox^  txtwalltd3;

private: System::Windows::Forms::TextBox^  txtwalltd2;

private: System::Windows::Forms::TextBox^  txtwalltd1;

private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::TextBox^  txtrtd;

private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::TextBox^  txtrw;

private: System::Windows::Forms::TextBox^  txtrl;
private: System::Windows::Forms::Label^  label24;



















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panelmain = (gcnew System::Windows::Forms::Panel());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->lblnett = (gcnew System::Windows::Forms::Label());
			this->lblnet = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblvent = (gcnew System::Windows::Forms::Label());
			this->lblinternal = (gcnew System::Windows::Forms::Label());
			this->lblexternal = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonexit = (gcnew System::Windows::Forms::Button());
			this->buttonnew = (gcnew System::Windows::Forms::Button());
			this->buttonabout = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonback = (gcnew System::Windows::Forms::Button());
			this->buttonnext = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtouthumidity = (gcnew System::Windows::Forms::TextBox());
			this->txtinhumidity = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtouttemp = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtintemp = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txtrtd = (gcnew System::Windows::Forms::TextBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->txtrw = (gcnew System::Windows::Forms::TextBox());
			this->txtrl = (gcnew System::Windows::Forms::TextBox());
			this->txtwalltd4 = (gcnew System::Windows::Forms::TextBox());
			this->txtwalltd3 = (gcnew System::Windows::Forms::TextBox());
			this->txtwalltd2 = (gcnew System::Windows::Forms::TextBox());
			this->txtwalltd1 = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txtwallh4 = (gcnew System::Windows::Forms::TextBox());
			this->txtwalll4 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtwallh3 = (gcnew System::Windows::Forms::TextBox());
			this->txtwalll3 = (gcnew System::Windows::Forms::TextBox());
			this->txtwallh2 = (gcnew System::Windows::Forms::TextBox());
			this->txtwalll2 = (gcnew System::Windows::Forms::TextBox());
			this->txtwallh1 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txtwalll1 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->txtwinclf4 = (gcnew System::Windows::Forms::TextBox());
			this->txtwinw4 = (gcnew System::Windows::Forms::TextBox());
			this->txtwinl4 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->txtwinclf3 = (gcnew System::Windows::Forms::TextBox());
			this->txtwinw3 = (gcnew System::Windows::Forms::TextBox());
			this->txtwinl3 = (gcnew System::Windows::Forms::TextBox());
			this->txtwinclf2 = (gcnew System::Windows::Forms::TextBox());
			this->txtwinclf1 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->txtwinw2 = (gcnew System::Windows::Forms::TextBox());
			this->txtwinl2 = (gcnew System::Windows::Forms::TextBox());
			this->txtwinw1 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->txtwinl1 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->txtlightclf = (gcnew System::Windows::Forms::TextBox());
			this->txtlight = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtappclf = (gcnew System::Windows::Forms::TextBox());
			this->txtapp = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cmbactivity = (gcnew System::Windows::Forms::ComboBox());
			this->txtpplclf = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->txtoccupants = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->txtvent = (gcnew System::Windows::Forms::TextBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->lblstatus = (gcnew System::Windows::Forms::Label());
			this->panelabout = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->panelmain->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panelabout->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelmain
			// 
			this->panelmain->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelmain->Controls->Add(this->label57);
			this->panelmain->Controls->Add(this->lblnett);
			this->panelmain->Controls->Add(this->lblnet);
			this->panelmain->Controls->Add(this->label8);
			this->panelmain->Controls->Add(this->lblvent);
			this->panelmain->Controls->Add(this->lblinternal);
			this->panelmain->Controls->Add(this->lblexternal);
			this->panelmain->Controls->Add(this->label6);
			this->panelmain->Controls->Add(this->label5);
			this->panelmain->Controls->Add(this->label4);
			this->panelmain->Controls->Add(this->label2);
			this->panelmain->Controls->Add(this->label1);
			this->panelmain->Location = System::Drawing::Point(10, 85);
			this->panelmain->Name = L"panelmain";
			this->panelmain->Size = System::Drawing::Size(560, 220);
			this->panelmain->TabIndex = 4;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(16, 65);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(425, 13);
			this->label57->TabIndex = 23;
			this->label57->Text = L"The results will be displayed on this page. Click on the \'New\' button to begin th"
				L"e process.";
			// 
			// lblnett
			// 
			this->lblnett->AutoSize = true;
			this->lblnett->Location = System::Drawing::Point(239, 187);
			this->lblnett->Name = L"lblnett";
			this->lblnett->Size = System::Drawing::Size(13, 13);
			this->lblnett->TabIndex = 22;
			this->lblnett->Text = L"0";
			// 
			// lblnet
			// 
			this->lblnet->AutoSize = true;
			this->lblnet->Location = System::Drawing::Point(240, 165);
			this->lblnet->Name = L"lblnet";
			this->lblnet->Size = System::Drawing::Size(13, 13);
			this->lblnet->TabIndex = 13;
			this->lblnet->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(102, 187);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(133, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Net Cooling Load (tonnes):";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// lblvent
			// 
			this->lblvent->AutoSize = true;
			this->lblvent->Location = System::Drawing::Point(240, 134);
			this->lblvent->Name = L"lblvent";
			this->lblvent->Size = System::Drawing::Size(13, 13);
			this->lblvent->TabIndex = 12;
			this->lblvent->Text = L"0";
			// 
			// lblinternal
			// 
			this->lblinternal->AutoSize = true;
			this->lblinternal->Location = System::Drawing::Point(240, 110);
			this->lblinternal->Name = L"lblinternal";
			this->lblinternal->Size = System::Drawing::Size(13, 13);
			this->lblinternal->TabIndex = 11;
			this->lblinternal->Text = L"0";
			// 
			// lblexternal
			// 
			this->lblexternal->AutoSize = true;
			this->lblexternal->Location = System::Drawing::Point(240, 88);
			this->lblexternal->Name = L"lblexternal";
			this->lblexternal->Size = System::Drawing::Size(13, 13);
			this->lblexternal->TabIndex = 10;
			this->lblexternal->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(118, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Net Cooling Load (kW):";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(86, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Ventilation Cooling Load (kW):";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(100, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Internal Cooling Load (kW):";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(97, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"External Cooling Load (kW):";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(16, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(529, 45);
			this->label1->TabIndex = 5;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Window;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(28, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(210, 24);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Cooling Load Calculator";
			// 
			// buttonexit
			// 
			this->buttonexit->Location = System::Drawing::Point(484, 311);
			this->buttonexit->Name = L"buttonexit";
			this->buttonexit->Size = System::Drawing::Size(88, 38);
			this->buttonexit->TabIndex = 5;
			this->buttonexit->Text = L"Exit";
			this->buttonexit->UseVisualStyleBackColor = true;
			this->buttonexit->Click += gcnew System::EventHandler(this, &MyForm::buttonexit_Click);
			// 
			// buttonnew
			// 
			this->buttonnew->Location = System::Drawing::Point(382, 311);
			this->buttonnew->Name = L"buttonnew";
			this->buttonnew->Size = System::Drawing::Size(88, 38);
			this->buttonnew->TabIndex = 6;
			this->buttonnew->Text = L"New";
			this->buttonnew->UseVisualStyleBackColor = true;
			this->buttonnew->Click += gcnew System::EventHandler(this, &MyForm::buttonnew_Click);
			// 
			// buttonabout
			// 
			this->buttonabout->Location = System::Drawing::Point(288, 311);
			this->buttonabout->Name = L"buttonabout";
			this->buttonabout->Size = System::Drawing::Size(88, 38);
			this->buttonabout->TabIndex = 7;
			this->buttonabout->Text = L"About";
			this->buttonabout->UseVisualStyleBackColor = true;
			this->buttonabout->Click += gcnew System::EventHandler(this, &MyForm::buttonabout_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(-2, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(596, 78);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// buttonback
			// 
			this->buttonback->Enabled = false;
			this->buttonback->Location = System::Drawing::Point(288, 311);
			this->buttonback->Name = L"buttonback";
			this->buttonback->Size = System::Drawing::Size(88, 38);
			this->buttonback->TabIndex = 10;
			this->buttonback->Text = L"Back";
			this->buttonback->UseVisualStyleBackColor = true;
			this->buttonback->Visible = false;
			this->buttonback->Click += gcnew System::EventHandler(this, &MyForm::buttonback_Click);
			// 
			// buttonnext
			// 
			this->buttonnext->Location = System::Drawing::Point(382, 311);
			this->buttonnext->Name = L"buttonnext";
			this->buttonnext->Size = System::Drawing::Size(88, 38);
			this->buttonnext->TabIndex = 9;
			this->buttonnext->Text = L"Next";
			this->buttonnext->UseVisualStyleBackColor = true;
			this->buttonnext->Visible = false;
			this->buttonnext->Click += gcnew System::EventHandler(this, &MyForm::buttonnext_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label56);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->txtouthumidity);
			this->panel1->Controls->Add(this->txtinhumidity);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->txtouttemp);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->txtintemp);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Location = System::Drawing::Point(10, 85);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(560, 220);
			this->panel1->TabIndex = 12;
			this->panel1->Visible = false;
			// 
			// label56
			// 
			this->label56->Location = System::Drawing::Point(32, 32);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(513, 43);
			this->label56->TabIndex = 19;
			this->label56->Text = resources->GetString(L"label56.Text");
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(293, 121);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(109, 13);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Relative Humidity (%):";
			this->label15->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtouthumidity
			// 
			this->txtouthumidity->Location = System::Drawing::Point(413, 118);
			this->txtouthumidity->Name = L"txtouthumidity";
			this->txtouthumidity->Size = System::Drawing::Size(80, 20);
			this->txtouthumidity->TabIndex = 14;
			this->txtouthumidity->Text = L"30";
			// 
			// txtinhumidity
			// 
			this->txtinhumidity->Location = System::Drawing::Point(413, 85);
			this->txtinhumidity->Name = L"txtinhumidity";
			this->txtinhumidity->Size = System::Drawing::Size(80, 20);
			this->txtinhumidity->TabIndex = 12;
			this->txtinhumidity->Text = L"25";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(293, 88);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(109, 13);
			this->label14->TabIndex = 11;
			this->label14->Text = L"Relative Humidity (%):";
			this->label14->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtouttemp
			// 
			this->txtouttemp->Location = System::Drawing::Point(200, 118);
			this->txtouttemp->Name = L"txtouttemp";
			this->txtouttemp->Size = System::Drawing::Size(80, 20);
			this->txtouttemp->TabIndex = 10;
			this->txtouttemp->Text = L"40";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(28, 121);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(163, 13);
			this->label13->TabIndex = 9;
			this->label13->Text = L"Outdoor dry bulb temperature (C):";
			this->label13->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtintemp
			// 
			this->txtintemp->Location = System::Drawing::Point(200, 85);
			this->txtintemp->Name = L"txtintemp";
			this->txtintemp->Size = System::Drawing::Size(80, 20);
			this->txtintemp->TabIndex = 8;
			this->txtintemp->Text = L"22";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(37, 88);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(155, 13);
			this->label12->TabIndex = 7;
			this->label12->Text = L"Indoor dry bulb temperature (C):";
			this->label12->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(16, 17);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(529, 45);
			this->label11->TabIndex = 6;
			this->label11->Text = L"(1) Design Conditions";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->txtrtd);
			this->panel2->Controls->Add(this->label59);
			this->panel2->Controls->Add(this->txtrw);
			this->panel2->Controls->Add(this->txtrl);
			this->panel2->Controls->Add(this->txtwalltd4);
			this->panel2->Controls->Add(this->txtwalltd3);
			this->panel2->Controls->Add(this->txtwalltd2);
			this->panel2->Controls->Add(this->txtwalltd1);
			this->panel2->Controls->Add(this->label58);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Controls->Add(this->txtwallh4);
			this->panel2->Controls->Add(this->txtwalll4);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->txtwallh3);
			this->panel2->Controls->Add(this->txtwalll3);
			this->panel2->Controls->Add(this->txtwallh2);
			this->panel2->Controls->Add(this->txtwalll2);
			this->panel2->Controls->Add(this->txtwallh1);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->txtwalll1);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->label51);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Location = System::Drawing::Point(10, 85);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(560, 220);
			this->panel2->TabIndex = 13;
			this->panel2->Visible = false;
			// 
			// txtrtd
			// 
			this->txtrtd->Location = System::Drawing::Point(457, 175);
			this->txtrtd->Name = L"txtrtd";
			this->txtrtd->Size = System::Drawing::Size(80, 20);
			this->txtrtd->TabIndex = 36;
			this->txtrtd->Text = L"27";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(481, 88);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(30, 13);
			this->label59->TabIndex = 35;
			this->label59->Text = L"Roof";
			this->label59->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtrw
			// 
			this->txtrw->Location = System::Drawing::Point(457, 143);
			this->txtrw->Name = L"txtrw";
			this->txtrw->Size = System::Drawing::Size(80, 20);
			this->txtrw->TabIndex = 34;
			this->txtrw->Text = L"3";
			// 
			// txtrl
			// 
			this->txtrl->Location = System::Drawing::Point(457, 110);
			this->txtrl->Name = L"txtrl";
			this->txtrl->Size = System::Drawing::Size(80, 20);
			this->txtrl->TabIndex = 33;
			this->txtrl->Text = L"4";
			// 
			// txtwalltd4
			// 
			this->txtwalltd4->Location = System::Drawing::Point(365, 175);
			this->txtwalltd4->Name = L"txtwalltd4";
			this->txtwalltd4->Size = System::Drawing::Size(80, 20);
			this->txtwalltd4->TabIndex = 32;
			this->txtwalltd4->Text = L"19";
			// 
			// txtwalltd3
			// 
			this->txtwalltd3->Location = System::Drawing::Point(279, 175);
			this->txtwalltd3->Name = L"txtwalltd3";
			this->txtwalltd3->Size = System::Drawing::Size(80, 20);
			this->txtwalltd3->TabIndex = 31;
			this->txtwalltd3->Text = L"23";
			// 
			// txtwalltd2
			// 
			this->txtwalltd2->Location = System::Drawing::Point(193, 175);
			this->txtwalltd2->Name = L"txtwalltd2";
			this->txtwalltd2->Size = System::Drawing::Size(80, 20);
			this->txtwalltd2->TabIndex = 30;
			this->txtwalltd2->Text = L"21";
			// 
			// txtwalltd1
			// 
			this->txtwalltd1->Location = System::Drawing::Point(108, 175);
			this->txtwalltd1->Name = L"txtwalltd1";
			this->txtwalltd1->Size = System::Drawing::Size(80, 20);
			this->txtwalltd1->TabIndex = 29;
			this->txtwalltd1->Text = L"13";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(38, 178);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(38, 13);
			this->label58->TabIndex = 28;
			this->label58->Text = L"CLTD:";
			this->label58->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(383, 88);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(37, 13);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Wall 4";
			this->label23->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtwallh4
			// 
			this->txtwallh4->Location = System::Drawing::Point(365, 143);
			this->txtwallh4->Name = L"txtwallh4";
			this->txtwallh4->Size = System::Drawing::Size(80, 20);
			this->txtwallh4->TabIndex = 24;
			this->txtwallh4->Text = L"0";
			// 
			// txtwalll4
			// 
			this->txtwalll4->Location = System::Drawing::Point(365, 110);
			this->txtwalll4->Name = L"txtwalll4";
			this->txtwalll4->Size = System::Drawing::Size(80, 20);
			this->txtwalll4->TabIndex = 23;
			this->txtwalll4->Text = L"0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(297, 88);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(37, 13);
			this->label22->TabIndex = 22;
			this->label22->Text = L"Wall 3";
			this->label22->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(214, 88);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(37, 13);
			this->label21->TabIndex = 21;
			this->label21->Text = L"Wall 2";
			this->label21->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(126, 88);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(37, 13);
			this->label17->TabIndex = 20;
			this->label17->Text = L"Wall 1";
			this->label17->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtwallh3
			// 
			this->txtwallh3->Location = System::Drawing::Point(279, 143);
			this->txtwallh3->Name = L"txtwallh3";
			this->txtwallh3->Size = System::Drawing::Size(80, 20);
			this->txtwallh3->TabIndex = 18;
			this->txtwallh3->Text = L"0";
			// 
			// txtwalll3
			// 
			this->txtwalll3->Location = System::Drawing::Point(279, 110);
			this->txtwalll3->Name = L"txtwalll3";
			this->txtwalll3->Size = System::Drawing::Size(80, 20);
			this->txtwalll3->TabIndex = 17;
			this->txtwalll3->Text = L"0";
			// 
			// txtwallh2
			// 
			this->txtwallh2->Location = System::Drawing::Point(193, 143);
			this->txtwallh2->Name = L"txtwallh2";
			this->txtwallh2->Size = System::Drawing::Size(80, 20);
			this->txtwallh2->TabIndex = 14;
			this->txtwallh2->Text = L"3";
			this->txtwallh2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// txtwalll2
			// 
			this->txtwalll2->Location = System::Drawing::Point(193, 110);
			this->txtwalll2->Name = L"txtwalll2";
			this->txtwalll2->Size = System::Drawing::Size(80, 20);
			this->txtwalll2->TabIndex = 12;
			this->txtwalll2->Text = L"3";
			this->txtwalll2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// txtwallh1
			// 
			this->txtwallh1->Location = System::Drawing::Point(108, 143);
			this->txtwallh1->Name = L"txtwallh1";
			this->txtwallh1->Size = System::Drawing::Size(80, 20);
			this->txtwallh1->TabIndex = 10;
			this->txtwallh1->Text = L"3";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(38, 146);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(58, 13);
			this->label18->TabIndex = 9;
			this->label18->Text = L"Height (m):";
			this->label18->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtwalll1
			// 
			this->txtwalll1->Location = System::Drawing::Point(108, 110);
			this->txtwalll1->Name = L"txtwalll1";
			this->txtwalll1->Size = System::Drawing::Size(80, 20);
			this->txtwalll1->TabIndex = 8;
			this->txtwalll1->Text = L"4";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(38, 113);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(60, 13);
			this->label19->TabIndex = 7;
			this->label19->Text = L"Length (m):";
			this->label19->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label51
			// 
			this->label51->Location = System::Drawing::Point(32, 32);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(513, 43);
			this->label51->TabIndex = 27;
			this->label51->Text = resources->GetString(L"label51.Text");
			// 
			// label20
			// 
			this->label20->Location = System::Drawing::Point(16, 17);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(529, 22);
			this->label20->TabIndex = 6;
			this->label20->Text = L"(2) External Loads: Conduction through Walls, Windows and Roof";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label24);
			this->panel4->Controls->Add(this->label32);
			this->panel4->Controls->Add(this->txtwinclf4);
			this->panel4->Controls->Add(this->txtwinw4);
			this->panel4->Controls->Add(this->txtwinl4);
			this->panel4->Controls->Add(this->label33);
			this->panel4->Controls->Add(this->label34);
			this->panel4->Controls->Add(this->label35);
			this->panel4->Controls->Add(this->txtwinclf3);
			this->panel4->Controls->Add(this->txtwinw3);
			this->panel4->Controls->Add(this->txtwinl3);
			this->panel4->Controls->Add(this->txtwinclf2);
			this->panel4->Controls->Add(this->txtwinclf1);
			this->panel4->Controls->Add(this->label36);
			this->panel4->Controls->Add(this->txtwinw2);
			this->panel4->Controls->Add(this->txtwinl2);
			this->panel4->Controls->Add(this->txtwinw1);
			this->panel4->Controls->Add(this->label37);
			this->panel4->Controls->Add(this->txtwinl1);
			this->panel4->Controls->Add(this->label38);
			this->panel4->Controls->Add(this->label39);
			this->panel4->Location = System::Drawing::Point(10, 85);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(560, 220);
			this->panel4->TabIndex = 15;
			this->panel4->Visible = false;
			// 
			// label24
			// 
			this->label24->Location = System::Drawing::Point(32, 32);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(513, 55);
			this->label24->TabIndex = 28;
			this->label24->Text = resources->GetString(L"label24.Text");
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(446, 87);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(55, 13);
			this->label32->TabIndex = 26;
			this->label32->Text = L"Window 4";
			this->label32->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtwinclf4
			// 
			this->txtwinclf4->Location = System::Drawing::Point(434, 174);
			this->txtwinclf4->Name = L"txtwinclf4";
			this->txtwinclf4->Size = System::Drawing::Size(80, 20);
			this->txtwinclf4->TabIndex = 25;
			this->txtwinclf4->Text = L"416";
			// 
			// txtwinw4
			// 
			this->txtwinw4->Location = System::Drawing::Point(434, 142);
			this->txtwinw4->Name = L"txtwinw4";
			this->txtwinw4->Size = System::Drawing::Size(80, 20);
			this->txtwinw4->TabIndex = 24;
			this->txtwinw4->Text = L"0";
			// 
			// txtwinl4
			// 
			this->txtwinl4->Location = System::Drawing::Point(434, 109);
			this->txtwinl4->Name = L"txtwinl4";
			this->txtwinl4->Size = System::Drawing::Size(80, 20);
			this->txtwinl4->TabIndex = 23;
			this->txtwinl4->Text = L"0";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(360, 87);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(55, 13);
			this->label33->TabIndex = 22;
			this->label33->Text = L"Window 3";
			this->label33->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(277, 87);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(55, 13);
			this->label34->TabIndex = 21;
			this->label34->Text = L"Window 2";
			this->label34->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(189, 87);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(55, 13);
			this->label35->TabIndex = 20;
			this->label35->Text = L"Window 1";
			this->label35->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtwinclf3
			// 
			this->txtwinclf3->Location = System::Drawing::Point(348, 174);
			this->txtwinclf3->Name = L"txtwinclf3";
			this->txtwinclf3->Size = System::Drawing::Size(80, 20);
			this->txtwinclf3->TabIndex = 19;
			this->txtwinclf3->Text = L"101";
			// 
			// txtwinw3
			// 
			this->txtwinw3->Location = System::Drawing::Point(348, 142);
			this->txtwinw3->Name = L"txtwinw3";
			this->txtwinw3->Size = System::Drawing::Size(80, 20);
			this->txtwinw3->TabIndex = 18;
			this->txtwinw3->Text = L"0";
			// 
			// txtwinl3
			// 
			this->txtwinl3->Location = System::Drawing::Point(348, 109);
			this->txtwinl3->Name = L"txtwinl3";
			this->txtwinl3->Size = System::Drawing::Size(80, 20);
			this->txtwinl3->TabIndex = 17;
			this->txtwinl3->Text = L"0";
			// 
			// txtwinclf2
			// 
			this->txtwinclf2->Location = System::Drawing::Point(262, 174);
			this->txtwinclf2->Name = L"txtwinclf2";
			this->txtwinclf2->Size = System::Drawing::Size(80, 20);
			this->txtwinclf2->TabIndex = 16;
			this->txtwinclf2->Text = L"170";
			// 
			// txtwinclf1
			// 
			this->txtwinclf1->Location = System::Drawing::Point(177, 174);
			this->txtwinclf1->Name = L"txtwinclf1";
			this->txtwinclf1->Size = System::Drawing::Size(80, 20);
			this->txtwinclf1->TabIndex = 15;
			this->txtwinclf1->Text = L"148";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(43, 177);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(128, 13);
			this->label36->TabIndex = 14;
			this->label36->Text = L"Solar Cooling Load (SCL):";
			this->label36->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtwinw2
			// 
			this->txtwinw2->Location = System::Drawing::Point(262, 142);
			this->txtwinw2->Name = L"txtwinw2";
			this->txtwinw2->Size = System::Drawing::Size(80, 20);
			this->txtwinw2->TabIndex = 14;
			this->txtwinw2->Text = L"2";
			// 
			// txtwinl2
			// 
			this->txtwinl2->Location = System::Drawing::Point(262, 109);
			this->txtwinl2->Name = L"txtwinl2";
			this->txtwinl2->Size = System::Drawing::Size(80, 20);
			this->txtwinl2->TabIndex = 12;
			this->txtwinl2->Text = L"1.25";
			// 
			// txtwinw1
			// 
			this->txtwinw1->Location = System::Drawing::Point(177, 142);
			this->txtwinw1->Name = L"txtwinw1";
			this->txtwinw1->Size = System::Drawing::Size(80, 20);
			this->txtwinw1->TabIndex = 10;
			this->txtwinw1->Text = L"2";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(116, 145);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(55, 13);
			this->label37->TabIndex = 9;
			this->label37->Text = L"Width (m):";
			this->label37->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtwinl1
			// 
			this->txtwinl1->Location = System::Drawing::Point(177, 109);
			this->txtwinl1->Name = L"txtwinl1";
			this->txtwinl1->Size = System::Drawing::Size(80, 20);
			this->txtwinl1->TabIndex = 8;
			this->txtwinl1->Text = L"1.25";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(111, 112);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(60, 13);
			this->label38->TabIndex = 7;
			this->label38->Text = L"Length (m):";
			this->label38->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label39
			// 
			this->label39->Location = System::Drawing::Point(16, 17);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(529, 22);
			this->label39->TabIndex = 6;
			this->label39->Text = L"(3) External Loads: Solar heat gain through windows";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->label49);
			this->panel5->Controls->Add(this->txtlightclf);
			this->panel5->Controls->Add(this->txtlight);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->label10);
			this->panel5->Controls->Add(this->txtappclf);
			this->panel5->Controls->Add(this->txtapp);
			this->panel5->Controls->Add(this->label45);
			this->panel5->Controls->Add(this->label46);
			this->panel5->Controls->Add(this->label47);
			this->panel5->Location = System::Drawing::Point(10, 85);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(560, 220);
			this->panel5->TabIndex = 16;
			this->panel5->Visible = false;
			// 
			// label49
			// 
			this->label49->Location = System::Drawing::Point(32, 30);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(513, 52);
			this->label49->TabIndex = 19;
			this->label49->Text = resources->GetString(L"label49.Text");
			// 
			// txtlightclf
			// 
			this->txtlightclf->Location = System::Drawing::Point(285, 170);
			this->txtlightclf->Name = L"txtlightclf";
			this->txtlightclf->Size = System::Drawing::Size(80, 20);
			this->txtlightclf->TabIndex = 18;
			this->txtlightclf->Text = L"1";
			// 
			// txtlight
			// 
			this->txtlight->Location = System::Drawing::Point(285, 141);
			this->txtlight->Name = L"txtlight";
			this->txtlight->Size = System::Drawing::Size(80, 20);
			this->txtlight->TabIndex = 17;
			this->txtlight->Text = L"64";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(128, 173);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(151, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Cooling Load Factor for Lights:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(86, 144);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(191, 13);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Total Input Power Rating of Lights (W):";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtappclf
			// 
			this->txtappclf->Location = System::Drawing::Point(285, 112);
			this->txtappclf->Name = L"txtappclf";
			this->txtappclf->Size = System::Drawing::Size(80, 20);
			this->txtappclf->TabIndex = 14;
			this->txtappclf->Text = L"1";
			// 
			// txtapp
			// 
			this->txtapp->Location = System::Drawing::Point(285, 85);
			this->txtapp->Name = L"txtapp";
			this->txtapp->Size = System::Drawing::Size(80, 20);
			this->txtapp->TabIndex = 12;
			this->txtapp->Text = L"500";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(105, 115);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(175, 13);
			this->label45->TabIndex = 9;
			this->label45->Text = L"Cooling Load Factor for Appliances:";
			this->label45->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(64, 88);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(215, 13);
			this->label46->TabIndex = 7;
			this->label46->Text = L"Total Input Power Rating of Appliances (W):";
			this->label46->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label47
			// 
			this->label47->Location = System::Drawing::Point(16, 17);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(529, 22);
			this->label47->TabIndex = 6;
			this->label47->Text = L"(4) Internal Loads: Appliances and Lighting";
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->label7);
			this->panel6->Controls->Add(this->cmbactivity);
			this->panel6->Controls->Add(this->txtpplclf);
			this->panel6->Controls->Add(this->label52);
			this->panel6->Controls->Add(this->txtoccupants);
			this->panel6->Controls->Add(this->label53);
			this->panel6->Controls->Add(this->label54);
			this->panel6->Controls->Add(this->label55);
			this->panel6->Location = System::Drawing::Point(10, 85);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(560, 220);
			this->panel6->TabIndex = 17;
			this->panel6->Visible = false;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(32, 30);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(513, 52);
			this->label7->TabIndex = 18;
			this->label7->Text = resources->GetString(L"label7.Text");
			// 
			// cmbactivity
			// 
			this->cmbactivity->FormattingEnabled = true;
			this->cmbactivity->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Seated at theater", L"Moderately active office work",
					L"Walking, Standing", L"Moderate Dancing", L"Athletics, Gymnasium"
			});
			this->cmbactivity->Location = System::Drawing::Point(285, 117);
			this->cmbactivity->Name = L"cmbactivity";
			this->cmbactivity->Size = System::Drawing::Size(160, 21);
			this->cmbactivity->TabIndex = 17;
			// 
			// txtpplclf
			// 
			this->txtpplclf->Location = System::Drawing::Point(285, 150);
			this->txtpplclf->Name = L"txtpplclf";
			this->txtpplclf->Size = System::Drawing::Size(80, 20);
			this->txtpplclf->TabIndex = 16;
			this->txtpplclf->Text = L"1";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(174, 153);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(105, 13);
			this->label52->TabIndex = 14;
			this->label52->Text = L"Cooling Load Factor:";
			this->label52->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtoccupants
			// 
			this->txtoccupants->Location = System::Drawing::Point(285, 85);
			this->txtoccupants->Name = L"txtoccupants";
			this->txtoccupants->Size = System::Drawing::Size(80, 20);
			this->txtoccupants->TabIndex = 12;
			this->txtoccupants->Text = L"2";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(130, 121);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(152, 13);
			this->label53->TabIndex = 9;
			this->label53->Text = L"Level of Activity of Occupants:";
			this->label53->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(125, 88);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(155, 13);
			this->label54->TabIndex = 7;
			this->label54->Text = L"Average number of Occupants:";
			this->label54->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label55
			// 
			this->label55->Location = System::Drawing::Point(16, 17);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(529, 22);
			this->label55->TabIndex = 6;
			this->label55->Text = L"(5) Internal Loads: People";
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label50);
			this->panel7->Controls->Add(this->txtvent);
			this->panel7->Controls->Add(this->label62);
			this->panel7->Controls->Add(this->label63);
			this->panel7->Location = System::Drawing::Point(10, 85);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(560, 220);
			this->panel7->TabIndex = 18;
			this->panel7->Visible = false;
			// 
			// label50
			// 
			this->label50->Location = System::Drawing::Point(32, 31);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(513, 52);
			this->label50->TabIndex = 20;
			this->label50->Text = L"Ventilation load calculations are detailed in the ASHRAE standard 62.";
			// 
			// txtvent
			// 
			this->txtvent->Location = System::Drawing::Point(285, 85);
			this->txtvent->Name = L"txtvent";
			this->txtvent->Size = System::Drawing::Size(80, 20);
			this->txtvent->TabIndex = 12;
			this->txtvent->Text = L"1";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(117, 88);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(165, 13);
			this->label62->TabIndex = 7;
			this->label62->Text = L"Calculated Ventilation Load (kW):";
			this->label62->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label63
			// 
			this->label63->Location = System::Drawing::Point(16, 17);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(529, 22);
			this->label63->TabIndex = 6;
			this->label63->Text = L"(6) Ventilation Load";
			// 
			// lblstatus
			// 
			this->lblstatus->Location = System::Drawing::Point(13, 324);
			this->lblstatus->Name = L"lblstatus";
			this->lblstatus->Size = System::Drawing::Size(271, 41);
			this->lblstatus->TabIndex = 19;
			this->lblstatus->Text = L"Total Load after each calculation will be shown here";
			this->lblstatus->Visible = false;
			// 
			// panelabout
			// 
			this->panelabout->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelabout->Controls->Add(this->label16);
			this->panelabout->Controls->Add(this->label48);
			this->panelabout->Controls->Add(this->label44);
			this->panelabout->Controls->Add(this->label43);
			this->panelabout->Controls->Add(this->label42);
			this->panelabout->Controls->Add(this->label40);
			this->panelabout->Controls->Add(this->label41);
			this->panelabout->Location = System::Drawing::Point(10, 85);
			this->panelabout->Name = L"panelabout";
			this->panelabout->Size = System::Drawing::Size(560, 220);
			this->panelabout->TabIndex = 20;
			this->panelabout->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(491, 187);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(54, 13);
			this->label16->TabIndex = 12;
			this->label16->Text = L"May 2018";
			this->label16->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(111, 62);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(166, 13);
			this->label48->TabIndex = 11;
			this->label48->Text = L"Programmed and documented by,";
			this->label48->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(111, 134);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(125, 13);
			this->label44->TabIndex = 10;
			this->label44->Text = L"Under the supervision of,";
			this->label44->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(213, 150);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(149, 13);
			this->label43->TabIndex = 9;
			this->label43->Text = L"Mr. Imran Khan (DME, PIEAS)";
			this->label43->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(212, 97);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(61, 13);
			this->label42->TabIndex = 8;
			this->label42->Text = L"Harris Asad";
			this->label42->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(211, 78);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(102, 13);
			this->label40->TabIndex = 7;
			this->label40->Text = L"Sheikh Emad ud din";
			this->label40->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label41
			// 
			this->label41->Location = System::Drawing::Point(16, 17);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(529, 45);
			this->label41->TabIndex = 6;
			this->label41->Text = L"This software was made for PIEAS (Pakistan Institute of Engineering and Applied S"
				L"ciences) as part of a Term Project for the \'Refrigeration and Air Conditioning\' "
				L"course";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->lblstatus);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->buttonexit);
			this->Controls->Add(this->buttonback);
			this->Controls->Add(this->buttonnext);
			this->Controls->Add(this->buttonabout);
			this->Controls->Add(this->buttonnew);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelmain);
			this->Controls->Add(this->panelabout);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cooling Load Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelmain->ResumeLayout(false);
			this->panelmain->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panelabout->ResumeLayout(false);
			this->panelabout->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		double extload = 0;
		double intload = 0;
		double ventload = 0;
		double netload = 0;

		double interim = 0;

private: System::Void buttonnew_Click(System::Object^  sender, System::EventArgs^  e) {
	extload = 0;					//CLEANING VARIABLES
	intload = 0;
	ventload = 0;
	netload = 0;
	interim = 0;
	
	lblstatus->Visible = true;		//MANIPULATING INTERFACE
	lblstatus->Text = "Total Load after each calculation will be shown here";

	buttonnew->Visible = false;
	buttonabout->Visible = false;
	buttonnext->Visible	= true;	
	buttonback->Visible = true;
	buttonback->Enabled = false;

	panelmain->Visible = false;
	panel1->Visible = true;
}
private: System::Void buttonexit_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void buttonnext_Click(System::Object^  sender, System::EventArgs^  e) {
	if (panel1->Visible == true){		//GETTING DESIGN CONDITIONS
		panel1->Visible = false;
		panel2->Visible = true;
		buttonback->Enabled = true;
		lblstatus->Text = "Total Load: 0 kW";
	}
	else if (panel2->Visible == true){		// GETTING LOAD FROM WALLS
		panel2->Visible = false;
		panel4->Visible = true;
	}
	else if (panel4->Visible == true){		//GETTING LOAD FROM WINDOWS
		
		//Calculating Areas to be used in calculation
		double areaw1 = double::Parse(txtwinl1->Text) * double::Parse(txtwinw1->Text);
		double areaw2 = double::Parse(txtwinl2->Text) * double::Parse(txtwinw2->Text);
		double areaw3 = double::Parse(txtwinl3->Text) * double::Parse(txtwinw3->Text);
		double areaw4 = double::Parse(txtwinl4->Text) * double::Parse(txtwinw4->Text);

		double area1 = (double::Parse(txtwallh1->Text) * double::Parse(txtwalll1->Text)) - areaw1;
		double area2 = (double::Parse(txtwallh2->Text) * double::Parse(txtwalll2->Text)) - areaw2;
		double area3 = (double::Parse(txtwallh3->Text) * double::Parse(txtwalll3->Text)) - areaw3;
		double area4 = (double::Parse(txtwallh4->Text) * double::Parse(txtwalll4->Text)) - areaw4;

		double arear = double::Parse(txtrw->Text) * double::Parse(txtrl->Text);

		//Calculating Load from conduction
		//Calculating CLTD
		double tempcorr = (25.5 - double::Parse(txtintemp->Text)) + (double::Parse(txtouttemp->Text) - 29.4);
		double cltd1 = double::Parse(txtwalltd1->Text) + tempcorr;
		double cltd2 = double::Parse(txtwalltd2->Text) + tempcorr;
		double cltd3 = double::Parse(txtwalltd3->Text) + tempcorr;
		double cltd4 = double::Parse(txtwalltd4->Text) + tempcorr;
		double cltdr = double::Parse(txtrtd->Text) + tempcorr;

		//Assuming value of U is 2.61 W/m^2.K for walls
		//And the value is 5.91 W/m^2.K for glass
		
		//Calculating Q for walls
		interim = (area1 * cltd1) + (area2 * cltd2) + (area3 * cltd3) + (area4 * cltd4) + (arear * cltdr);
		interim = (interim * 2.61) / 1000;
		netload = netload + interim;
		extload = extload + interim;
		
		//Calculating Q for windows
		interim = (areaw1 * cltd1) + (areaw2 * cltd2) + (areaw3 * cltd3) + (areaw4 * cltd4);
		interim = (interim * 5.91) / 1000;
		netload = netload + interim;
		extload = extload + interim;

		//Calculation for Solar Heat Gain
		interim = (areaw1 * double::Parse(txtwinclf1->Text)) + (areaw2 * double::Parse(txtwinclf2->Text)) + (areaw3 * double::Parse(txtwinclf3->Text)) + (areaw4 * double::Parse(txtwinclf4->Text));
		interim = interim / 1000;
		netload = netload + interim;
		extload = extload + interim;
		lblstatus->Text = "Total load: " + netload.ToString() + " kW";

		interim = extload;		//Setting value for functionality of back button

		panel4->Visible = false;
		panel5->Visible = true;
	}
	else if (panel5->Visible == true){		//APPLIANCES LOAD
		
		interim = (double::Parse(txtapp->Text) * double::Parse(txtappclf->Text)) + (double::Parse(txtlight->Text) * double::Parse(txtlightclf->Text));
		interim = interim / 1000;
		netload = netload + interim;
		intload = intload + interim;
		lblstatus->Text = "Total load: " + netload.ToString() + " kW     Internal Load: " + interim.ToString() + " kW";
		
		panel5->Visible = false;
		panel6->Visible = true;
	}
	else if (panel6->Visible == true){		//PEOPLE LOAD

		double activity = 0;
		if (cmbactivity->Text == "Seated at theater"){
			activity = 0.095;
		}
		else if (cmbactivity->Text == "Moderately active office work"){
			activity = 0.13;
		}
		else if (cmbactivity->Text == "Walking, Standing"){
			activity = 0.145;
		}
		else if (cmbactivity->Text == "Moderate Dancing"){
			activity = 0.25;
		}
		else if (cmbactivity->Text == "Athletics, Gymnasium"){
			activity = 0.525;
		}
		interim = double::Parse(txtoccupants->Text) * activity * double::Parse(txtpplclf->Text);
		netload = netload + interim;
		intload = intload + interim;
		lblstatus->Text = "Total load: " + netload.ToString() + " kW     People Load: " + interim.ToString() + " kW";

		panel6->Visible = false;
		panel7->Visible = true;
		buttonnext->Text = "Finish";
	}
	else if (panel7->Visible == true){		//VENTILATION LOAD

		ventload = double::Parse(txtvent->Text);
		
		lblexternal->Text = extload.ToString();
		lblinternal->Text = intload.ToString();
		lblvent->Text = ventload.ToString();
		netload = extload + intload + ventload;
		lblnet->Text = netload.ToString();
		
		netload = netload / 3.51685;
		lblnett->Text = netload.ToString();

		panel7->Visible = false;			//Manipulating the interface
		panelmain->Visible = true;
		lblstatus->Visible = false;

		buttonnext->Text = "Next";
		buttonnew->Visible = true;
		buttonabout->Visible = true;
		buttonnext->Visible = false;
		buttonback->Visible = false;
	}
}
private: System::Void buttonabout_Click(System::Object^  sender, System::EventArgs^  e) {
	if (panelabout->Visible == false){
		buttonnew->Enabled = false;
		panelmain->Visible = false;
		panelabout->Visible = true;
	}
	else {
		buttonnew->Enabled = true;
		panelmain->Visible = true;
		panelabout->Visible = false;
	}

}
private: System::Void buttonback_Click(System::Object^  sender, System::EventArgs^  e) {
	if (panel2->Visible == true){
		panel2->Visible = false;
		panel1->Visible = true;
		buttonback->Enabled = false;
	}
	else if (panel4->Visible == true){		//Moving back to external load
		panel4->Visible = false;
		panel2->Visible = true;
	}
	else if (panel5->Visible == true){		//Moving back to windows
		netload = netload - interim;
		extload = extload - interim;

		panel5->Visible = false;
		panel4->Visible = true;
	}
	else if (panel6->Visible == true){		//Moving back to appliance load
		netload = netload - interim;
		intload = intload - interim;

		panel6->Visible = false;
		panel5->Visible = true;
	}
	else if (panel7->Visible == true){		//Moving back to people load
		netload = netload - interim;
		intload = intload - interim;

		panel7->Visible = false;
		panel6->Visible = true;
		buttonnext->Text = "Next";
	}
}
};
}
