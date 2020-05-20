#pragma once

namespace PharmacyDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� PharmacyDatabaseForm
	/// </summary>
	public ref class PharmacyDatabaseForm : public System::Windows::Forms::Form
	{
	public:
		PharmacyDatabaseForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~PharmacyDatabaseForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

















	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Recipe;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Validity;











	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Recipe = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Validity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->��������ToolStripMenuItem });
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(888, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &PharmacyDatabaseForm::menuStrip1_ItemClicked);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(668, 52);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 256);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"���� ��������";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Location = System::Drawing::Point(684, 27);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 77);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"�����";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(119, 45);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 1;
			this->button4->Text = L"�����";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 174);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(188, 51);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 106);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 51);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�������� � �������";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(868, 567);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"�������� �����";
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(868, 567);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"���� ����� � ������������";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ID, this->Column1,
					this->Quantity, this->Price, this->Recipe, this->Validity
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(668, 568);
			this->dataGridView1->TabIndex = 9;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(12, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(876, 596);
			this->tabControl1->TabIndex = 13;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(868, 567);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"�������";
			// 
			// ID
			// 
			this->ID->FillWeight = 50;
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->Width = 30;
			// 
			// Column1
			// 
			this->Column1->FillWeight = 150;
			this->Column1->HeaderText = L"��������";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"�����������";
			this->Quantity->Name = L"Quantity";
			// 
			// Price
			// 
			this->Price->HeaderText = L"����";
			this->Price->Name = L"Price";
			// 
			// Recipe
			// 
			this->Recipe->FillWeight = 50;
			this->Recipe->HeaderText = L"�� �������";
			this->Recipe->Name = L"Recipe";
			// 
			// Validity
			// 
			this->Validity->HeaderText = L"���� �������";
			this->Validity->Name = L"Validity";
			// 
			// PharmacyDatabaseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(888, 633);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"PharmacyDatabaseForm";
			this->Text = L"PharmacyDatabaseForm";
			this->Load += gcnew System::EventHandler(this, &PharmacyDatabaseForm::PharmacyDatabaseForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
private: System::Void folderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PharmacyDatabaseForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
