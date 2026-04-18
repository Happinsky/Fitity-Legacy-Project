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
	/// Podsumowanie informacji o AccountForm
	/// </summary>
	public ref class accountForm : public System::Windows::Forms::Form
	{
	public:
		accountForm(User^ user)
		{
				InitializeComponent();
				//
				//TODO: W tym miejscu dodaj kod konstruktora
				//
				this->StartPosition = FormStartPosition::CenterScreen;
				lbUserinfo22->Text = user->name;
				lbUserinfo5->Text = user->name;
				lbUserinfo8->Text = user->name;
				currentUser = user;
				CalculateCalories();
			
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~accountForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ acceptlabel;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ dane;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ acceptbtn;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lbUserinfo8;
	private: System::Windows::Forms::ComboBox^ Selectyourgender;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ heighttext;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ weighttext;



	private: System::Windows::Forms::Label^ howmanykcal;



	private: System::Windows::Forms::Label^ resultLabel;
	private: System::Windows::Forms::TextBox^ workourhours;
	private: System::Windows::Forms::TextBox^ ageLabel;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ lbUserinfo22;



	protected:
	private:
	private:
		void SendPasswordChangeConfirmation(String^ email, String^ name, String^ newPassword) {
			String^ senderEmail = "Zejder337@gmail.com"; 
			String^ senderPassword = "jgth tuce lorh egjj "; 

			String^ subject = "FITITY: Password Change Confirmation";
			String^ body = "Your password has been successfully changed.\n";
			body += "Username: " + name + "\n";
			body += "New Password: " + newPassword + "\n";

			try {
				MailMessage^ message = gcnew MailMessage(senderEmail, email, subject, body);
				SmtpClient^ smtpClient = gcnew SmtpClient("smtp.gmail.com");
				smtpClient->Port = 587;
				smtpClient->Credentials = gcnew NetworkCredential(senderEmail, senderPassword);
				smtpClient->EnableSsl = true;
				smtpClient->Send(message);
				MessageBox::Show("Password change confirmation email sent successfully.", "Email Sent", MessageBoxButtons::OK);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Failed to send password change confirmation email. Error: " + ex->Message, "Email Failure", MessageBoxButtons::OK);
			}
		}
		User^ currentUser;
		void ZmienHasloWBazieDanych(int userID, String^ noweHaslo)
		{
			try
			{
				SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=fitity;Integrated Security=True;Encrypt=True;TrustServerCertificate=True;");

				String^ query = "UPDATE Users SET password = @NoweHaslo WHERE id = @UserID";

				SqlCommand^ command = gcnew SqlCommand(query, connection);

				command->Parameters->AddWithValue("@NoweHaslo", noweHaslo);
				command->Parameters->AddWithValue("@UserID", userID);

				connection->Open();
				command->ExecuteNonQuery();
				connection->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error with sql connection " + ex->Message,
					"B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		void ZmienHaslo(User^ user, String^ stareHaslo, String^ noweHaslo)
		{
			if (user->password == stareHaslo)
			{
				user->password = noweHaslo;
				ZmienHasloWBazieDanych(user->id, noweHaslo);
				MessageBox::Show("Password correctly changed!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				SendPasswordChangeConfirmation(user->email, user->name, noweHaslo);
			}
			else
			{
				MessageBox::Show("Old passowrd is incorrect!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	private: System::Windows::Forms::Label^ LbUserinfo3;







	private: System::Windows::Forms::Button^ btnAccount;
	private: System::Windows::Forms::Button^ btnCalculator;
	private: System::Windows::Forms::Button^ btnSummary;
	private: System::Windows::Forms::Button^ CLBTN;
	private: System::Windows::Forms::Label^ lbUserinfo5;
	private: System::Windows::Forms::TextBox^ oldpassword;
	private: System::Windows::Forms::TextBox^ newpassword;

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(accountForm::typeid));
			this->LbUserinfo3 = (gcnew System::Windows::Forms::Label());
			this->btnAccount = (gcnew System::Windows::Forms::Button());
			this->btnCalculator = (gcnew System::Windows::Forms::Button());
			this->btnSummary = (gcnew System::Windows::Forms::Button());
			this->CLBTN = (gcnew System::Windows::Forms::Button());
			this->lbUserinfo5 = (gcnew System::Windows::Forms::Label());
			this->oldpassword = (gcnew System::Windows::Forms::TextBox());
			this->newpassword = (gcnew System::Windows::Forms::TextBox());
			this->acceptlabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->dane = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->acceptbtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lbUserinfo8 = (gcnew System::Windows::Forms::Label());
			this->Selectyourgender = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->heighttext = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->weighttext = (gcnew System::Windows::Forms::TextBox());
			this->howmanykcal = (gcnew System::Windows::Forms::Label());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->workourhours = (gcnew System::Windows::Forms::TextBox());
			this->ageLabel = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->lbUserinfo22 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// LbUserinfo3
			// 
			this->LbUserinfo3->AutoSize = true;
			this->LbUserinfo3->Location = System::Drawing::Point(197, 65);
			this->LbUserinfo3->Name = L"LbUserinfo3";
			this->LbUserinfo3->Size = System::Drawing::Size(0, 13);
			this->LbUserinfo3->TabIndex = 0;
			// 
			// btnAccount
			// 
			this->btnAccount->Location = System::Drawing::Point(0, 0);
			this->btnAccount->Name = L"btnAccount";
			this->btnAccount->Size = System::Drawing::Size(75, 23);
			this->btnAccount->TabIndex = 68;
			// 
			// btnCalculator
			// 
			this->btnCalculator->Location = System::Drawing::Point(0, 0);
			this->btnCalculator->Name = L"btnCalculator";
			this->btnCalculator->Size = System::Drawing::Size(75, 23);
			this->btnCalculator->TabIndex = 67;
			// 
			// btnSummary
			// 
			this->btnSummary->Location = System::Drawing::Point(0, 0);
			this->btnSummary->Name = L"btnSummary";
			this->btnSummary->Size = System::Drawing::Size(75, 23);
			this->btnSummary->TabIndex = 66;
			// 
			// CLBTN
			// 
			this->CLBTN->Location = System::Drawing::Point(0, 0);
			this->CLBTN->Name = L"CLBTN";
			this->CLBTN->Size = System::Drawing::Size(75, 23);
			this->CLBTN->TabIndex = 65;
			// 
			// lbUserinfo5
			// 
			this->lbUserinfo5->Location = System::Drawing::Point(0, 0);
			this->lbUserinfo5->Name = L"lbUserinfo5";
			this->lbUserinfo5->Size = System::Drawing::Size(100, 23);
			this->lbUserinfo5->TabIndex = 64;
			// 
			// oldpassword
			// 
			this->oldpassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->oldpassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->oldpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->oldpassword->Location = System::Drawing::Point(147, 332);
			this->oldpassword->Name = L"oldpassword";
			this->oldpassword->PasswordChar = '*';
			this->oldpassword->Size = System::Drawing::Size(258, 31);
			this->oldpassword->TabIndex = 31;
			// 
			// newpassword
			// 
			this->newpassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->newpassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->newpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->newpassword->Location = System::Drawing::Point(147, 398);
			this->newpassword->Name = L"newpassword";
			this->newpassword->PasswordChar = '*';
			this->newpassword->Size = System::Drawing::Size(258, 31);
			this->newpassword->TabIndex = 32;
			// 
			// acceptlabel
			// 
			this->acceptlabel->AutoSize = true;
			this->acceptlabel->BackColor = System::Drawing::Color::Transparent;
			this->acceptlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->acceptlabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->acceptlabel->Location = System::Drawing::Point(11, 269);
			this->acceptlabel->Name = L"acceptlabel";
			this->acceptlabel->Size = System::Drawing::Size(438, 31);
			this->acceptlabel->TabIndex = 33;
			this->acceptlabel->Text = L"You can change your password! ";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(400, -3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(490, 109);
			this->pictureBox5->TabIndex = 34;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-2, -3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(490, 109);
			this->pictureBox2->TabIndex = 35;
			this->pictureBox2->TabStop = false;
			// 
			// dane
			// 
			this->dane->AutoSize = true;
			this->dane->BackColor = System::Drawing::Color::Transparent;
			this->dane->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->dane->ForeColor = System::Drawing::SystemColors::Control;
			this->dane->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dane.Image")));
			this->dane->Location = System::Drawing::Point(385, 9);
			this->dane->Name = L"dane";
			this->dane->Size = System::Drawing::Size(97, 42);
			this->dane->TabIndex = 36;
			this->dane->Text = L"User";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(306, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(264, 55);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Information";
			// 
			// acceptbtn
			// 
			this->acceptbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->acceptbtn->FlatAppearance->BorderColor = System::Drawing::Color::Firebrick;
			this->acceptbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->acceptbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->acceptbtn->ForeColor = System::Drawing::SystemColors::GrayText;
			this->acceptbtn->Location = System::Drawing::Point(226, 446);
			this->acceptbtn->Name = L"acceptbtn";
			this->acceptbtn->Size = System::Drawing::Size(104, 37);
			this->acceptbtn->TabIndex = 38;
			this->acceptbtn->Text = L"Change password";
			this->acceptbtn->UseVisualStyleBackColor = false;
			this->acceptbtn->Click += gcnew System::EventHandler(this, &accountForm::acceptbtn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label3->Location = System::Drawing::Point(12, 332);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 24);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Old Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label5->Location = System::Drawing::Point(4, 405);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 24);
			this->label5->TabIndex = 41;
			this->label5->Text = L"New Password";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(589, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(68, 70);
			this->button1->TabIndex = 43;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(213, 23);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 70);
			this->button2->TabIndex = 44;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &accountForm::button2_Click);
			// 
			// lbUserinfo8
			// 
			this->lbUserinfo8->BackColor = System::Drawing::Color::Transparent;
			this->lbUserinfo8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbUserinfo8->ForeColor = System::Drawing::SystemColors::GrayText;
			this->lbUserinfo8->Location = System::Drawing::Point(556, 206);
			this->lbUserinfo8->Name = L"lbUserinfo8";
			this->lbUserinfo8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbUserinfo8->Size = System::Drawing::Size(334, 42);
			this->lbUserinfo8->TabIndex = 45;
			this->lbUserinfo8->Text = L"label2";
			this->lbUserinfo8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Selectyourgender
			// 
			this->Selectyourgender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->Selectyourgender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Selectyourgender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->Selectyourgender->ForeColor = System::Drawing::SystemColors::GrayText;
			this->Selectyourgender->FormattingEnabled = true;
			this->Selectyourgender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"male", L"female" });
			this->Selectyourgender->Location = System::Drawing::Point(619, 385);
			this->Selectyourgender->Name = L"Selectyourgender";
			this->Selectyourgender->Size = System::Drawing::Size(207, 33);
			this->Selectyourgender->TabIndex = 47;
			this->Selectyourgender->Text = L"Select your gender";
			this->Selectyourgender->SelectedIndexChanged += gcnew System::EventHandler(this, &accountForm::Selectyourgender_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label4->Location = System::Drawing::Point(717, 269);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 24);
			this->label4->TabIndex = 48;
			this->label4->Text = L"Write height(cm)";
			// 
			// heighttext
			// 
			this->heighttext->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->heighttext->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->heighttext->Location = System::Drawing::Point(721, 296);
			this->heighttext->Name = L"heighttext";
			this->heighttext->Size = System::Drawing::Size(135, 13);
			this->heighttext->TabIndex = 49;
			this->heighttext->TextChanged += gcnew System::EventHandler(this, &accountForm::heighttext_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label6->Location = System::Drawing::Point(717, 332);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(161, 24);
			this->label6->TabIndex = 50;
			this->label6->Text = L"Write weight(kg)";
			// 
			// weighttext
			// 
			this->weighttext->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->weighttext->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->weighttext->Location = System::Drawing::Point(730, 359);
			this->weighttext->Name = L"weighttext";
			this->weighttext->Size = System::Drawing::Size(135, 13);
			this->weighttext->TabIndex = 51;
			this->weighttext->TextChanged += gcnew System::EventHandler(this, &accountForm::weighttext_TextChanged);
			// 
			// howmanykcal
			// 
			this->howmanykcal->AutoSize = true;
			this->howmanykcal->BackColor = System::Drawing::Color::Transparent;
			this->howmanykcal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->howmanykcal->ForeColor = System::Drawing::SystemColors::GrayText;
			this->howmanykcal->Location = System::Drawing::Point(692, 457);
			this->howmanykcal->Name = L"howmanykcal";
			this->howmanykcal->Size = System::Drawing::Size(17, 18);
			this->howmanykcal->TabIndex = 54;
			this->howmanykcal->Text = L"1";
			this->howmanykcal->Click += gcnew System::EventHandler(this, &accountForm::howmanykcal_Click);
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->BackColor = System::Drawing::Color::Transparent;
			this->resultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->resultLabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->resultLabel->Location = System::Drawing::Point(725, 540);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->resultLabel->Size = System::Drawing::Size(52, 25);
			this->resultLabel->TabIndex = 57;
			this->resultLabel->Text = L"BMI";
			this->resultLabel->Click += gcnew System::EventHandler(this, &accountForm::resultLabel_Click);
			// 
			// workourhours
			// 
			this->workourhours->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->workourhours->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->workourhours->Location = System::Drawing::Point(556, 359);
			this->workourhours->Name = L"workourhours";
			this->workourhours->Size = System::Drawing::Size(152, 13);
			this->workourhours->TabIndex = 58;
			this->workourhours->TextChanged += gcnew System::EventHandler(this, &accountForm::workourhours_TextChanged);
			// 
			// ageLabel
			// 
			this->ageLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ageLabel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ageLabel->Location = System::Drawing::Point(582, 296);
			this->ageLabel->Name = L"ageLabel";
			this->ageLabel->Size = System::Drawing::Size(106, 13);
			this->ageLabel->TabIndex = 59;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label7->Location = System::Drawing::Point(609, 269);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 24);
			this->label7->TabIndex = 60;
			this->label7->Text = L"Age";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label8->Location = System::Drawing::Point(562, 332);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(143, 24);
			this->label8->TabIndex = 61;
			this->label8->Text = L"Write  workout";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label11->Location = System::Drawing::Point(648, 421);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(175, 24);
			this->label11->TabIndex = 62;
			this->label11->Text = L"Your minimal kcal";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label12->Location = System::Drawing::Point(703, 516);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 24);
			this->label12->TabIndex = 63;
			this->label12->Text = L"Your BMI";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(392, 664);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1226, 91);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-91, 664);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1226, 91);
			this->pictureBox3->TabIndex = 69;
			this->pictureBox3->TabStop = false;
			// 
			// lbUserinfo22
			// 
			this->lbUserinfo22->BackColor = System::Drawing::Color::Transparent;
			this->lbUserinfo22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbUserinfo22->ForeColor = System::Drawing::SystemColors::GrayText;
			this->lbUserinfo22->Location = System::Drawing::Point(0, 206);
			this->lbUserinfo22->Name = L"lbUserinfo22";
			this->lbUserinfo22->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbUserinfo22->Size = System::Drawing::Size(436, 42);
			this->lbUserinfo22->TabIndex = 70;
			this->lbUserinfo22->Text = L"label2";
			this->lbUserinfo22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// accountForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(889, 754);
			this->Controls->Add(this->lbUserinfo22);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->ageLabel);
			this->Controls->Add(this->workourhours);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->howmanykcal);
			this->Controls->Add(this->weighttext);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->heighttext);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Selectyourgender);
			this->Controls->Add(this->lbUserinfo8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->acceptbtn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dane);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->acceptlabel);
			this->Controls->Add(this->newpassword);
			this->Controls->Add(this->oldpassword);
			this->Controls->Add(this->lbUserinfo5);
			this->Controls->Add(this->CLBTN);
			this->Controls->Add(this->btnSummary);
			this->Controls->Add(this->btnCalculator);
			this->Controls->Add(this->btnAccount);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->LbUserinfo3);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"accountForm";
			this->Text = L"AccountForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void acceptbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ oldpassword2 = oldpassword->Text;
		String^ newpassword2 = newpassword->Text;
		if (newpassword2->Trim() == "") {
			MessageBox::Show("New password cannot be empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			ZmienHaslo(currentUser, oldpassword2, newpassword2);
		}
	}

	private: System::Void heighttext_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		CalculateBMI();
		CalculateCalories();
	}

	private: System::Void weighttext_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		CalculateBMI();
		CalculateCalories();
	}

	private: System::Void CalculateBMI() {
		try {
			int heightInCm = Convert::ToInt32(heighttext->Text);
			double heightInM =double (heightInCm) / 100.0; 
			double weight = Convert::ToDouble(weighttext->Text);

			// Obliczenie BMI
			double bmi = weight / (heightInM * heightInM);

			// Wyœwietlenie wyniku BMI
			resultLabel->Text = bmi.ToString("F2");
		}
		catch (FormatException^) {
			resultLabel->Text = "Write nr";
		}
		catch (OverflowException^) {
			resultLabel->Text = "ERROR too big";
		}
	}
	private: System::Void workourhours_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		CalculateCalories();
	}
	private: System::Void Selectyourgender_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		CalculateCalories();
	}
	private: System::Void howmanykcal_Click(System::Object^ sender, System::EventArgs^ e) {
		CalculateCalories();
		
	}
