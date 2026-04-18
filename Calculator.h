#pragma once
#include "User.h"
#include "AddFoodDataForm.h"
#include "FileAnalyzer.h"
namespace Fitity {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;
	using namespace iTextSharp::text;
	using namespace iTextSharp::text::pdf;
	using namespace System::IO;



	/// <summary>
	/// Podsumowanie informacji o Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	private:
		User^ currentUser;
	public:
		Calculator(User^ user)
		{
			InitializeComponent();
			sumakcal->Text = "Total Calories: 0";
			if (user != nullptr) {
				this->currentUser = user;
			}
			else {
			}
			this->StartPosition = FormStartPosition::CenterScreen;
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::ComboBox^ unitComboBox;
	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: System::Windows::Forms::Button^ btnSummary;



	private: System::Windows::Forms::TextBox^ whateat;
	private: System::Windows::Forms::TextBox^ gramsTextBox;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ ilekcal;

	private: System::Windows::Forms::Label^ sumakcal;
	private: System::Windows::Forms::Label^ everythinglabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Steps;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ Clearcalories;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ addphoto;
	private: System::Windows::Forms::Button^ dodaj;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ createpdf;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->gramsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->unitComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnSummary = (gcnew System::Windows::Forms::Button());
			this->whateat = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->ilekcal = (gcnew System::Windows::Forms::Label());
			this->sumakcal = (gcnew System::Windows::Forms::Label());
			this->everythinglabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Steps = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->Clearcalories = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->addphoto = (gcnew System::Windows::Forms::Button());
			this->dodaj = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->createpdf = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// gramsTextBox
			// 
			this->gramsTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->gramsTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->gramsTextBox->Location = System::Drawing::Point(696, 255);
			this->gramsTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->gramsTextBox->Name = L"gramsTextBox";
			this->gramsTextBox->Size = System::Drawing::Size(133, 22);
			this->gramsTextBox->TabIndex = 62;
			// 
			// unitComboBox
			// 
			this->unitComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->unitComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->unitComboBox->FormattingEnabled = true;
			this->unitComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"g", L"ml", L"portion" });
			this->unitComboBox->Location = System::Drawing::Point(837, 254);
			this->unitComboBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->unitComboBox->Name = L"unitComboBox";
			this->unitComboBox->Size = System::Drawing::Size(132, 24);
			this->unitComboBox->TabIndex = 63;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-51, 817);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1635, 112);
			this->pictureBox2->TabIndex = 29;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(599, 817);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1635, 112);
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// btnSummary
			// 
			this->btnSummary->Location = System::Drawing::Point(0, 0);
			this->btnSummary->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSummary->Name = L"btnSummary";
			this->btnSummary->Size = System::Drawing::Size(100, 28);
			this->btnSummary->TabIndex = 64;
			// 
			// whateat
			// 
			this->whateat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->whateat->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->whateat->Location = System::Drawing::Point(288, 258);
			this->whateat->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->whateat->Name = L"whateat";
			this->whateat->Size = System::Drawing::Size(387, 15);
			this->whateat->TabIndex = 38;
			this->whateat->TextChanged += gcnew System::EventHandler(this, &Calculator::oldpassword_TextChanged);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(533, -1);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(653, 134);
			this->pictureBox5->TabIndex = 40;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-100, -1);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(653, 134);
			this->pictureBox3->TabIndex = 41;
			this->pictureBox3->TabStop = false;
			// 
			// ilekcal
			// 
			this->ilekcal->AutoSize = true;
			this->ilekcal->BackColor = System::Drawing::Color::Brown;
			this->ilekcal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ilekcal->ForeColor = System::Drawing::Color::DimGray;
			this->ilekcal->Location = System::Drawing::Point(847, 417);
			this->ilekcal->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ilekcal->Name = L"ilekcal";
			this->ilekcal->Size = System::Drawing::Size(194, 31);
			this->ilekcal->TabIndex = 42;
			this->ilekcal->Text = L"Waiting for info";
			// 
			// sumakcal
			// 
			this->sumakcal->AutoSize = true;
			this->sumakcal->BackColor = System::Drawing::Color::Brown;
			this->sumakcal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sumakcal->ForeColor = System::Drawing::SystemColors::GrayText;
			this->sumakcal->Location = System::Drawing::Point(447, 417);
			this->sumakcal->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->sumakcal->Name = L"sumakcal";
			this->sumakcal->Size = System::Drawing::Size(215, 31);
			this->sumakcal->TabIndex = 45;
			this->sumakcal->Text = L"Summary of kcal";
			this->sumakcal->Click += gcnew System::EventHandler(this, &Calculator::suma_Click);
			// 
			// everythinglabel
			// 
			this->everythinglabel->AutoSize = true;
			this->everythinglabel->BackColor = System::Drawing::Color::Brown;
			this->everythinglabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->everythinglabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->everythinglabel->Location = System::Drawing::Point(447, 448);
			this->everythinglabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->everythinglabel->Name = L"everythinglabel";
			this->everythinglabel->Size = System::Drawing::Size(277, 31);
			this->everythinglabel->TabIndex = 46;
			this->everythinglabel->Text = L"Summary of nutritions";
			this->everythinglabel->Click += gcnew System::EventHandler(this, &Calculator::everythinglabel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label1->Location = System::Drawing::Point(311, 190);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(549, 52);
			this->label1->TabIndex = 47;
			this->label1->Text = L"Write what you have eaten ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(385, 23);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(396, 91);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Calculator";
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(837, 27);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 86);
			this->button2->TabIndex = 49;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(281, 23);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 86);
			this->button3->TabIndex = 50;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(595, 720);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 51;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Brown;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::DimGray;
			this->label6->Location = System::Drawing::Point(121, 464);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(185, 29);
			this->label6->TabIndex = 54;
			this->label6->Text = L"Write your steps";
			// 
			// Steps
			// 
			this->Steps->BackColor = System::Drawing::Color::Maroon;
			this->Steps->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Steps->ForeColor = System::Drawing::Color::Gray;
			this->Steps->Location = System::Drawing::Point(105, 511);
			this->Steps->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Steps->Name = L"Steps";
			this->Steps->Size = System::Drawing::Size(235, 15);
			this->Steps->TabIndex = 55;
			this->Steps->TextChanged += gcnew System::EventHandler(this, &Calculator::Steps_TextChanged);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(3, 378);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(399, 218);
			this->pictureBox4->TabIndex = 56;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(749, 378);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(437, 218);
			this->pictureBox6->TabIndex = 57;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(381, 378);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(408, 235);
			this->pictureBox7->TabIndex = 58;
			this->pictureBox7->TabStop = false;
			// 
			// Clearcalories
			// 
			this->Clearcalories->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Clearcalories->BackColor = System::Drawing::Color::Black;
			this->Clearcalories->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Clearcalories->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Clearcalories->ForeColor = System::Drawing::SystemColors::GrayText;
			this->Clearcalories->Location = System::Drawing::Point(555, 546);
			this->Clearcalories->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Clearcalories->Name = L"Clearcalories";
			this->Clearcalories->Size = System::Drawing::Size(84, 31);
			this->Clearcalories->TabIndex = 59;
			this->Clearcalories->Text = L"Clear";
			this->Clearcalories->Click += gcnew System::EventHandler(this, &Calculator::Clearcalories_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel1->Location = System::Drawing::Point(104, 526);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(236, 1);
			this->panel1->TabIndex = 60;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Firebrick;
			this->panel2->Location = System::Drawing::Point(288, 273);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(389, 1);
			this->panel2->TabIndex = 61;
			// 
			// addphoto
			// 
			this->addphoto->BackColor = System::Drawing::Color::DimGray;
			this->addphoto->Cursor = System::Windows::Forms::Cursors::Default;
			this->addphoto->FlatAppearance->BorderColor = System::Drawing::Color::Firebrick;
			this->addphoto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addphoto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->addphoto->Location = System::Drawing::Point(288, 293);
			this->addphoto->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->addphoto->Name = L"addphoto";
			this->addphoto->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->addphoto->Size = System::Drawing::Size(161, 31);
			this->addphoto->TabIndex = 65;
			this->addphoto->Text = L"Image";
			this->addphoto->UseVisualStyleBackColor = false;
			this->addphoto->Click += gcnew System::EventHandler(this, &Calculator::addphoto_Click);
			// 
			// dodaj
			// 
			this->dodaj->BackColor = System::Drawing::Color::DimGray;
			this->dodaj->Cursor = System::Windows::Forms::Cursors::Default;
			this->dodaj->FlatAppearance->BorderColor = System::Drawing::Color::Firebrick;
			this->dodaj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dodaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->dodaj->Location = System::Drawing::Point(513, 293);
			this->dodaj->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dodaj->Name = L"dodaj";
			this->dodaj->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dodaj->Size = System::Drawing::Size(161, 31);
			this->dodaj->TabIndex = 66;
			this->dodaj->Text = L"Add food";
			this->dodaj->UseVisualStyleBackColor = false;
			this->dodaj->Click += gcnew System::EventHandler(this, &Calculator::dodaj_Click_1);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Firebrick;
			this->panel3->Location = System::Drawing::Point(696, 278);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(135, 1);
			this->panel3->TabIndex = 62;
			// 
			// createpdf
			// 
			this->createpdf->BackColor = System::Drawing::Color::DimGray;
			this->createpdf->Cursor = System::Windows::Forms::Cursors::Default;
			this->createpdf->FlatAppearance->BorderColor = System::Drawing::Color::Firebrick;
			this->createpdf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->createpdf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->createpdf->Location = System::Drawing::Point(513, 753);
			this->createpdf->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->createpdf->Name = L"createpdf";
			this->createpdf->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->createpdf->Size = System::Drawing::Size(161, 31);
			this->createpdf->TabIndex = 67;
			this->createpdf->Text = L"Create pdf";
			this->createpdf->UseVisualStyleBackColor = false;
			this->createpdf->Click += gcnew System::EventHandler(this, &Calculator::button1_Click_1);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1185, 928);
			this->Controls->Add(this->createpdf);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->dodaj);
			this->Controls->Add(this->addphoto);
			this->Controls->Add(this->gramsTextBox);
			this->Controls->Add(this->unitComboBox);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->everythinglabel);
			this->Controls->Add(this->Clearcalories);
			this->Controls->Add(this->sumakcal);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->ilekcal);
			this->Controls->Add(this->Steps);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->whateat);
			this->Controls->Add(this->btnSummary);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox6);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CLBTN_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	public: bool SwitchtoAccount3 = false;
	private: System::Void Witam_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void newpassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		 
	private: System::Void oldpassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ foodName = whateat->Text;

		if (!String::IsNullOrWhiteSpace(foodName)) {
			try {
				SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=fitity;Integrated Security=True;Encrypt=True;TrustServerCertificate=True;");
				connection->Open();

				// Zapytanie do tabeli Food
				String^ foodQuery = "SELECT Calories, Protein, Carbohydrates, Fat FROM food WHERE Name = @foodName";
				SqlCommand^ foodCommand = gcnew SqlCommand(foodQuery, connection);
				foodCommand->Parameters->AddWithValue("@foodName", foodName);
				SqlDataReader^ foodReader = foodCommand->ExecuteReader();

				if (foodReader->Read()) {
					double calories = Convert::ToDouble(foodReader->GetValue(0));
					double protein = Convert::ToDouble(foodReader->GetValue(1));
					double carbohydrates = Convert::ToDouble(foodReader->GetValue(2));
					double fat = Convert::ToDouble(foodReader->GetValue(3));
					foodReader->Close();

					// Zapytanie do tabeli FoodConsumption
					String^ consumptionQuery = "SELECT Unit, Quantity FROM FoodConsumption WHERE FoodName = @foodName";
					SqlCommand^ consumptionCommand = gcnew SqlCommand(consumptionQuery, connection);
					consumptionCommand->Parameters->AddWithValue("@foodName", foodName);
					SqlDataReader^ consumptionReader = consumptionCommand->ExecuteReader();

					if (consumptionReader->Read()) {
						String^ unit = consumptionReader->GetString(0);
						double quantity = Convert::ToDouble(consumptionReader->GetValue(1));

						// Wyœwietlenie informacji o produkcie
						ilekcal->Text = "Product: " + foodName + "\n" +
							"Quantity: " + quantity.ToString("F2") + " " + unit + "\n" +
							"Calories: " + calories.ToString("F2") + "\n" +
							"Protein: " + protein.ToString("F2") + "\n" +
							"Carbohydrates: " + carbohydrates.ToString("F2") + "\n" +
							"Fat: " + fat.ToString("F2");
					}
					else {
						ilekcal->Text = "No consumption data for this product.";
					}
				}
				else {
					ilekcal->Text = "No data for this product.";
				}

				connection->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			// Aktywowanie pól do wprowadzania iloœci i jednostki
			gramsTextBox->Enabled = true;
			unitComboBox->Enabled = true;
		}
		else {
			// Dezaktywowanie pól, jeœli nazwa produktu nie jest wpisana
			gramsTextBox->Enabled = false;
			unitComboBox->Enabled = false;
			ilekcal->Text = "";
		}
	}
	private:
		double currentTotalCalories = 0;
		double currentTotalProtein = 0;
		double currentTotalCarbohydrates = 0;
		double currentTotalFat = 0;
		private: String^ consumedFoodNames = "";
