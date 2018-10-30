#pragma once
#include "A.h"
#include "B.h"

namespace GUITesting {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainForm 的摘要
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;








	private:
		Collections::Generic::List<Father^>^ lists;

	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(288, 444);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(104, 32);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(315, 242);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel1_Paint);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(99, 46);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 160);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(96, 20);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1, 188);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(60, 70);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(100, 100);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel2_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(5, 5);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(100, 100);
			this->panel3->TabIndex = 0;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel3_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 15);
			this->label3->TabIndex = 1;
			this->label3->Text = L"label3";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->groupBox1->Location = System::Drawing::Point(469, 189);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(203, 240);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(965, 687);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::MainForm_Paint);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void MainForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
		{
			Pen^ drawPen = gcnew Pen(Color::Black);

			e->Graphics->DrawLine(drawPen, 0, 0, 200, 200);

			delete drawPen;
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->textBox1->Text += "GG";
		//this->panel2->BackColor = Color::Transparent;
		//this->panel1->Controls->Add(this->panel2);
		this->button1->Click -= gcnew System::EventHandler(this, &MainForm::button1_Click);
		this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click2);
	}
	private: 
		System::Void button1_Click2(System::Object^  sender, System::EventArgs^  e)
		{
			this->textBox1->Text += "G8";
			this->textBox1->Text += Environment::NewLine;
			//this->panel3->BackColor = Color::Transparent;
			//this->panel2->Controls->Add(this->panel3);
			//this->button1->Click -= gcnew System::EventHandler(this, &MainForm::button1_Click2);
		}
	private: 
		System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e)
		{

		}
	private: 
		System::Void panel1_BackgroundImageChanged(System::Object^  sender, System::EventArgs^  e) 
		{
		}
	private: 
		System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
		{

		}
	private: 
		System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
		{
			Pen^ drawPen = gcnew Pen(Color::Black);
			Drawing::Font^ drawFont = gcnew Drawing::Font("Arial", 16);
			SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);

			SizeF wowSize = e->Graphics->MeasureString(label2->Text, drawFont);
			wowSize;
			e->Graphics->DrawString(label2->Text, drawFont, drawBrush, 15, 50);

			delete drawBrush;
			delete drawFont;
			delete drawPen;
		}
		System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
		{
			Pen^ drawPen = gcnew Pen(Color::Black);
			Drawing::Font^ drawFont = gcnew Drawing::Font("Arial", 16);
			SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);

			
			e->Graphics->DrawString(label3->Text, drawFont, drawBrush, 15, 50);

			delete drawBrush;
			delete drawFont;
			delete drawPen;
		}
};
}
