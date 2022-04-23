#pragma once

namespace Loginform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Web;
	using namespace System::Net::Mail;

	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=database";
	private: System::Windows::Forms::Panel^ panel3;
	public:


	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton23;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox7;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton24;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox10;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox9;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton25;

	public:
		  //to generate a random otp con rango
		Random^ r = gcnew Random();
		int^ OTP = r->Next(1000, 9999);

		String^ username; //usuario que se envia para resetear al precionar el boton



















		   MySqlConnection^ con = gcnew MySqlConnection(constr); 

		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton21;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox2;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton22;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox6;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox5;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox3;
	private: Bunifu::Framework::UI::BunifuTextbox^ bunifuTextbox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->bunifuThinButton21 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuTextbox2 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuTextbox1 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuThinButton22 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuTextbox6 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuTextbox5 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuTextbox4 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuTextbox3 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton25 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton24 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton23 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuTextbox7 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuTextbox10 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuTextbox9 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->bunifuTextbox8 = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->linkLabel2);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->bunifuThinButton21);
			this->panel1->Controls->Add(this->bunifuTextbox2);
			this->panel1->Controls->Add(this->bunifuTextbox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(31, 74);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(325, 422);
			this->panel1->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(154, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"A ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(109, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"MALCORP";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->LinkColor = System::Drawing::Color::White;
			this->linkLabel2->Location = System::Drawing::Point(130, 351);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(70, 15);
			this->linkLabel2->TabIndex = 4;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Registrarse";
			this->linkLabel2->VisitedLinkColor = System::Drawing::Color::Cyan;
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkLabel2_LinkClicked);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Cyan;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(120, 250);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(169, 15);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"¿Has olvidado tu contraseña\?";
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::Cyan;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkLabel1_LinkClicked);
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 1;
			this->bunifuThinButton21->ActiveCornerRadius = 20;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::Blue;
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"Iniciar Secion";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton21->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuThinButton21->IdleBorderThickness = 1;
			this->bunifuThinButton21->IdleCornerRadius = 20;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::MediumBlue;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Location = System::Drawing::Point(75, 305);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(181, 41);
			this->bunifuThinButton21->TabIndex = 2;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton21->Click += gcnew System::EventHandler(this, &LoginForm::bunifuThinButton21_Click);
			// 
			// bunifuTextbox2
			// 
			this->bunifuTextbox2->BackColor = System::Drawing::Color::Gray;
			this->bunifuTextbox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox2.BackgroundImage")));
			this->bunifuTextbox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox2->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuTextbox2->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox2.Icon")));
			this->bunifuTextbox2->Location = System::Drawing::Point(39, 193);
			this->bunifuTextbox2->Name = L"bunifuTextbox2";
			this->bunifuTextbox2->Size = System::Drawing::Size(250, 42);
			this->bunifuTextbox2->TabIndex = 1;
			this->bunifuTextbox2->text = L"Contraseña";
			this->bunifuTextbox2->OnTextChange += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox2_OnTextChange);
			// 
			// bunifuTextbox1
			// 
			this->bunifuTextbox1->BackColor = System::Drawing::Color::Gray;
			this->bunifuTextbox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.BackgroundImage")));
			this->bunifuTextbox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox1->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuTextbox1->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox1.Icon")));
			this->bunifuTextbox1->Location = System::Drawing::Point(39, 123);
			this->bunifuTextbox1->Name = L"bunifuTextbox1";
			this->bunifuTextbox1->Size = System::Drawing::Size(250, 42);
			this->bunifuTextbox1->TabIndex = 1;
			this->bunifuTextbox1->text = L"Usuario";
			this->bunifuTextbox1->OnTextChange += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox1_OnTextChange);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(100, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BIENVENIDO";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->bunifuImageButton1);
			this->panel2->Controls->Add(this->bunifuThinButton22);
			this->panel2->Controls->Add(this->bunifuTextbox6);
			this->panel2->Controls->Add(this->bunifuTextbox5);
			this->panel2->Controls->Add(this->bunifuTextbox4);
			this->panel2->Controls->Add(this->bunifuTextbox3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(27, 74);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(325, 422);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::panel2_Paint);
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(21, 21);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(41, 42);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 3;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &LoginForm::bunifuImageButton1_Click);
			// 
			// bunifuThinButton22
			// 
			this->bunifuThinButton22->ActiveBorderThickness = 1;
			this->bunifuThinButton22->ActiveCornerRadius = 20;
			this->bunifuThinButton22->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton22->ActiveForecolor = System::Drawing::Color::Blue;
			this->bunifuThinButton22->ActiveLineColor = System::Drawing::Color::White;
			this->bunifuThinButton22->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton22.BackgroundImage")));
			this->bunifuThinButton22->ButtonText = L"Registarse";
			this->bunifuThinButton22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton22->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuThinButton22->IdleBorderThickness = 1;
			this->bunifuThinButton22->IdleCornerRadius = 20;
			this->bunifuThinButton22->IdleFillColor = System::Drawing::Color::MediumBlue;
			this->bunifuThinButton22->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton22->Location = System::Drawing::Point(78, 305);
			this->bunifuThinButton22->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->Size = System::Drawing::Size(181, 41);
			this->bunifuThinButton22->TabIndex = 2;
			this->bunifuThinButton22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton22->Click += gcnew System::EventHandler(this, &LoginForm::bunifuThinButton22_Click);
			// 
			// bunifuTextbox6
			// 
			this->bunifuTextbox6->BackColor = System::Drawing::Color::Gray;
			this->bunifuTextbox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox6.BackgroundImage")));
			this->bunifuTextbox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox6->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuTextbox6->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox6.Icon")));
			this->bunifuTextbox6->Location = System::Drawing::Point(43, 234);
			this->bunifuTextbox6->Name = L"bunifuTextbox6";
			this->bunifuTextbox6->Size = System::Drawing::Size(250, 42);
			this->bunifuTextbox6->TabIndex = 1;
			this->bunifuTextbox6->text = L"Confirma Contraseña";
			this->bunifuTextbox6->OnTextChange += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox6_OnTextChange);
			// 
			// bunifuTextbox5
			// 
			this->bunifuTextbox5->BackColor = System::Drawing::Color::Gray;
			this->bunifuTextbox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox5.BackgroundImage")));
			this->bunifuTextbox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox5->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuTextbox5->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox5.Icon")));
			this->bunifuTextbox5->Location = System::Drawing::Point(43, 186);
			this->bunifuTextbox5->Name = L"bunifuTextbox5";
			this->bunifuTextbox5->Size = System::Drawing::Size(250, 42);
			this->bunifuTextbox5->TabIndex = 1;
			this->bunifuTextbox5->text = L"Contraseña";
			this->bunifuTextbox5->OnTextChange += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox5_OnTextChange);
			// 
			// bunifuTextbox4
			// 
			this->bunifuTextbox4->BackColor = System::Drawing::Color::Gray;
			this->bunifuTextbox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox4.BackgroundImage")));
			this->bunifuTextbox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox4->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuTextbox4->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox4.Icon")));
			this->bunifuTextbox4->Location = System::Drawing::Point(43, 138);
			this->bunifuTextbox4->Name = L"bunifuTextbox4";
			this->bunifuTextbox4->Size = System::Drawing::Size(250, 42);
			this->bunifuTextbox4->TabIndex = 1;
			this->bunifuTextbox4->text = L"Nombre de Usuario";
			this->bunifuTextbox4->OnTextChange += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox4_OnTextChange);
			// 
			// bunifuTextbox3
			// 
			this->bunifuTextbox3->BackColor = System::Drawing::Color::Gray;
			this->bunifuTextbox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox3.BackgroundImage")));
			this->bunifuTextbox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox3->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuTextbox3->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox3.Icon")));
			this->bunifuTextbox3->Location = System::Drawing::Point(43, 90);
			this->bunifuTextbox3->Name = L"bunifuTextbox3";
			this->bunifuTextbox3->Size = System::Drawing::Size(250, 42);
			this->bunifuTextbox3->TabIndex = 1;
			this->bunifuTextbox3->text = L"Email";
			this->bunifuTextbox3->OnTextChange += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox3_OnTextChange);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(100, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"REGISTRO";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->bunifuThinButton25);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->bunifuThinButton24);
			this->panel3->Controls->Add(this->bunifuThinButton23);
			this->panel3->Controls->Add(this->bunifuTextbox7);
			this->panel3->Controls->Add(this->bunifuTextbox10);
			this->panel3->Controls->Add(this->bunifuTextbox9);
			this->panel3->Controls->Add(this->bunifuTextbox8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Location = System::Drawing::Point(31, 74);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(325, 422);
			this->panel3->TabIndex = 2;
			// 
			// bunifuThinButton25
			// 
			this->bunifuThinButton25->ActiveBorderThickness = 1;
			this->bunifuThinButton25->ActiveCornerRadius = 20;
			this->bunifuThinButton25->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton25->ActiveForecolor = System::Drawing::Color::Blue;
			this->bunifuThinButton25->ActiveLineColor = System::Drawing::Color::White;
			this->bunifuThinButton25->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton25.BackgroundImage")));
			this->bunifuThinButton25->ButtonText = L"Regresar";
			this->bunifuThinButton25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton25->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuThinButton25->IdleBorderThickness = 1;
			this->bunifuThinButton25->IdleCornerRadius = 20;
			this->bunifuThinButton25->IdleFillColor = System::Drawing::Color::MediumBlue;
			this->bunifuThinButton25->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton25->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton25->Location = System::Drawing::Point(39, 351);
			this->bunifuThinButton25->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton25->Name = L"bunifuThinButton25";
			this->bunifuThinButton25->Size = System::Drawing::Size(107, 41);
			this->bunifuThinButton25->TabIndex = 5;
			this->bunifuThinButton25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton25->Click += gcnew System::EventHandler(this, &LoginForm::bunifuThinButton25_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(39, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"OTP send tothis  numbre";
			this->label5->Click += gcnew System::EventHandler(this, &LoginForm::label5_Click_1);
			// 
			// bunifuThinButton24
			// 
			this->bunifuThinButton24->ActiveBorderThickness = 1;
			this->bunifuThinButton24->ActiveCornerRadius = 20;
			this->bunifuThinButton24->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton24->ActiveForecolor = System::Drawing::Color::Blue;
			this->bunifuThinButton24->ActiveLineColor = System::Drawing::Color::White;
			this->bunifuThinButton24->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton24.BackgroundImage")));
			this->bunifuThinButton24->ButtonText = L"Enviar OTP";
			this->bunifuThinButton24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton24->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuThinButton24->IdleBorderThickness = 1;
			this->bunifuThinButton24->IdleCornerRadius = 20;
			this->bunifuThinButton24->IdleFillColor = System::Drawing::Color::MediumBlue;
			this->bunifuThinButton24->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton24->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton24->Location = System::Drawing::Point(75, 110);
			this->bunifuThinButton24->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton24->Name = L"bunifuThinButton24";
			this->bunifuThinButton24->Size = System::Drawing::Size(181, 41);
			this->bunifuThinButton24->TabIndex = 3;
			this->bunifuThinButton24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton24->Click += gcnew System::EventHandler(this, &LoginForm::bunifuThinButton24_Click);
			// 
			// bunifuThinButton23
			// 
			this->bunifuThinButton23->ActiveBorderThickness = 1;
			this->bunifuThinButton23->ActiveCornerRadius = 20;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::White;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Blue;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::White;
			this->bunifuThinButton23->BackColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton23.BackgroundImage")));
			this->bunifuThinButton23->ButtonText = L"Restablecer";
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton23->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuThinButton23->IdleBorderThickness = 1;
			this->bunifuThinButton23->IdleCornerRadius = 20;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::MediumBlue;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton23->Location = System::Drawing::Point(182, 351);
			this->bunifuThinButton23->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton23->Name = L"bunifuThinButton23";
			this->bunifuThinButton23->Size = System::Drawing::Size(107, 41);
			this->bunifuThinButton23->TabIndex = 2;
			this->bunifuThinButton23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuTextbox7
			// 
			this->bunifuTextbox7->BackColor = System::Drawing::Color::Gray;
			this->bunifuTextbox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox7.BackgroundImage")));
			this->bunifuTextbox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox7->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuTextbox7->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox7.Icon")));
			this->bunifuTextbox7->Location = System::Drawing::Point(39, 60);
			this->bunifuTextbox7->Name = L"bunifuTextbox7";
			this->bunifuTextbox7->Size = System::Drawing::Size(250, 42);
			this->bunifuTextbox7->TabIndex = 1;
			this->bunifuTextbox7->text = L"Nombre de Usuario";
			this->bunifuTextbox7->OnTextChange += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox7_OnTextChange_1);
			// 
			// bunifuTextbox10
			// 
			this->bunifuTextbox10->BackColor = System::Drawing::Color::Gray;
			this->bunifuTextbox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox10.BackgroundImage")));
			this->bunifuTextbox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox10->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuTextbox10->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox10.Icon")));
			this->bunifuTextbox10->Location = System::Drawing::Point(39, 298);
			this->bunifuTextbox10->Name = L"bunifuTextbox10";
			this->bunifuTextbox10->Size = System::Drawing::Size(250, 42);
			this->bunifuTextbox10->TabIndex = 1;
			this->bunifuTextbox10->text = L"Confirmar Contraseña";
			// 
			// bunifuTextbox9
			// 
			this->bunifuTextbox9->BackColor = System::Drawing::Color::Gray;
			this->bunifuTextbox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox9.BackgroundImage")));
			this->bunifuTextbox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox9->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuTextbox9->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox9.Icon")));
			this->bunifuTextbox9->Location = System::Drawing::Point(39, 250);
			this->bunifuTextbox9->Name = L"bunifuTextbox9";
			this->bunifuTextbox9->Size = System::Drawing::Size(250, 42);
			this->bunifuTextbox9->TabIndex = 1;
			this->bunifuTextbox9->text = L"Contraseña";
			// 
			// bunifuTextbox8
			// 
			this->bunifuTextbox8->BackColor = System::Drawing::Color::Gray;
			this->bunifuTextbox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox8.BackgroundImage")));
			this->bunifuTextbox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuTextbox8->Cursor = System::Windows::Forms::Cursors::Default;
			this->bunifuTextbox8->ForeColor = System::Drawing::Color::Honeydew;
			this->bunifuTextbox8->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTextbox8.Icon")));
			this->bunifuTextbox8->Location = System::Drawing::Point(39, 202);
			this->bunifuTextbox8->Name = L"bunifuTextbox8";
			this->bunifuTextbox8->Size = System::Drawing::Size(250, 42);
			this->bunifuTextbox8->TabIndex = 1;
			this->bunifuTextbox8->text = L"Confirmar OTP";
			this->bunifuTextbox8->OnTextChange += gcnew System::EventHandler(this, &LoginForm::bunifuTextbox8_OnTextChange_2);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(3, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(316, 24);
			this->label7->TabIndex = 0;
			this->label7->Text = L"RESTABLECER CONTRASEÑA";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(924, 538);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//caja para confirmar contraseña registro
	private: System::Void bunifuTextbox6_OnTextChange(System::Object^ sender, System::EventArgs^ e) {
	}

		   //caja de contraseña registro
private: System::Void bunifuTextbox5_OnTextChange(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	panel1 -> Visible = false;
	panel2 -> Visible = true;
}
	   //boton de regreso a menu principal
private: System::Void bunifuImageButton1_Click(System::Object^ sender, System::EventArgs^ e) {

	
	this->panel1->Visible = true;


}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->panel1->BringToFront();
}
	   //boton de inicio de secion
private: System::Void bunifuThinButton21_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ contraseña = bunifuTextbox2->text;
		String^ username = bunifuTextbox1->text;

		MySqlCommand^ cmd = gcnew MySqlCommand("select * from register_table where username='" + username + "' and contraseña='" + contraseña + "';", con);
		MySqlDataReader^ dr;
		con->Open();
		try
		{
			dr = cmd->ExecuteReader();
			int count = 0;
			while (dr->Read())
			{
				count += 1;
			}
			if (count == 1)
			{
				MessageBox::Show("login succesfull, congratulation...");
			}
			else
			{
				MessageBox::Show("user and password is incorrect!\n try again...");
			}

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		con->Close();


	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}



}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	   //boton de registro 
private: System::Void bunifuThinButton22_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		

		String^ Email = bunifuTextbox3->text;
		String^ username = bunifuTextbox4->text;
		String^ contraseña = bunifuTextbox6->text;

		MySqlCommand^ cmd = gcnew MySqlCommand("insert into register_table values('"+Email+ "','" + username + "','" + contraseña + "')",con);
		MySqlDataReader^ dr;
		con->Open();
		try
		{
			dr = cmd->ExecuteReader();
			bunifuTextbox3->text = "";
			bunifuTextbox4->text = "";
			bunifuTextbox5->text = "";
			bunifuTextbox6->text = "";

			MessageBox::Show("Sign Up success\n Go to back for login");

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		con->Close();

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
	   //caja de usuario
private: System::Void bunifuTextbox1_OnTextChange(System::Object^ sender, System::EventArgs^ e) {
}
	   //caja de contraseñas
private: System::Void bunifuTextbox2_OnTextChange(System::Object^ sender, System::EventArgs^ e) {
}
	   //caja de email registro
private: System::Void bunifuTextbox3_OnTextChange(System::Object^ sender, System::EventArgs^ e) {
}
	   //caja de usuario registro
private: System::Void bunifuTextbox4_OnTextChange(System::Object^ sender, System::EventArgs^ e) {
}
	   //pane
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	   //link de enviar OTP
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bunifuTextbox8_OnTextChange(System::Object^ sender, System::EventArgs^ e) {
}

	   //caja de usuario de recuperacion
private: System::Void bunifuTextbox7_OnTextChange(System::Object^ sender, System::EventArgs^ e) {
}
	   //caja de OTP recuperacion
private: System::Void bunifuTextbox10_OnTextChange(System::Object^ sender, System::EventArgs^ e) {
}

	   //caja de contraseña OTP
private: System::Void bunifuTextbox9_OnTextChange(System::Object^ sender, System::EventArgs^ e) {
}
	   //caja de confirmacion OTP
private: System::Void bunifuTextbox8_OnTextChange_1(System::Object^ sender, System::EventArgs^ e) {
}

	   //link de login para recuperar contraseña
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = false;
	panel3->Visible = true;
}

	   //boton de resetear contrasena panel 3
private: System::Void bunifuThinButton23_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //boton de regreso reseteo 
	private: System::Void bunifuThinButton26_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bunifuTextbox7_OnTextChange_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bunifuThinButton25_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = true;
	panel2->Visible = false;
	panel3->Visible = false;
}
private: System::Void bunifuTextbox8_OnTextChange_2(System::Object^ sender, System::EventArgs^ e) {
}

	   //enviar OTP