private: System::Void dodaj_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ foodName = whateat->Text;
		String^ quantityText = gramsTextBox->Text;
		String^ selectedUnit = dynamic_cast<String^>(unitComboBox->SelectedItem);
		if (!String::IsNullOrWhiteSpace(foodName)) {
			double quantity = 0.0;
			if (!consumedFoodNames->Empty) consumedFoodNames += ", ";
			consumedFoodNames += foodName;

			// Sprawdzamy, czy wprowadzono iloœæ i czy jest liczb¹
			if (!String::IsNullOrWhiteSpace(quantityText) && Double::TryParse(quantityText, quantity)) {
				SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=fitity;Integrated Security=True;Encrypt=True;TrustServerCertificate=True;");
				connection->Open();

				// Sprawdzenie, czy produkt istnieje w bazie danych
				String^ checkExistenceQuery = "SELECT COUNT(*) FROM Food WHERE Name = @foodName";
				SqlCommand^ checkExistenceCommand = gcnew SqlCommand(checkExistenceQuery, connection);
				checkExistenceCommand->Parameters->AddWithValue("@foodName", foodName);
				int foodExistence = Convert::ToInt32(checkExistenceCommand->ExecuteScalar());

				if (foodExistence > 0) {
					// Produkt istnieje w bazie danych

					// Sprawdzenie jednostki z tabeli FoodConsumption
					String^ consumptionQuery = "SELECT Unit FROM FoodConsumption WHERE FoodName = @foodName";
					SqlCommand^ consumptionCommand = gcnew SqlCommand(consumptionQuery, connection);
					consumptionCommand->Parameters->AddWithValue("@foodName", foodName);
					String^ databaseUnit = dynamic_cast<String^>(consumptionCommand->ExecuteScalar());

					if (selectedUnit == databaseUnit) {
						// Pobranie informacji o sk³adnikach od¿ywczych z bazy danych
						String^ nutritionQuery = "SELECT Calories, Protein, Carbohydrates, Fat FROM Food WHERE Name = @foodName";
						SqlCommand^ nutritionCommand = gcnew SqlCommand(nutritionQuery, connection);
						nutritionCommand->Parameters->AddWithValue("@foodName", foodName);
						SqlDataReader^ nutritionReader = nutritionCommand->ExecuteReader();

						if (nutritionReader->Read()) {
							double calories = Convert::ToDouble(nutritionReader->GetValue(0));
							double protein = Convert::ToDouble(nutritionReader->GetValue(1));
							double carbohydrates = Convert::ToDouble(nutritionReader->GetValue(2));
							double fat = Convert::ToDouble(nutritionReader->GetValue(3));

							// Obliczenie sk³adników od¿ywczych na podstawie iloœci
							if (selectedUnit == "ml" || selectedUnit == "g") {
								double totalCalories = calories * quantity / 100;
								double totalProtein = protein * quantity / 100;
								double totalCarbohydrates = carbohydrates * quantity / 100;
								double totalFat = fat * quantity / 100;
								currentTotalCalories += totalCalories;
								currentTotalProtein += totalProtein;
								currentTotalCarbohydrates += totalCarbohydrates;
								currentTotalFat += totalFat;
							}
							else if (selectedUnit == "portion") {
								double totalCalories = calories * quantity;
								double totalProtein = protein * quantity;
								double totalCarbohydrates = carbohydrates * quantity;
								double totalFat = fat * quantity;
								currentTotalCalories += totalCalories;
								currentTotalProtein += totalProtein;
								currentTotalCarbohydrates += totalCarbohydrates;
								currentTotalFat += totalFat;
							}

							// Aktualizacja etykiet
							everythinglabel->Text = "Protein: " + currentTotalProtein.ToString("F2") +
								"\nCarbohydrates: " + currentTotalCarbohydrates.ToString("F2") +
								"\nFat: " + currentTotalFat.ToString("F2");

							sumakcal->Text = "Total Calories: " + currentTotalCalories.ToString("F2");

							
							if (currentUser != nullptr) {
								currentUser->calories += currentTotalCalories;
							}

							// Update 'eaten' in the database
							if (currentUser != nullptr) {
								double eaten = currentTotalCalories; 
								UpdateEatenInDatabase(currentUser->id, eaten);
							}
						}
						nutritionReader->Close();
					}
					else {
						MessageBox::Show("The selected unit does not match the product's unit in the database. Please select the correct unit.", "Unit Mismatch", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					}
				}
				else {
					MessageBox::Show("Invalid quantity value. Please enter a valid number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				connection->Close();
			}
			else {
				// Jeœli pole z nazw¹ produktu jest puste, otwórz formularz AddFoodDataForm
				AddFoodDataForm^ addFoodForm = gcnew AddFoodDataForm();
				addFoodForm->ShowDialog();
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	private: System::Void AddFoodDataForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		// chowa formularz AddFoodDataForm
		dynamic_cast<Form^>(sender)->Hide();
		// Pokazuje formularz Calculator
		this->Show();
	}

		   void UpdateEatenInDatabase(int userID, double eaten) {
			   try {
				   SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=fitity;Integrated Security=True;Encrypt=True;TrustServerCertificate=True;");

				   String^ query = "UPDATE Users SET eaten = @eaten WHERE Id = @UserID";

				   SqlCommand^ command = gcnew SqlCommand(query, connection);

				   command->Parameters->AddWithValue("@eaten", eaten);
				   command->Parameters->AddWithValue("@UserID", userID);

				   connection->Open();
				   command->ExecuteNonQuery();
				   connection->Close();
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Something happened when saving data " + ex->Message,
					   "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }
	private:
		Calculator^ calculatorForm;
	private: System::Void suma_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void everythinglabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Steps_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ stepsText = Steps->Text;

			if (!String::IsNullOrWhiteSpace(stepsText)) {
				int stepsValue;

				if (Int32::TryParse(stepsText, stepsValue)) {
					UpdateStepsInDatabase(currentUser->id, stepsValue);
				}
				else {
					MessageBox::Show("Invalid steps value. Please enter a valid number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred while updating steps: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   void UpdateStepsInDatabase(int userID, int steps) {
			   try {
				   SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=fitity;Integrated Security=True;Encrypt=True;TrustServerCertificate=True;h");

				   String^ query = "UPDATE Users SET steps = @steps WHERE Id = @UserID";

				   SqlCommand^ command = gcnew SqlCommand(query, connection);

				   command->Parameters->AddWithValue("@steps", steps);
				   command->Parameters->AddWithValue("@UserID", userID);

				   connection->Open();
				   command->ExecuteNonQuery();
				   connection->Close();
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("An error occurred while updating steps in the database: " + ex->Message,
					   "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }
	private: System::Void Clearcalories_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// wyczysc liste posilkow

			currentTotalCalories = 0;
			currentTotalProtein = 0;
			currentTotalCarbohydrates = 0;
			currentTotalFat = 0;
			ilekcal->Text = "No data";
			sumakcal->Text = "Total Calories: 0";
			everythinglabel->Text = "Protein: 0\nCarbohydrates: 0\nFat: 0";
			UpdateEatenInDatabase(currentUser->id, currentTotalCalories);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred while clearing calories: " + ex->Message,
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void addphoto_Click(System::Object^ sender, System::EventArgs^ e) {
	FileAnalyzer^ fileAnalyzer = gcnew FileAnalyzer();
	String^ analysisResult = fileAnalyzer->AnalyzeFile();

	// konwertuje z jsona na .net
	JavaScriptSerializer^ jsSerializer = gcnew JavaScriptSerializer();
	Dictionary<String^, Object^>^ jsonResponse = jsSerializer->Deserialize<Dictionary<String^, Object^>^>(analysisResult);

	// Przeszukanie odpowiedzi w celu znalezienia rozpoznanego jedzenia.
	if (jsonResponse != nullptr && jsonResponse->ContainsKey("responses")) {
		ArrayList^ responses = dynamic_cast<ArrayList^>(jsonResponse["responses"]);
		for each (Dictionary<String^, Object^> ^ response in responses) {
			if (response->ContainsKey("labelAnnotations")) {
				ArrayList^ annotations = dynamic_cast<ArrayList^>(response["labelAnnotations"]);
				for each (Dictionary<String^, Object^> ^ annotation in annotations) {
					if (annotation->ContainsKey("description")) {
						String^ foodDescription = dynamic_cast<String^>(annotation["description"]);
						// Sprawdza wszystko w bazie danhch
						Dictionary<String^, double>^ nutritionInfo = GetNutritionForFoodItem(foodDescription);
						if (nutritionInfo != nullptr && nutritionInfo->Count > 0) {
							// sprawdza czy zawiera klucze
							if (nutritionInfo->ContainsKey("Calories") && nutritionInfo->ContainsKey("Protein") &&
								nutritionInfo->ContainsKey("Carbohydrates") && nutritionInfo->ContainsKey("Fat")) {
								// Dodaj wartoœci od¿ywcze do bie¿¹cej sumy.
								currentTotalCalories += nutritionInfo["Calories"];
								currentTotalProtein += nutritionInfo["Protein"];
								currentTotalCarbohydrates += nutritionInfo["Carbohydrates"];
								currentTotalFat += nutritionInfo["Fat"];

								sumakcal->Text = "Total Calories: " + currentTotalCalories.ToString("F2");
								everythinglabel->Text = "Protein: " + currentTotalProtein.ToString("F2") +
									"\nCarbohydrates: " + currentTotalCarbohydrates.ToString("F2") +
									"\nFat: " + currentTotalFat.ToString("F2");

								// wyswietla info w ilekcal
								ilekcal->Text = "Product: " + foodDescription +
									"\nCalories: " + nutritionInfo["Calories"] +
									"\nProtein: " + nutritionInfo["Protein"] +
									"\nCarbohydrates: " + nutritionInfo["Carbohydrates"] +
									"\nFat: " + nutritionInfo["Fat"];
								if (currentUser != nullptr) {
									double eaten = currentTotalCalories; 
									UpdateEatenInDatabase(currentUser->id, eaten);
								}
								// Przerywa gdy znalazlo jedzenie
								return;
							}
						}
					}
				}
			}
		}
		MessageBox::Show("No matching food items found in the database.", "Result", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}


	private: Dictionary<String^, double>^ GetNutritionForFoodItem(String^ foodItem) {
		Dictionary<String^, double>^ nutritionInfo = gcnew Dictionary<String^, double>();
		try {
			SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=fitity;Integrated Security=True;");
			connection->Open();

			String^ query = "SELECT Calories, Protein, Carbohydrates, Fat FROM Food WHERE Name = @foodName";
			SqlCommand^ command = gcnew SqlCommand(query, connection);
			command->Parameters->AddWithValue("@foodName", foodItem);

			SqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				nutritionInfo["Calories"] = Convert::ToDouble(reader["Calories"]);
				nutritionInfo["Protein"] = Convert::ToDouble(reader["Protein"]);
				nutritionInfo["Carbohydrates"] = Convert::ToDouble(reader["Carbohydrates"]);
				nutritionInfo["Fat"] = Convert::ToDouble(reader["Fat"]);
				reader->Close();
			}
			connection->Close();
			return nutritionInfo;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error retrieving nutrition data: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return nullptr;
		}
	}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ pdfP = "C:\\Users\\wodni\\OneDrive\\Pulpit\\Images\\meal_report.pdf";

	try {
		// Tworzenie dokumentu PDF
		iTextSharp::text::Document^ pdfDoc = gcnew iTextSharp::text::Document();
		iTextSharp::text::pdf::PdfWriter::GetInstance(pdfDoc, gcnew FileStream(pdfP, FileMode::Create));
		pdfDoc->Open();

		// Dodaje tekst
		pdfDoc->Add(gcnew iTextSharp::text::Paragraph("Meal Report"));
		pdfDoc->Add(gcnew iTextSharp::text::Paragraph("Eaten Food: " + consumedFoodNames));
		pdfDoc->Add(gcnew iTextSharp::text::Paragraph("Total Calories: " + currentTotalCalories.ToString("F2")));
		pdfDoc->Add(gcnew iTextSharp::text::Paragraph("Protein: " + currentTotalProtein.ToString("F2")));
		pdfDoc->Add(gcnew iTextSharp::text::Paragraph("Carbohydrates: " + currentTotalCarbohydrates.ToString("F2")));
		pdfDoc->Add(gcnew iTextSharp::text::Paragraph("Fat: " + currentTotalFat.ToString("F2")));

		pdfDoc->Close(); // Zamyka dok

		MessageBox::Show("PDF created successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error occurred in PDF creation: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
};
