#include "PharmacyDatabaseForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    PharmacyDatabase::PharmacyDatabaseForm form; //WinFormsTest - ��� ������ �������
    Application::Run(% form);
}