private: System::Void CalculateCalories() {
	try {
		// Sprawdzanie, czy pola heighttext i weighttext nie s¹ puste
		if (String::IsNullOrWhiteSpace(heighttext->Text) || String::IsNullOrWhiteSpace(weighttext->Text)) {
			currentUser->LoadDataFromDatabase(); 

			// Wyswietla dane z bazy danych
			howmanykcal->Text = currentUser->calories.ToString("F2") + " kcal";
			return;
		}

		// Pobranie danych
		int heightInCm = Convert::ToInt32(heighttext->Text);
		double heightInM = static_cast<double>(heightInCm) / 100.0;
		double weight = Convert::ToDouble(weighttext->Text);
		int age = Convert::ToInt32(ageLabel->Text);
		int workoutHoursPerWeek = Convert::ToInt32(workourhours->Text);
		String^ selectedGender = Selectyourgender->Text->ToLower();

		double activityFactor = 1.2;  

		if (workoutHoursPerWeek >= 3 && workoutHoursPerWeek <= 5) {
			activityFactor = 1.375;  
		}
		else if (workoutHoursPerWeek > 5) {
			activityFactor = 1.55; 
		}

		// Obliczenie BMR
		double bmr;
		if (selectedGender == "male") {
			bmr = 88.362 + (13.397 * weight) + (4.799 * heightInM * 100) - (5.677 * age);
		}
		else if (selectedGender == "female") {
			bmr = 447.593 + (9.247 * weight) + (3.098 * heightInM * 100) - (4.330 * age);
		}
		else {
			// blad z plcia
			howmanykcal->Text = "Error";
			return;
		}

		// Obliczenie zapotrzebowania kalorycznego
		double caloriesNeeded = bmr * activityFactor;
		UpdateCaloriesInDatabase(currentUser->id, caloriesNeeded);
		currentUser->calories = caloriesNeeded;

		// Wyswietla wynik
		howmanykcal->Text = caloriesNeeded.ToString("F2") + " kcal";
	}
	catch (FormatException^) {
		// blad formatu liczby
		howmanykcal->Text = "ERROR! Please enter valid numbers.";
	}
	catch (OverflowException^) {
		// blad zbyt duzej liczby
		howmanykcal->Text = "ERROR! Entered values are too large.";
	}
}
		   void UpdateCaloriesInDatabase(int userID, double calories) {
			   try {
				   SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=fitity;Integrated Security=True;Encrypt=True;TrustServerCertificate=True;");

				   String^ query = "UPDATE Users SET calories = @Calories WHERE id = @UserID";

				   SqlCommand^ command = gcnew SqlCommand(query, connection);

				   command->Parameters->AddWithValue("@Calories", calories);
				   command->Parameters->AddWithValue("@UserID", userID);

				   connection->Open();
				   command->ExecuteNonQuery();
				   connection->Close();
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Wyst¹pi³ b³¹d podczas aktualizacji kalorii w bazie danych: " + ex->Message,
					   "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }
	private: System::Void resultLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
};