private: System::Void bunifuThinButton24_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ usrnm = "hmdc36@gmail.com";
		String^ pasword = "******";

		String^ to;
		String^ from = "hmdc36@gmail.com";
		String^ subject = "OTP to Reset Password";
		username = bunifuTextbox7->text;
		String^ msg = "Hi "+username+","+" \n "+"Your OTP is " + OTP;//mensaje con el codigo OTP

		//coamando para buscar el imail para el usuario particular  en la base de datos, por el usuario
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from register_table where Username='"+ username +"';", con);
		MySqlDataReader^ dr;
		con->Open(); //abrir coneccion
		dr = cmd->ExecuteReader();
		while (dr->Read())
		{
			to = dr->GetString(0);// iniciar el almacenamiento del correo electronico
		}
		con->Close(); // Close the connection

		try
		{
			/* metodo apra poder enviar el mensaje en el correo electonico*/

			/*using namespace System::Web;
			using namespace System::Net::Mail;*/
			MailMessage^ mail = gcnew MailMessage(from,to,subject,msg);
			SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
			client->Port = 570;//587
			client->Credentials = gcnew System::Net::NetworkCredential(usrnm,pasword);
			client->EnableSsl = true;
			client->Send(mail);
			MessageBox::Show("OTP sent!","success", MessageBoxButtons::OK);
			label5->Text = "OTP sent to " + to;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
