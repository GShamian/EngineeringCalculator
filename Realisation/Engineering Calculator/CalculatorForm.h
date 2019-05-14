#pragma once
#include "StackCalculator.h"

namespace EngineeringCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CalculatorForm
	/// </summary>
	public ref class CalculatorForm : public System::Windows::Forms::Form
	{
	public:
		CalculatorForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CalculatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  input;
	private: System::Windows::Forms::Button^  num1;
	private: System::Windows::Forms::Button^  num2;
	private: System::Windows::Forms::Button^  num3;
	private: System::Windows::Forms::Button^  num4;
	private: System::Windows::Forms::Button^  num5;
	private: System::Windows::Forms::Button^  num6;
	private: System::Windows::Forms::Button^  num7;
	private: System::Windows::Forms::Button^  num8;
	private: System::Windows::Forms::Button^  num9;
	private: System::Windows::Forms::Button^  num0;
	private: System::Windows::Forms::Button^  clear;
	private: System::Windows::Forms::Button^  plus;
	private: System::Windows::Forms::Button^  minus;
	private: System::Windows::Forms::Button^  divide;
	private: System::Windows::Forms::Button^  multiply;
	private: System::Windows::Forms::Button^  trSin;
	private: System::Windows::Forms::Button^  trCos;
	private: System::Windows::Forms::Button^  trTg;
	private: System::Windows::Forms::Button^  trCtg;
	private: System::Windows::Forms::Button^  trExp;
	private: System::Windows::Forms::Button^  trLog;
	private: System::Windows::Forms::Button^  opBracket;
	private: System::Windows::Forms::Button^  clBracket;
	private: System::Windows::Forms::Button^  answer;
	private: System::Windows::Forms::Button^  point;
	private: System::Windows::Forms::Button^  expForm;
	private: System::Windows::Forms::Button^  power;
	private: System::Windows::Forms::Button^  trPi;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CalculatorForm::typeid));
			this->input = (gcnew System::Windows::Forms::Label());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->num0 = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->trSin = (gcnew System::Windows::Forms::Button());
			this->trCos = (gcnew System::Windows::Forms::Button());
			this->trTg = (gcnew System::Windows::Forms::Button());
			this->trCtg = (gcnew System::Windows::Forms::Button());
			this->trExp = (gcnew System::Windows::Forms::Button());
			this->trLog = (gcnew System::Windows::Forms::Button());
			this->opBracket = (gcnew System::Windows::Forms::Button());
			this->clBracket = (gcnew System::Windows::Forms::Button());
			this->answer = (gcnew System::Windows::Forms::Button());
			this->point = (gcnew System::Windows::Forms::Button());
			this->expForm = (gcnew System::Windows::Forms::Button());
			this->power = (gcnew System::Windows::Forms::Button());
			this->trPi = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// input
			// 
			this->input->BackColor = System::Drawing::Color::White;
			this->input->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input->Location = System::Drawing::Point(33, 15);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(506, 47);
			this->input->TabIndex = 0;
			this->input->Text = L"0";
			this->input->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// num1
			// 
			this->num1->BackColor = System::Drawing::SystemColors::Control;
			this->num1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"num1.BackgroundImage")));
			this->num1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num1->Location = System::Drawing::Point(33, 85);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(45, 40);
			this->num1->TabIndex = 1;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = false;
			this->num1->Click += gcnew System::EventHandler(this, &CalculatorForm::num1_Click);
			// 
			// num2
			// 
			this->num2->BackColor = System::Drawing::SystemColors::Control;
			this->num2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"num2.BackgroundImage")));
			this->num2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num2->Location = System::Drawing::Point(93, 85);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(45, 40);
			this->num2->TabIndex = 2;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = false;
			this->num2->Click += gcnew System::EventHandler(this, &CalculatorForm::num2_Click);
			// 
			// num3
			// 
			this->num3->BackColor = System::Drawing::SystemColors::Control;
			this->num3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"num3.BackgroundImage")));
			this->num3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num3->Location = System::Drawing::Point(154, 85);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(45, 40);
			this->num3->TabIndex = 3;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = false;
			this->num3->Click += gcnew System::EventHandler(this, &CalculatorForm::num3_Click);
			// 
			// num4
			// 
			this->num4->BackColor = System::Drawing::SystemColors::Control;
			this->num4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"num4.BackgroundImage")));
			this->num4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num4->Location = System::Drawing::Point(33, 152);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(45, 40);
			this->num4->TabIndex = 4;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = false;
			this->num4->Click += gcnew System::EventHandler(this, &CalculatorForm::num4_Click);
			// 
			// num5
			// 
			this->num5->BackColor = System::Drawing::SystemColors::Control;
			this->num5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"num5.BackgroundImage")));
			this->num5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num5->Location = System::Drawing::Point(93, 152);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(45, 40);
			this->num5->TabIndex = 5;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = false;
			this->num5->Click += gcnew System::EventHandler(this, &CalculatorForm::num5_Click);
			// 
			// num6
			// 
			this->num6->BackColor = System::Drawing::SystemColors::Control;
			this->num6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"num6.BackgroundImage")));
			this->num6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num6->Location = System::Drawing::Point(154, 152);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(45, 40);
			this->num6->TabIndex = 6;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = false;
			this->num6->Click += gcnew System::EventHandler(this, &CalculatorForm::num6_Click);
			// 
			// num7
			// 
			this->num7->BackColor = System::Drawing::SystemColors::Control;
			this->num7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"num7.BackgroundImage")));
			this->num7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num7->Location = System::Drawing::Point(33, 222);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(45, 40);
			this->num7->TabIndex = 7;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = false;
			this->num7->Click += gcnew System::EventHandler(this, &CalculatorForm::num7_Click);
			// 
			// num8
			// 
			this->num8->BackColor = System::Drawing::SystemColors::Control;
			this->num8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"num8.BackgroundImage")));
			this->num8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num8->Location = System::Drawing::Point(93, 222);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(45, 40);
			this->num8->TabIndex = 8;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = false;
			this->num8->Click += gcnew System::EventHandler(this, &CalculatorForm::num8_Click);
			// 
			// num9
			// 
			this->num9->BackColor = System::Drawing::SystemColors::Control;
			this->num9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"num9.BackgroundImage")));
			this->num9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num9->Location = System::Drawing::Point(154, 222);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(45, 40);
			this->num9->TabIndex = 9;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = false;
			this->num9->Click += gcnew System::EventHandler(this, &CalculatorForm::num9_Click);
			// 
			// num0
			// 
			this->num0->BackColor = System::Drawing::SystemColors::Control;
			this->num0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"num0.BackgroundImage")));
			this->num0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->num0->Location = System::Drawing::Point(33, 283);
			this->num0->Name = L"num0";
			this->num0->Size = System::Drawing::Size(45, 40);
			this->num0->TabIndex = 10;
			this->num0->Text = L"0";
			this->num0->UseVisualStyleBackColor = false;
			this->num0->Click += gcnew System::EventHandler(this, &CalculatorForm::num0_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::SystemColors::Control;
			this->clear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clear.BackgroundImage")));
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear->Location = System::Drawing::Point(93, 283);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(45, 40);
			this->clear->TabIndex = 11;
			this->clear->Text = L"С";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &CalculatorForm::clear_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::SystemColors::Control;
			this->plus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"plus.BackgroundImage")));
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->Location = System::Drawing::Point(255, 201);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(45, 40);
			this->plus->TabIndex = 12;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &CalculatorForm::plus_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::SystemColors::Control;
			this->minus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minus.BackgroundImage")));
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->Location = System::Drawing::Point(357, 201);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(45, 40);
			this->minus->TabIndex = 13;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &CalculatorForm::minus_Click);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::SystemColors::Control;
			this->divide->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"divide.BackgroundImage")));
			this->divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->divide->Location = System::Drawing::Point(405, 201);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(45, 40);
			this->divide->TabIndex = 14;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &CalculatorForm::divide_Click);
			// 
			// multiply
			// 
			this->multiply->BackColor = System::Drawing::SystemColors::Control;
			this->multiply->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"multiply.BackgroundImage")));
			this->multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->multiply->Location = System::Drawing::Point(306, 201);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(45, 40);
			this->multiply->TabIndex = 15;
			this->multiply->Text = L"x";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &CalculatorForm::multiply_Click);
			// 
			// trSin
			// 
			this->trSin->BackColor = System::Drawing::SystemColors::Control;
			this->trSin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"trSin.BackgroundImage")));
			this->trSin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->trSin->Location = System::Drawing::Point(255, 85);
			this->trSin->Name = L"trSin";
			this->trSin->Size = System::Drawing::Size(70, 40);
			this->trSin->TabIndex = 16;
			this->trSin->Text = L"sin";
			this->trSin->UseVisualStyleBackColor = false;
			this->trSin->Click += gcnew System::EventHandler(this, &CalculatorForm::trSin_Click);
			// 
			// trCos
			// 
			this->trCos->BackColor = System::Drawing::SystemColors::Control;
			this->trCos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"trCos.BackgroundImage")));
			this->trCos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->trCos->Location = System::Drawing::Point(255, 142);
			this->trCos->Name = L"trCos";
			this->trCos->Size = System::Drawing::Size(70, 40);
			this->trCos->TabIndex = 17;
			this->trCos->Text = L"cos";
			this->trCos->UseVisualStyleBackColor = false;
			this->trCos->Click += gcnew System::EventHandler(this, &CalculatorForm::trCos_Click);
			// 
			// trTg
			// 
			this->trTg->BackColor = System::Drawing::SystemColors::Control;
			this->trTg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"trTg.BackgroundImage")));
			this->trTg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->trTg->Location = System::Drawing::Point(345, 85);
			this->trTg->Name = L"trTg";
			this->trTg->Size = System::Drawing::Size(70, 40);
			this->trTg->TabIndex = 18;
			this->trTg->Text = L"tg";
			this->trTg->UseVisualStyleBackColor = false;
			this->trTg->Click += gcnew System::EventHandler(this, &CalculatorForm::trTg_Click);
			// 
			// trCtg
			// 
			this->trCtg->BackColor = System::Drawing::SystemColors::Control;
			this->trCtg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"trCtg.BackgroundImage")));
			this->trCtg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->trCtg->Location = System::Drawing::Point(345, 142);
			this->trCtg->Name = L"trCtg";
			this->trCtg->Size = System::Drawing::Size(70, 40);
			this->trCtg->TabIndex = 19;
			this->trCtg->Text = L"ctg";
			this->trCtg->UseVisualStyleBackColor = false;
			this->trCtg->Click += gcnew System::EventHandler(this, &CalculatorForm::trCtg_Click);
			// 
			// trExp
			// 
			this->trExp->BackColor = System::Drawing::SystemColors::Control;
			this->trExp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"trExp.BackgroundImage")));
			this->trExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->trExp->Location = System::Drawing::Point(432, 85);
			this->trExp->Name = L"trExp";
			this->trExp->Size = System::Drawing::Size(70, 40);
			this->trExp->TabIndex = 20;
			this->trExp->Text = L"exp";
			this->trExp->UseVisualStyleBackColor = false;
			this->trExp->Click += gcnew System::EventHandler(this, &CalculatorForm::trExp_Click);
			// 
			// trLog
			// 
			this->trLog->BackColor = System::Drawing::SystemColors::Control;
			this->trLog->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"trLog.BackgroundImage")));
			this->trLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->trLog->Location = System::Drawing::Point(432, 142);
			this->trLog->Name = L"trLog";
			this->trLog->Size = System::Drawing::Size(70, 40);
			this->trLog->TabIndex = 21;
			this->trLog->Text = L"log";
			this->trLog->UseVisualStyleBackColor = false;
			this->trLog->Click += gcnew System::EventHandler(this, &CalculatorForm::trLog_Click);
			// 
			// opBracket
			// 
			this->opBracket->BackColor = System::Drawing::SystemColors::Control;
			this->opBracket->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"opBracket.BackgroundImage")));
			this->opBracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->opBracket->Location = System::Drawing::Point(306, 262);
			this->opBracket->Name = L"opBracket";
			this->opBracket->Size = System::Drawing::Size(45, 40);
			this->opBracket->TabIndex = 22;
			this->opBracket->Text = L"(";
			this->opBracket->UseVisualStyleBackColor = false;
			this->opBracket->Click += gcnew System::EventHandler(this, &CalculatorForm::opBracket_Click);
			// 
			// clBracket
			// 
			this->clBracket->BackColor = System::Drawing::SystemColors::Control;
			this->clBracket->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clBracket.BackgroundImage")));
			this->clBracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clBracket->Location = System::Drawing::Point(357, 262);
			this->clBracket->Name = L"clBracket";
			this->clBracket->Size = System::Drawing::Size(45, 40);
			this->clBracket->TabIndex = 23;
			this->clBracket->Text = L")";
			this->clBracket->UseVisualStyleBackColor = false;
			this->clBracket->Click += gcnew System::EventHandler(this, &CalculatorForm::clBracket_Click);
			// 
			// answer
			// 
			this->answer->BackColor = System::Drawing::SystemColors::Control;
			this->answer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"answer.BackgroundImage")));
			this->answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->answer->Location = System::Drawing::Point(154, 283);
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(45, 40);
			this->answer->TabIndex = 25;
			this->answer->Text = L"=";
			this->answer->UseVisualStyleBackColor = false;
			this->answer->Click += gcnew System::EventHandler(this, &CalculatorForm::answer_Click);
			// 
			// point
			// 
			this->point->BackColor = System::Drawing::SystemColors::Control;
			this->point->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"point.BackgroundImage")));
			this->point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->point->Location = System::Drawing::Point(255, 262);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(45, 40);
			this->point->TabIndex = 26;
			this->point->Text = L".";
			this->point->UseVisualStyleBackColor = false;
			this->point->Click += gcnew System::EventHandler(this, &CalculatorForm::point_Click);
			// 
			// expForm
			// 
			this->expForm->BackColor = System::Drawing::SystemColors::Control;
			this->expForm->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"expForm.BackgroundImage")));
			this->expForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->expForm->Location = System::Drawing::Point(456, 262);
			this->expForm->Name = L"expForm";
			this->expForm->Size = System::Drawing::Size(45, 40);
			this->expForm->TabIndex = 27;
			this->expForm->Text = L"E";
			this->expForm->UseVisualStyleBackColor = false;
			this->expForm->Click += gcnew System::EventHandler(this, &CalculatorForm::expForm_Click);
			// 
			// power
			// 
			this->power->BackColor = System::Drawing::SystemColors::Control;
			this->power->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"power.BackgroundImage")));
			this->power->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->power->Location = System::Drawing::Point(456, 201);
			this->power->Name = L"power";
			this->power->Size = System::Drawing::Size(45, 40);
			this->power->TabIndex = 28;
			this->power->Text = L"^";
			this->power->UseVisualStyleBackColor = false;
			this->power->Click += gcnew System::EventHandler(this, &CalculatorForm::power_Click);
			// 
			// trPi
			// 
			this->trPi->BackColor = System::Drawing::SystemColors::Control;
			this->trPi->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"trPi.BackgroundImage")));
			this->trPi->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->trPi->Location = System::Drawing::Point(405, 262);
			this->trPi->Name = L"trPi";
			this->trPi->Size = System::Drawing::Size(45, 40);
			this->trPi->TabIndex = 29;
			this->trPi->Text = L"π";
			this->trPi->UseVisualStyleBackColor = false;
			this->trPi->Click += gcnew System::EventHandler(this, &CalculatorForm::trPi_Click);
			// 
			// CalculatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(597, 391);
			this->Controls->Add(this->trPi);
			this->Controls->Add(this->power);
			this->Controls->Add(this->expForm);
			this->Controls->Add(this->point);
			this->Controls->Add(this->answer);
			this->Controls->Add(this->clBracket);
			this->Controls->Add(this->opBracket);
			this->Controls->Add(this->trLog);
			this->Controls->Add(this->trExp);
			this->Controls->Add(this->trCtg);
			this->Controls->Add(this->trTg);
			this->Controls->Add(this->trCos);
			this->Controls->Add(this->trSin);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->num0);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->input);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"CalculatorForm";
			this->Text = L"Engineering Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void num1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "1";
		else
			input->Text += "1";
	}
	private: System::Void num2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "2";
		else
			input->Text += "2";
	}
	private: System::Void num3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "3";
		else
			input->Text += "3";
	}
	private: System::Void num4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "4";
		else
			input->Text += "4";
	}
	private: System::Void num5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "5";
		else
			input->Text += "5";
	}
	private: System::Void num6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "6";
		else
			input->Text += "6";
	}
	private: System::Void num7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "7";
		else
			input->Text += "7";
	}
	private: System::Void num8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "8";
		else
			input->Text += "8";
	}
	private: System::Void num9_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "9";
		else
			input->Text += "9";
	}
	private: System::Void num0_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "0";
		else
			input->Text += "0";
	}
	private: System::Void clear_Click(System::Object^  sender, System::EventArgs^  e) {
		input->Text = "0";
	}
	private: System::Void opBracket_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "(";
		else
			input->Text += "(";
	}
	private: System::Void clBracket_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = ")";
		else
			input->Text += ")";
	}
	private: System::Void plus_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "+";
		else
			input->Text += "+";
	}
	private: System::Void minus_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "-";
		else
			input->Text += "-";
	}
	private: System::Void divide_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text += "/";
		else
			input->Text += "/";
	}
	private: System::Void multiply_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text += "*";
		else
			input->Text += "*";
	}
	private: System::Void trSin_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "sin(";
		else
			input->Text += "sin(";
	}
	private: System::Void trCos_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "cos(";
		else
			input->Text += "cos(";
	}
	private: System::Void trTg_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "tg(";
		else
			input->Text += "tg(";
	}
	private: System::Void trCtg_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "ctg(";
		else
			input->Text += "ctg(";
	}
	private: System::Void trExp_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "exp(";
		else
			input->Text += "exp(";
	}
	private: System::Void trLog_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "log(";
		else
			input->Text += "log(";
	}
	private: System::Void answer_Click(System::Object^  sender, System::EventArgs^  e) {
		input->Text = gcnew System::String(ansI(msclr::interop::marshal_as<std::string>(input->Text)).c_str());
	}
	private: System::Void point_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = ".";
		else
			input->Text += ".";
	}
	private: System::Void expForm_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "E";
		else
			input->Text += "E";
	}
	private: System::Void power_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "^";
		else
			input->Text += "^";
	}
	private: System::Void trPi_Click(System::Object^  sender, System::EventArgs^  e) {
		if (input->Text == "0")
			input->Text = "pi";
		else
			input->Text += "pi";
	}
	};
}