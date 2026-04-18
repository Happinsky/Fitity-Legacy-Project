#pragma once
#include <climits> // Dodaj tê liniê do Twojego 
#include "User.h"
#include "Calculator.h"
namespace Fitity {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Podsumowanie informacji o mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	private:
		User^ currentUser;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
		   SqlConnection^ sqlConnection;

	public:

		mainForm(User^ user)	
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//	
			currentUser = user;
			sqlConnection = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=fitity;Integrated Security=True;Encrypt=True;TrustServerCertificate=True;");
			FetchDataFromDatabase(user->name);
			this->StartPosition = FormStartPosition::CenterScreen;
			this->StartPosition = FormStartPosition::CenterScreen;
			BtnUpdate->Click += gcnew System::EventHandler(this, &mainForm::BtnUpdate_Click);

		}
		System::String^ GetLabelValue() {
			return labelMain->Text;
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::Button^ BtnUpdate;
	public:
	private:
		System::Windows::Forms::Label^ labelMain;
		// Funkcja pomocnicza do obliczania spalonych kalorii z kroków
		double Kcalfromsteps(int steps)
		{
			return steps * 0.05;
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lbUserinfo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbUserinfo2;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ btSteps;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::Label^ label9;




	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ btnSummary;
	private: System::Windows::Forms::Button^ btnCalculator;

	private: System::Windows::Forms::Button^ btnAccount;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ CLBTN;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->lbUserinfo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbUserinfo2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btSteps = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btnSummary = (gcnew System::Windows::Forms::Button());
			this->btnCalculator = (gcnew System::Windows::Forms::Button());
			this->btnAccount = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->CLBTN = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->BtnUpdate = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// lbUserinfo
			// 
			this->lbUserinfo->Location = System::Drawing::Point(0, 0);
			this->lbUserinfo->Name = L"lbUserinfo";
			this->lbUserinfo->Size = System::Drawing::Size(100, 23);
			this->lbUserinfo->TabIndex = 35;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(293, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 42);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Hello";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lbUserinfo2
			// 
			this->lbUserinfo2->BackColor = System::Drawing::Color::Transparent;
			this->lbUserinfo2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lbUserinfo2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F));
			this->lbUserinfo2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbUserinfo2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lbUserinfo2.Image")));
			this->lbUserinfo2->Location = System::Drawing::Point(414, 33);
			this->lbUserinfo2->Name = L"lbUserinfo2";
			this->lbUserinfo2->Size = System::Drawing::Size(320, 42);
			this->lbUserinfo2->TabIndex = 3;
			this->lbUserinfo2->Text = L"label2";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(279, 130);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(324, 186);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(571, 130);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(320, 186);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(0, 130);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(302, 186);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Firebrick;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label2->Location = System::Drawing::Point(110, 254);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 33);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Steps";
			// 
			// btSteps
			// 
			this->btSteps->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btSteps->Location = System::Drawing::Point(82, 201);
			this->btSteps->Name = L"btSteps";
			this->btSteps->Size = System::Drawing::Size(139, 39);
			this->btSteps->TabIndex = 9;
			this->btSteps->Text = L"label3";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(370, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 39);
			this->label4->TabIndex = 11;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(664, 201);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 39);
			this->label5->TabIndex = 12;
			this->label5->Text = L"label5";
			this->label5->Click += gcnew System::EventHandler(this, &mainForm::label5_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Firebrick;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label6->Location = System::Drawing::Point(399, 254);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 23);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Eaten kcal";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Firebrick;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label7->Location = System::Drawing::Point(672, 254);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(131, 40);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Summary";
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(0, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 23);
			this->label9->TabIndex = 36;
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(0, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 23);
			this->label10->TabIndex = 34;
			// 
			// btnSummary
			// 
			this->btnSummary->Location = System::Drawing::Point(0, 0);
			this->btnSummary->Name = L"btnSummary";
			this->btnSummary->Size = System::Drawing::Size(75, 23);
			this->btnSummary->TabIndex = 33;
			// 
			// btnCalculator
			// 
			this->btnCalculator->Location = System::Drawing::Point(0, 0);
			this->btnCalculator->Name = L"btnCalculator";
			this->btnCalculator->Size = System::Drawing::Size(75, 23);
			this->btnCalculator->TabIndex = 32;
			// 
			// btnAccount
			// 
			this->btnAccount->Location = System::Drawing::Point(0, 0);
			this->btnAccount->Name = L"btnAccount";
			this->btnAccount->Size = System::Drawing::Size(75, 23);
			this->btnAccount->TabIndex = 31;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(0, -9);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(490, 109);
			this->pictureBox5->TabIndex = 26;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(482, -9);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(651, 109);
			this->pictureBox6->TabIndex = 27;
			this->pictureBox6->TabStop = false;
			// 
			// CLBTN
			// 
			this->CLBTN->BackColor = System::Drawing::Color::Firebrick;
			this->CLBTN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->CLBTN->Cursor = System::Windows::Forms::Cursors::Default;
			this->CLBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CLBTN->Location = System::Drawing::Point(812, 38);
			this->CLBTN->Name = L"CLBTN";
			this->CLBTN->Size = System::Drawing::Size(80, 23);
			this->CLBTN->TabIndex = 10;
			this->CLBTN->Text = L"QUIT";
			this->CLBTN->UseVisualStyleBackColor = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Location = System::Drawing::Point(29, 431);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(832, 212);
			this->richTextBox1->TabIndex = 28;
			this->richTextBox1->Text = L"";
			// 
			// BtnUpdate
			// 
			this->BtnUpdate->BackColor = System::Drawing::Color::Firebrick;
			this->BtnUpdate->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->BtnUpdate->Cursor = System::Windows::Forms::Cursors::Default;
			this->BtnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnUpdate->Location = System::Drawing::Point(0, 38);
			this->BtnUpdate->Name = L"BtnUpdate";
			this->BtnUpdate->Size = System::Drawing::Size(80, 23);
			this->BtnUpdate->TabIndex = 30;
			this->BtnUpdate->Text = L"Update";
			this->BtnUpdate->UseVisualStyleBackColor = false;
			this->BtnUpdate->Click += gcnew System::EventHandler(this, &mainForm::BtnUpdate_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(511, 664);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1226, 91);
			this->pictureBox1->TabIndex = 37;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(86, 664);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(1226, 91);
			this->pictureBox7->TabIndex = 38;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(-33, 664);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(1226, 91);
			this->pictureBox8->TabIndex = 39;
			this->pictureBox8->TabStop = false;
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::Color::Red;
			this->progressBar1->Location = System::Drawing::Point(29, 322);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->progressBar1->Size = System::Drawing::Size(832, 103);
			this->progressBar1->TabIndex = 40;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(889, 754);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->BtnUpdate);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->CLBTN);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbUserinfo2);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->btnAccount);
			this->Controls->Add(this->btnCalculator);
			this->Controls->Add(this->btnSummary);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->lbUserinfo);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btSteps);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox8);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"mainForm";
			this->Text = L"Fitity";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
 private:
	 void DisplayCalories() {
		 // Sprawdzenie, czy obiekt User nie jest pusty
		 if (currentUser != nullptr) {
			 label4->Text = "Your kcal summary " + currentUser->calories.ToString("F2") + " kcal";
		 }
		 else {
			 // Obs³uga sytuacji, gdy obiekt User jest pusty
			 label4->Text = "Error no user info";
		 }
	 }


	 void FetchDataFromDatabase(String^ username)
	 {
		 try
		 {
			 sqlConnection->Open();

			 String^ query = "SELECT * FROM Users WHERE name = @Username";
			 SqlCommand^ command = gcnew SqlCommand(query, sqlConnection);
			 command->Parameters->AddWithValue("@Username", username);

			 SqlDataReader^ reader = command->ExecuteReader();

			 if (reader->Read())
			 {
				 currentUser->calories = Convert::ToDouble(reader["calories"]);
				 currentUser->steps = Convert::ToDouble(reader["steps"]);
				 currentUser->eaten = Convert::ToDouble(reader["eaten"]);

				 UpdateFormData(currentUser);
			 }

			 reader->Close();
		 }
		 catch (Exception^ ex)
		 {
			 MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		 }
		 finally
		 {
			 sqlConnection->Close();
		 }
	 }

	 System::Void BtnUpdate_Click(System::Object^ sender, System::EventArgs^ e)
	 {
		 FetchDataFromDatabase(currentUser->name);
	 }

	 void UpdateFormData(User^ user)
	 {
		 double totalCalories = user->calories + Kcalfromsteps(user->steps) - user->eaten;

		 // Oblicz zakres
		 double range = user->calories + Kcalfromsteps(user->steps);

		 // Sprawdza czy totalCalories jest w zakresie
		 if (totalCalories <= 0)
		 {
			 progressBar1->Value = progressBar1->Minimum;
		 }
		 else if (totalCalories >= range)
		 {
			 //Jezeli wartosc bedzie wyzsza niz zakres to wraca do maxa
			 progressBar1->Value = progressBar1->Maximum;
		 }
		 else
		 {
			 // Oblicza procenty paska
			 int value = int((totalCalories / range) * progressBar1->Maximum);

			 progressBar1->Value = value;
		 }



		 lbUserinfo->Text = user->name;
		 lbUserinfo2->Text = user->name;
		 label5->Text = totalCalories.ToString();

		 label4->TextAlign = ContentAlignment::MiddleCenter;
		 label5->TextAlign = ContentAlignment::MiddleCenter;

		 label4->Text = user->eaten.ToString();
		 btSteps->Text = user->steps.ToString();
		 btSteps->TextAlign = ContentAlignment::MiddleCenter;
	 }

};
}