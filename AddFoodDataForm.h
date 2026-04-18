#pragma once

namespace Fitity {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::IO;
	using namespace System::Windows::Forms;
	/// <summary>
	/// Podsumowanie informacji o AddFoodDataForm
	/// </summary>
	public ref class AddFoodDataForm : public System::Windows::Forms::Form
	{

	public:
		AddFoodDataForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
	private:
		System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::TextBox^ quantityTextBox;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::ComboBox^ unitComboBox;

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~AddFoodDataForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
		// ... (existing code)

		// Getter methods for retrieving entered values
		double GetCalories() { return Convert::ToDouble(caloriesTextBox->Text); }
		double GetProtein() { return Convert::ToDouble(proteinTextBox->Text); }
		double GetCarbohydrates() { return Convert::ToDouble(carbohydratesTextBox->Text); }
		double GetFat() { return Convert::ToDouble(fatTextBox->Text); }
	private: System::Windows::Forms::TextBox^ caloriesTextBox;
	private: System::Windows::Forms::TextBox^ proteinTextBox;
	private: System::Windows::Forms::TextBox^ carbohydratesTextBox;
	private: System::Windows::Forms::TextBox^ fatTextBox;
	private: System::Windows::Forms::Button^ saveButton;
	private: System::Windows::Forms::TextBox^ foodNameTextBox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btncancel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ btnSelectFile;


	private: System::Windows::Forms::Label^ label7;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddFoodDataForm::typeid));
			this->unitComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->quantityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnSelectFile = (gcnew System::Windows::Forms::Button());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->caloriesTextBox = (gcnew System::Windows::Forms::TextBox());
			this->proteinTextBox = (gcnew System::Windows::Forms::TextBox());
			this->carbohydratesTextBox = (gcnew System::Windows::Forms::TextBox());
			this->fatTextBox = (gcnew System::Windows::Forms::TextBox());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->foodNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// unitComboBox
			// 
			this->unitComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->unitComboBox->FormattingEnabled = true;
			this->unitComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"g", L"ml", L"portion" });
			this->unitComboBox->Location = System::Drawing::Point(400, 406);
			this->unitComboBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->unitComboBox->Name = L"unitComboBox";
			this->unitComboBox->Size = System::Drawing::Size(160, 24);
			this->unitComboBox->TabIndex = 8;
			// 
			// quantityTextBox
			// 
			this->quantityTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->quantityTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->quantityTextBox->Location = System::Drawing::Point(653, 326);
			this->quantityTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->quantityTextBox->Name = L"quantityTextBox";
			this->quantityTextBox->Size = System::Drawing::Size(133, 15);
			this->quantityTextBox->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label7->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label7->Location = System::Drawing::Point(648, 340);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(147, 37);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Quantity (g/ml)";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnSelectFile
			// 
			this->btnSelectFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnSelectFile->FlatAppearance->BorderColor = System::Drawing::Color::Firebrick;
			this->btnSelectFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSelectFile->Location = System::Drawing::Point(431, 448);
			this->btnSelectFile->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSelectFile->Name = L"btnSelectFile";
			this->btnSelectFile->Size = System::Drawing::Size(125, 38);
			this->btnSelectFile->TabIndex = 22;
			this->btnSelectFile->Text = L"Add file";
			this->btnSelectFile->UseVisualStyleBackColor = false;
			this->btnSelectFile->Click += gcnew System::EventHandler(this, &AddFoodDataForm::btnSelectFile_Click);
			// 
			// caloriesTextBox
			// 
			this->caloriesTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->caloriesTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->caloriesTextBox->Location = System::Drawing::Point(227, 262);
			this->caloriesTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->caloriesTextBox->Name = L"caloriesTextBox";
			this->caloriesTextBox->Size = System::Drawing::Size(133, 15);
			this->caloriesTextBox->TabIndex = 0;
			// 
			// proteinTextBox
			// 
			this->proteinTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->proteinTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->proteinTextBox->Location = System::Drawing::Point(637, 262);
			this->proteinTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->proteinTextBox->Name = L"proteinTextBox";
			this->proteinTextBox->Size = System::Drawing::Size(133, 15);
			this->proteinTextBox->TabIndex = 1;
			// 
			// carbohydratesTextBox
			// 
			this->carbohydratesTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->carbohydratesTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->carbohydratesTextBox->Location = System::Drawing::Point(383, 262);
			this->carbohydratesTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->carbohydratesTextBox->Name = L"carbohydratesTextBox";
			this->carbohydratesTextBox->Size = System::Drawing::Size(227, 15);
			this->carbohydratesTextBox->TabIndex = 2;
			// 
			// fatTextBox
			// 
			this->fatTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->fatTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->fatTextBox->Location = System::Drawing::Point(404, 321);
			this->fatTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->fatTextBox->Name = L"fatTextBox";
			this->fatTextBox->Size = System::Drawing::Size(147, 15);
			this->fatTextBox->TabIndex = 3;
			// 
			// saveButton
			// 
			this->saveButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->saveButton->FlatAppearance->BorderColor = System::Drawing::Color::Firebrick;
			this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveButton->Location = System::Drawing::Point(177, 431);
			this->saveButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(220, 71);
			this->saveButton->TabIndex = 4;
			this->saveButton->Text = L"Add";
			this->saveButton->UseVisualStyleBackColor = false;
			this->saveButton->Click += gcnew System::EventHandler(this, &AddFoodDataForm::saveButton_Click);
			// 
			// foodNameTextBox
			// 
			this->foodNameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->foodNameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->foodNameTextBox->Location = System::Drawing::Point(308, 164);
			this->foodNameTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->foodNameTextBox->Name = L"foodNameTextBox";
			this->foodNameTextBox->Size = System::Drawing::Size(341, 15);
			this->foodNameTextBox->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label1->Location = System::Drawing::Point(303, 178);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(347, 37);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Enter food name";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label2->Location = System::Drawing::Point(227, 277);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 32);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Enter kcal";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label3->Location = System::Drawing::Point(399, 340);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 29);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Enter protein";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label4->Location = System::Drawing::Point(377, 277);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(247, 33);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Enter Carbohydrates";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label5->Location = System::Drawing::Point(632, 277);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 32);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Enter fat";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btncancel
			// 
			this->btncancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btncancel->FlatAppearance->BorderColor = System::Drawing::Color::Firebrick;
			this->btncancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btncancel->Location = System::Drawing::Point(592, 431);
			this->btncancel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(220, 71);
			this->btncancel->TabIndex = 12;
			this->btncancel->Text = L"Cancel";
			this->btncancel->UseVisualStyleBackColor = false;
			this->btncancel->Click += gcnew System::EventHandler(this, &AddFoodDataForm::btncancel_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Firebrick;
			this->panel1->Location = System::Drawing::Point(308, 178);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(340, 1);
			this->panel1->TabIndex = 15;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Firebrick;
			this->panel2->Location = System::Drawing::Point(227, 277);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(133, 1);
			this->panel2->TabIndex = 16;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Firebrick;
			this->panel3->Location = System::Drawing::Point(637, 277);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(133, 1);
			this->panel3->TabIndex = 17;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Firebrick;
			this->panel4->Location = System::Drawing::Point(383, 277);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(232, 1);
			this->panel4->TabIndex = 17;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Firebrick;
			this->panel5->Location = System::Drawing::Point(404, 340);
			this->panel5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(147, 1);
			this->panel5->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::SystemColors::GrayText;
			this->label6->Location = System::Drawing::Point(3, 32);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(984, 63);
			this->label6->TabIndex = 18;
			this->label6->Text = L"ADD YOUR FAVOURITE FOOD!";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(835, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(164, 107);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Location = System::Drawing::Point(911, 194);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(637, 143);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 20;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-9, 15);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(164, 107);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 21;
			this->pictureBox3->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Firebrick;
			this->panel6->Location = System::Drawing::Point(653, 340);
			this->panel6->Margin = System::Windows::Forms::Padding(4);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(133, 1);
			this->panel6->TabIndex = 17;
			// 
			// AddFoodDataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(983, 559);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->unitComboBox);
			this->Controls->Add(this->quantityTextBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btnSelectFile);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btncancel);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->foodNameTextBox);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->fatTextBox);
			this->Controls->Add(this->carbohydratesTextBox);
			this->Controls->Add(this->proteinTextBox);
			this->Controls->Add(this->caloriesTextBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"AddFoodDataForm";
			this->Text = L"AddFood";
			this->Load += gcnew System::EventHandler(this, &AddFoodDataForm::AddFoodDataForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				String^ foodName = foodNameTextBox->Text;
				double calories = Convert::ToDouble(caloriesTextBox->Text);
				double protein = Convert::ToDouble(proteinTextBox->Text);
				double carbohydrates = Convert::ToDouble(carbohydratesTextBox->Text);
				double fat = Convert::ToDouble(fatTextBox->Text);
				double quantity = Convert::ToDouble(quantityTextBox->Text);
				String^ unit = unitComboBox->Text;

				AddFoodToDatabase(foodName, calories, protein, carbohydrates, fat, quantity, unit);
				this->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		void AddFoodToDatabase(String^ name, double calories, double protein, double carbohydrates, double fat, double quantity, String^ unit) {
			try {
				
				SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=fitity;Integrated Security=True;Encrypt=True;TrustServerCertificate=True;");
				connection->Open();

				// Sprawdza, czy jedzenie o tej nazwie  istnieje
				String^ checkFoodQuery = "SELECT COUNT(*) FROM Food WHERE Name = @Name";
				SqlCommand^ checkFoodCommand = gcnew SqlCommand(checkFoodQuery, connection);
				checkFoodCommand->Parameters->AddWithValue("@Name", name);
				int existingFoodCount = Convert::ToInt32(checkFoodCommand->ExecuteScalar());

				if (existingFoodCount == 0) {
					// Dodaj nowe jedzenie do tabeli Food
					String^ insertFoodQuery = "INSERT INTO Food (Name, Calories, Protein, Carbohydrates, Fat) VALUES (@Name, @Calories, @Protein, @Carbohydrates, @Fat)";
					SqlCommand^ insertFoodCommand = gcnew SqlCommand(insertFoodQuery, connection);
					insertFoodCommand->Parameters->AddWithValue("@Name", name);
					insertFoodCommand->Parameters->AddWithValue("@Calories", calories);
					insertFoodCommand->Parameters->AddWithValue("@Protein", protein);
					insertFoodCommand->Parameters->AddWithValue("@Carbohydrates", carbohydrates);
					insertFoodCommand->Parameters->AddWithValue("@Fat", fat);
					insertFoodCommand->ExecuteNonQuery();
				}

				// Dodaj informacje o spozyciu do tabeli FoodConsumption
				String^ insertConsumptionQuery = "INSERT INTO FoodConsumption (FoodName, Quantity, Unit, ConsumptionDate) VALUES (@FoodName, @Quantity, @Unit, GETDATE())";
				SqlCommand^ insertConsumptionCommand = gcnew SqlCommand(insertConsumptionQuery, connection);
				insertConsumptionCommand->Parameters->AddWithValue("@FoodName", name);
				insertConsumptionCommand->Parameters->AddWithValue("@Quantity", quantity);
				insertConsumptionCommand->Parameters->AddWithValue("@Unit", unit);
				insertConsumptionCommand->ExecuteNonQuery();

				MessageBox::Show("Food added successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				connection->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("An error occurred while adding food to the database: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	private: System::Void AddFoodDataForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btncancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}

private: System::Void btnSelectFile_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog->Filter = "Text Files (*.txt)|*.txt";
	openFileDialog->Title = "Select a Text File";
	// wyswietla okno i sprawdza czy wybrano plik
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		StreamReader^ sr = gcnew StreamReader(openFileDialog->FileName);
		while (!sr->EndOfStream) { // czyta kod do konca 
			String^ line = sr->ReadLine();
			array<String^>^ parts = line->Split(gcnew array<Char>{','});
			if (parts->Length == 7) { 
				String^ name = parts[0];
				double calories = Convert::ToDouble(parts[1]);
				double protein = Convert::ToDouble(parts[2]);
				double carbohydrates = Convert::ToDouble(parts[3]);
				double fat = Convert::ToDouble(parts[4]);
				double quantity = Convert::ToDouble(parts[5]);
				String^ unit = parts[6];

			
				if (unit == "ml" || unit == "g" || unit == "portion") {
					AddFoodToDatabase(name, calories, protein, carbohydrates, fat, quantity, unit);
				}
				else {
					MessageBox::Show("Invalid unit. The unit must be 'ml', 'g', or 'portion'.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		sr->Close();
	}
}
	};
};