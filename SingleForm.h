#pragma once

#include "Calculator.h"
#include "AccountForm.h"
#include "User.h"
#include "LoginForm.h"
#include "RegisterForm.h"
#include "mainForm.h"

namespace Fitity {

    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Drawing;

    public ref class SingleForm : public System::Windows::Forms::Form
    {
    private:
        Fitity::Calculator^ calculator;
        Fitity::accountForm^ accountForm;
        Fitity::mainForm^ mainFormInstance;
        User^ currentUser;
        Panel^ mainPanel;

    public:
        SingleForm(User^ user)
        {
            Label^ lblUsername = gcnew Label();

            lblUsername->Text = user->name;
            lblUsername->Location = Point(724, 737);
            lblUsername->Size = System::Drawing::Size(46, 18);
            lblUsername->Font = gcnew System::Drawing::Font("Arial", 11.25, FontStyle::Regular);
            lblUsername-> ForeColor = Color::White;
            lblUsername->AutoSize = true;
            lblUsername->BackColor = Color::Firebrick;
            this->Controls->Add(lblUsername);
            InitializeComponent();
            currentUser = user;

            // wprowadza wersje formularzy
            calculator = gcnew Fitity::Calculator(currentUser);
            accountForm = gcnew Fitity::accountForm(currentUser);
            mainFormInstance = gcnew Fitity::mainForm(currentUser);
            this->CenterToScreen();

            ShowFormInPanel(mainFormInstance);
        }

    private:
        System::Void InitializeComponent(void)
        {
            Label^ lblAdditional = gcnew Label();
            lblAdditional->BackColor = Color::Firebrick;
            lblAdditional->Location = Point(-180, 737);
            lblAdditional->Size = System::Drawing::Size(324, 18);
            Label^ lblSummary = gcnew Label();
            lblSummary->Text = "Summary";
            lblSummary->Font = gcnew System::Drawing::Font("Arial", 11.25, FontStyle::Regular);
            lblSummary->ForeColor = Color::White;
            lblSummary->Location = Point(101, 737);
            lblSummary->Size = System::Drawing::Size(308, 18);
            lblSummary->BackColor = Color::Firebrick;
            Label^ lblCalculator = gcnew Label();
            lblCalculator->Text = "Calculator";
            lblCalculator->Font = gcnew System::Drawing::Font("Arial", 11.25, FontStyle::Regular);
            lblCalculator->BackColor = Color::Firebrick;
            lblCalculator->ForeColor = Color::White;
            lblCalculator->Location = Point(409, 737);
            lblCalculator->Size = System::Drawing::Size(490, 18);

            this->Controls->Add(lblCalculator);
            this->Controls->Add(lblSummary);
            this->Controls->Add(lblAdditional);
            this->Text = L"Single Form";
            this->Size = System::Drawing::Size(889, 754);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;

 
            mainPanel = gcnew Panel();
            mainPanel->Dock = DockStyle::Fill;

            Button^ btnMainForm = CreateButton("", Point(95, 664), gcnew EventHandler(this, &SingleForm::btnMainForm_Click));
            Button^ btnCalculator = CreateButton("", Point(412, 664), gcnew EventHandler(this, &SingleForm::btnCalculator_Click));
            Button^ btnAccountForm = CreateButton("", Point(721, 664), gcnew EventHandler(this, &SingleForm::btnAccountForm_Click));

            btnAccountForm->BackgroundImage = System::Drawing::Image::FromFile("C:\\Users\\wodni\\OneDrive\\Pulpit\\Images\\avatar.png");
            btnCalculator->BackgroundImage = System::Drawing::Image::FromFile("C:\\Users\\wodni\\OneDrive\\Pulpit\\Images\\calculator.png");
            btnMainForm->BackgroundImage = System::Drawing::Image::FromFile("C:\\Users\\wodni\\OneDrive\\Pulpit\\Images\\sumary.png");
            Button^ CLBTN = gcnew Button();
            CLBTN->BackColor = Color::Firebrick; 
            CLBTN->Location = Point(812, 38);
            CLBTN->Size = System::Drawing::Size(80, 23);
            CLBTN->FlatStyle = FlatStyle::Flat;
            CLBTN->Text = L"QUIT";
            CLBTN->Click += gcnew System::EventHandler(this, &SingleForm::CLBTN_Click);

// dodaje buttony do panelu
            this->Controls->Add(lblCalculator);
            this->Controls->Add(CLBTN);
            this->Controls->Add(btnAccountForm);
            this->Controls->Add(btnCalculator);
            this->Controls->Add(btnMainForm);
            this->Controls->Add(mainPanel);
        }

        Button^ CreateButton(String^ text, Point location, EventHandler^ clickEvent)
        {
            Button^ button = gcnew Button();
            button->FlatStyle = FlatStyle::Flat;
            button->FlatAppearance->BorderSize = 0;
            button->FlatAppearance->MouseDownBackColor = Color::Transparent;
            button->FlatAppearance->MouseOverBackColor = Color::Transparent;
            button->BackColor = Color::Transparent;
            button->ForeColor = Color::Transparent;
            button->Text = text;
            button->Location = location;
            button->Size = System::Drawing::Size(78, 70);
            button->Click += clickEvent;
            return button;
        }

        System::Void btnMainForm_Click(System::Object^ sender, System::EventArgs^ e)
        {
            ShowFormInPanel(mainFormInstance);
        }

        System::Void btnCalculator_Click(System::Object^ sender, System::EventArgs^ e)
        {
            ShowFormInPanel(calculator);
        }

        System::Void btnAccountForm_Click(System::Object^ sender, System::EventArgs^ e)
        {
            ShowFormInPanel(accountForm);
        }

        void ShowFormInPanel(Form^ form)
        {
            // czyscy panel
            mainPanel->Controls->Clear();

            // pokazuje wybrany formularz
            form->TopLevel = false;
            form->Visible = true;
            form->Dock = DockStyle::Fill;
            mainPanel->Controls->Add(form);
        }

        System::Void CLBTN_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->Close();
        }
    };
}