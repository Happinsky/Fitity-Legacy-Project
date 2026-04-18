#include "User.h"
#include "LoginForm.h"
#include "SingleForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread] // Ensure this attribute is added
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    User^ user = nullptr;
    Fitity::LoginForm^ loginForm;

    String^ windowTitle;

    do {
        loginForm = gcnew Fitity::LoginForm;
        loginForm->ShowDialog();

        // Check DialogResult for Cancel
        if (loginForm->DialogResult == System::Windows::Forms::DialogResult::Cancel) {
            return 0;  // Exits the application
        }

        if (loginForm->switchToRegister) {
            Fitity::RegisterForm registerForm;
            registerForm.ShowDialog();

            if (registerForm.DialogResult == System::Windows::Forms::DialogResult::Cancel) {
                return 0;
            }

            if (!registerForm.switchtoLogin) {
                user = registerForm.user;
            }
        }
        else {
            user = loginForm->user;
        }

        // Assign window title from LoginForm to SingleForm
        windowTitle = loginForm->Text;
        loginForm->Close();

    } while (user == nullptr);

    // After login, opens SingleForm
    Fitity::SingleForm singleForm(user);
    singleForm.Text = windowTitle;
    singleForm.Icon = loginForm->Icon;
    Application::Run(% singleForm);

    return 0;
}