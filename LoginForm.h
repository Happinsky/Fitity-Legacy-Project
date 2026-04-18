#pragma once
#include "User.h"
namespace Fitity {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Net;
	using namespace System::Net::Mail;
	/// <summary>
	/// Podsumowanie informacji o LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	private:
		bool isPasswordVisible;
	public:
		LoginForm(void)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			isPasswordVisible = false;			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ tbemail;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llRegister;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;




	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->label1->ForeColor = System::Drawing::Color::Gray;
			this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(578, 132);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login to Your Account";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// tbemail
			// 
			this->tbemail->AccessibleDescription = L"";
			this->tbemail->AccessibleName = L"";
			this->tbemail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->tbemail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbemail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbemail->Location = System::Drawing::Point(110, 271);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(283, 28);
			this->tbemail->TabIndex = 2;
			this->tbemail->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBox1_TextChanged);
			// 
			// tbpassword
			// 
			this->tbpassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->tbpassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbpassword->Location = System::Drawing::Point(110, 332);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(283, 28);
			this->tbpassword->TabIndex = 4;
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnOK->FlatAppearance->BorderColor = System::Drawing::Color::Firebrick;
			this->btnOK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->btnOK->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnOK->Location = System::Drawing::Point(38, 376);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(172, 42);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"Sign in";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnCancel->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->btnCancel->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnCancel->Location = System::Drawing::Point(304, 376);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(172, 42);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->BackColor = System::Drawing::Color::Transparent;
			this->llRegister->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->llRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->llRegister->ForeColor = System::Drawing::SystemColors::GrayText;
			this->llRegister->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"llRegister.Image")));
			this->llRegister->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->llRegister->LinkColor = System::Drawing::Color::WhiteSmoke;
			this->llRegister->Location = System::Drawing::Point(615, 252);
			this->llRegister->Name = L"llRegister";
			this->llRegister->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->llRegister->Size = System::Drawing::Size(120, 35);
			this->llRegister->TabIndex = 7;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"Sign Up";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::llRegister_LinkClicked);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(507, -52);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(350, 758);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Crimson;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(518, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(319, 33);
			this->label2->TabIndex = 9;
			this->label2->Text = L"NOT A MEMBER YET\?";
			this->label2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::GrayText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(531, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(290, 31);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Discover what we offer";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Location = System::Drawing::Point(57, 432);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(119, 13);
			this->linkLabel1->TabIndex = 11;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Not remeber password\?";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkLabel1_LinkClicked);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(110, 96);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(283, 122);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Firebrick;
			this->panel1->Location = System::Drawing::Point(110, 298);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(283, 1);
			this->panel1->TabIndex = 13;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Firebrick;
			this->panel2->Location = System::Drawing::Point(110, 359);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(283, 1);
			this->panel2->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label4->Location = System::Drawing::Point(105, 243);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(209, 25);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Username or email";
			this->label4->Click += gcnew System::EventHandler(this, &LoginForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label5->Location = System::Drawing::Point(105, 304);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 25);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Password";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(214, 305);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(28, 25);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 17;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox3_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(833, 479);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoginForm";
			this->Text = L"FITITY - LETS MAKE YOUR LIFE EASIER";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	public: User^ user = nullptr;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Pobiera wartosci z textboxow
		String^ input = this->tbemail->Text;
		String^ password = this->tbpassword->Text;
		// Sprawdzanie czy email, nazwa u¿ytkownika i haslo nie sa puste
		if (input->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter email or name and password", "Email or Name or Password empty", MessageBoxButtons::OK);
			return;
		}

		try {
			// nawiazywanie polaczenia z baza
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=fitity;Integrated Security=True;Encrypt=True;TrustServerCertificate=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery;
			String^ parameterName;

			if (input->Contains("@")) {
				sqlQuery = "SELECT * FROM users WHERE email=@input AND password=@pwd;";
				parameterName = "@input";
			}
			else {
				sqlQuery = "SELECT * FROM users WHERE name=@input AND password=@pwd;";
				parameterName = "@input";
			}

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue(parameterName, input);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();

			if (reader->Read()) {
				// Tworzenie obiektu User i danie mu wartosci z bazy
				user = gcnew User;
				user->id = Convert::ToInt32(reader["id"]);
				user->name = reader["name"]->ToString();
				user->email = reader["email"]->ToString();
				user->password = reader["password"]->ToString();

				this->DialogResult = System::Windows::Forms::DialogResult::OK;
				this->Close();
			}
			else {
				MessageBox::Show("Incorrect email, name, or password", "Login Error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to connect to database. Error: " + ex->Message, "Database Connection Error", MessageBoxButtons::OK);
		}


	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
		this->Close();
	}
	public: bool switchToRegister = false;
	private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToRegister = true;
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		String^ input = this->tbemail->Text;

		if (input->Length == 0) {
			MessageBox::Show("Please enter email or name", "Email or Name empty", MessageBoxButtons::OK);
			return;
		}

		SendPasswordReminder(input);
	}

	private: System::Void SendPasswordReminder(String^ input) {

		try {

			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=fitity;Integrated Security=True;Encrypt=True;TrustServerCertificate=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery;
			String^ parameterName;

			if (input->Contains("@")) {
				sqlQuery = "SELECT * FROM users WHERE email=@input;";
				parameterName = "@input";
			}
			else {
				sqlQuery = "SELECT * FROM users WHERE name=@input;";
				parameterName = "@input";
			}

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue(parameterName, input);

			SqlDataReader^ reader = command.ExecuteReader();

			if (reader->Read()) {
				String^ userEmail = reader["email"]->ToString();
				String^ userPassword = reader["password"]->ToString();

				SendEmail(userEmail, userPassword);
				MessageBox::Show("Password reminder sent successfully.", "Email Sent", MessageBoxButtons::OK);
			}
			else {
				MessageBox::Show("User not found. Please enter a valid email or name.", "User Not Found", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to connect to database. Error: " + ex->Message, "Database Connection Error", MessageBoxButtons::OK);
		}
	}

	private: System::Void SendEmail(String^ userEmail, String^ userPassword) {
		String^ senderEmail = "Zejder337@gmail.com"; 
		String^ senderPassword = "jgth tuce lorh egjj "; 
		String^ subject = "FITITY Password Reminder";
		String^ body = "Your password reminder\n";
		body += "Email: " + userEmail + "\n";
		body += "Password: " + userPassword + "\n";

		try {
			MailMessage^ message = gcnew MailMessage(senderEmail, userEmail, subject, body);
			SmtpClient^ smtpClient = gcnew SmtpClient("smtp.gmail.com");
			smtpClient->Port = 587;
			smtpClient->Credentials = gcnew NetworkCredential(senderEmail, senderPassword);
			smtpClient->EnableSsl = true;
			smtpClient->Send(message);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to send password reminder email. Error: " + ex->Message, "Email Failure", MessageBoxButtons::OK);
		}
	}

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Zmiana stanu widocznoœci has³a
		isPasswordVisible = !isPasswordVisible;

		// Zmiana chara dla has³a 
		if (isPasswordVisible) {
			tbpassword->PasswordChar = '\0'; // Poka¿ has³o
		}
		else {
			tbpassword->PasswordChar = '*'; // Ukryj has³o
		}

	}

	};
}
