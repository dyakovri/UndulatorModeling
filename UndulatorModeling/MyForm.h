#pragma once

namespace UndulatorModeling {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label_edit_b;
	private: System::Windows::Forms::Label^  label_edit_m;
	private: System::Windows::Forms::Label^  label_edit_q;
	private: System::Windows::Forms::Label^  label_edit_n;
	private: System::Windows::Forms::Label^  label_edit_lu;
	private: System::Windows::Forms::Label^  label_edit_e;
	private: System::Windows::Forms::NumericUpDown^  edit_b;
	private: System::Windows::Forms::NumericUpDown^  edit_m;
	private: System::Windows::Forms::NumericUpDown^  edit_q;
	private: System::Windows::Forms::NumericUpDown^  edit_n;
	private: System::Windows::Forms::NumericUpDown^  edit_lu;
	private: System::Windows::Forms::NumericUpDown^  edit_vx;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;



	private: System::Windows::Forms::NumericUpDown^  edit_l_max;
	private: System::Windows::Forms::NumericUpDown^  edit_y_max;

	private: System::Windows::Forms::Label^  label_edit_l_max;
	private: System::Windows::Forms::Label^  label_edit_y_max;
	private: System::Windows::Forms::Button^  StartBtn;
	private: System::Windows::Forms::Button^  StopBtn;



	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label_edit_b = (gcnew System::Windows::Forms::Label());
			this->label_edit_m = (gcnew System::Windows::Forms::Label());
			this->label_edit_q = (gcnew System::Windows::Forms::Label());
			this->label_edit_n = (gcnew System::Windows::Forms::Label());
			this->label_edit_lu = (gcnew System::Windows::Forms::Label());
			this->label_edit_e = (gcnew System::Windows::Forms::Label());
			this->edit_b = (gcnew System::Windows::Forms::NumericUpDown());
			this->edit_m = (gcnew System::Windows::Forms::NumericUpDown());
			this->edit_q = (gcnew System::Windows::Forms::NumericUpDown());
			this->edit_n = (gcnew System::Windows::Forms::NumericUpDown());
			this->edit_lu = (gcnew System::Windows::Forms::NumericUpDown());
			this->edit_vx = (gcnew System::Windows::Forms::NumericUpDown());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->edit_l_max = (gcnew System::Windows::Forms::NumericUpDown());
			this->edit_y_max = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_edit_l_max = (gcnew System::Windows::Forms::Label());
			this->label_edit_y_max = (gcnew System::Windows::Forms::Label());
			this->StartBtn = (gcnew System::Windows::Forms::Button());
			this->StopBtn = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_b))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_m))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_q))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_n))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_lu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_vx))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_l_max))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_y_max))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 178);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(573, 292);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(12, 476);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(573, 292);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label_edit_b
			// 
			this->label_edit_b->Location = System::Drawing::Point(12, 9);
			this->label_edit_b->Name = L"label_edit_b";
			this->label_edit_b->Size = System::Drawing::Size(50, 20);
			this->label_edit_b->TabIndex = 2;
			this->label_edit_b->Text = L"B:";
			this->label_edit_b->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_edit_m
			// 
			this->label_edit_m->Location = System::Drawing::Point(12, 34);
			this->label_edit_m->Name = L"label_edit_m";
			this->label_edit_m->Size = System::Drawing::Size(50, 20);
			this->label_edit_m->TabIndex = 2;
			this->label_edit_m->Text = L"m:";
			this->label_edit_m->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_edit_q
			// 
			this->label_edit_q->Location = System::Drawing::Point(12, 59);
			this->label_edit_q->Name = L"label_edit_q";
			this->label_edit_q->Size = System::Drawing::Size(50, 20);
			this->label_edit_q->TabIndex = 2;
			this->label_edit_q->Text = L"q:";
			this->label_edit_q->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_edit_n
			// 
			this->label_edit_n->Location = System::Drawing::Point(12, 84);
			this->label_edit_n->Name = L"label_edit_n";
			this->label_edit_n->Size = System::Drawing::Size(50, 20);
			this->label_edit_n->TabIndex = 2;
			this->label_edit_n->Text = L"n:";
			this->label_edit_n->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_edit_lu
			// 
			this->label_edit_lu->Location = System::Drawing::Point(12, 109);
			this->label_edit_lu->Name = L"label_edit_lu";
			this->label_edit_lu->Size = System::Drawing::Size(50, 20);
			this->label_edit_lu->TabIndex = 2;
			this->label_edit_lu->Text = L"λ_u:";
			this->label_edit_lu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_edit_e
			// 
			this->label_edit_e->Location = System::Drawing::Point(12, 134);
			this->label_edit_e->Name = L"label_edit_e";
			this->label_edit_e->Size = System::Drawing::Size(50, 20);
			this->label_edit_e->TabIndex = 2;
			this->label_edit_e->Text = L"V_x:";
			this->label_edit_e->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// edit_b
			// 
			this->edit_b->DecimalPlaces = 2;
			this->edit_b->Location = System::Drawing::Point(68, 11);
			this->edit_b->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->edit_b->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, System::Int32::MinValue });
			this->edit_b->Name = L"edit_b";
			this->edit_b->Size = System::Drawing::Size(81, 20);
			this->edit_b->TabIndex = 3;
			this->edit_b->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			// 
			// edit_m
			// 
			this->edit_m->DecimalPlaces = 2;
			this->edit_m->Location = System::Drawing::Point(68, 36);
			this->edit_m->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->edit_m->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, System::Int32::MinValue });
			this->edit_m->Name = L"edit_m";
			this->edit_m->Size = System::Drawing::Size(81, 20);
			this->edit_m->TabIndex = 3;
			this->edit_m->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 90, 0, 0, 0 });
			// 
			// edit_q
			// 
			this->edit_q->DecimalPlaces = 2;
			this->edit_q->Location = System::Drawing::Point(68, 61);
			this->edit_q->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->edit_q->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, System::Int32::MinValue });
			this->edit_q->Name = L"edit_q";
			this->edit_q->Size = System::Drawing::Size(81, 20);
			this->edit_q->TabIndex = 3;
			this->edit_q->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			// 
			// edit_n
			// 
			this->edit_n->DecimalPlaces = 2;
			this->edit_n->Location = System::Drawing::Point(68, 86);
			this->edit_n->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->edit_n->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, System::Int32::MinValue });
			this->edit_n->Name = L"edit_n";
			this->edit_n->Size = System::Drawing::Size(81, 20);
			this->edit_n->TabIndex = 3;
			this->edit_n->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			// 
			// edit_lu
			// 
			this->edit_lu->DecimalPlaces = 2;
			this->edit_lu->Location = System::Drawing::Point(68, 111);
			this->edit_lu->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->edit_lu->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, System::Int32::MinValue });
			this->edit_lu->Name = L"edit_lu";
			this->edit_lu->Size = System::Drawing::Size(81, 20);
			this->edit_lu->TabIndex = 3;
			this->edit_lu->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			// 
			// edit_vx
			// 
			this->edit_vx->DecimalPlaces = 2;
			this->edit_vx->Location = System::Drawing::Point(68, 136);
			this->edit_vx->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->edit_vx->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, System::Int32::MinValue });
			this->edit_vx->Name = L"edit_vx";
			this->edit_vx->Size = System::Drawing::Size(81, 20);
			this->edit_vx->TabIndex = 3;
			this->edit_vx->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			// 
			// label16
			// 
			this->label16->Location = System::Drawing::Point(155, 134);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(50, 20);
			this->label16->TabIndex = 4;
			this->label16->Text = L"m/s";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->Location = System::Drawing::Point(155, 109);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(50, 20);
			this->label15->TabIndex = 5;
			this->label15->Text = L"m";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label14
			// 
			this->label14->Location = System::Drawing::Point(155, 84);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(50, 20);
			this->label14->TabIndex = 6;
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(155, 59);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 20);
			this->label13->TabIndex = 7;
			this->label13->Text = L"e";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label12
			// 
			this->label12->Location = System::Drawing::Point(155, 34);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 20);
			this->label12->TabIndex = 8;
			this->label12->Text = L"eV";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(155, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(50, 20);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Tl";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// edit_l_max
			// 
			this->edit_l_max->DecimalPlaces = 2;
			this->edit_l_max->Location = System::Drawing::Point(267, 61);
			this->edit_l_max->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->edit_l_max->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, System::Int32::MinValue });
			this->edit_l_max->Name = L"edit_l_max";
			this->edit_l_max->Size = System::Drawing::Size(81, 20);
			this->edit_l_max->TabIndex = 15;
			this->edit_l_max->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// edit_y_max
			// 
			this->edit_y_max->DecimalPlaces = 2;
			this->edit_y_max->Location = System::Drawing::Point(267, 36);
			this->edit_y_max->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->edit_y_max->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, System::Int32::MinValue });
			this->edit_y_max->Name = L"edit_y_max";
			this->edit_y_max->Size = System::Drawing::Size(81, 20);
			this->edit_y_max->TabIndex = 16;
			this->edit_y_max->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label_edit_l_max
			// 
			this->label_edit_l_max->Location = System::Drawing::Point(211, 59);
			this->label_edit_l_max->Name = L"label_edit_l_max";
			this->label_edit_l_max->Size = System::Drawing::Size(50, 20);
			this->label_edit_l_max->TabIndex = 11;
			this->label_edit_l_max->Text = L"λ_max:";
			this->label_edit_l_max->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_edit_y_max
			// 
			this->label_edit_y_max->Location = System::Drawing::Point(211, 34);
			this->label_edit_y_max->Name = L"label_edit_y_max";
			this->label_edit_y_max->Size = System::Drawing::Size(50, 20);
			this->label_edit_y_max->TabIndex = 12;
			this->label_edit_y_max->Text = L"y_max:";
			this->label_edit_y_max->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// StartBtn
			// 
			this->StartBtn->Location = System::Drawing::Point(510, 12);
			this->StartBtn->Name = L"StartBtn";
			this->StartBtn->Size = System::Drawing::Size(75, 23);
			this->StartBtn->TabIndex = 22;
			this->StartBtn->Text = L"Start";
			this->StartBtn->UseVisualStyleBackColor = true;
			this->StartBtn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// StopBtn
			// 
			this->StopBtn->Enabled = false;
			this->StopBtn->Location = System::Drawing::Point(510, 41);
			this->StopBtn->Name = L"StopBtn";
			this->StopBtn->Size = System::Drawing::Size(75, 23);
			this->StopBtn->TabIndex = 23;
			this->StopBtn->Text = L"Stop";
			this->StopBtn->UseVisualStyleBackColor = true;
			this->StopBtn->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(354, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 20);
			this->label1->TabIndex = 24;
			this->label1->Text = L"m";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(354, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 20);
			this->label2->TabIndex = 25;
			this->label2->Text = L"nm";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(597, 780);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->StopBtn);
			this->Controls->Add(this->StartBtn);
			this->Controls->Add(this->edit_l_max);
			this->Controls->Add(this->edit_y_max);
			this->Controls->Add(this->label_edit_l_max);
			this->Controls->Add(this->label_edit_y_max);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->edit_vx);
			this->Controls->Add(this->edit_lu);
			this->Controls->Add(this->edit_n);
			this->Controls->Add(this->edit_q);
			this->Controls->Add(this->edit_m);
			this->Controls->Add(this->edit_b);
			this->Controls->Add(this->label_edit_e);
			this->Controls->Add(this->label_edit_lu);
			this->Controls->Add(this->label_edit_n);
			this->Controls->Add(this->label_edit_q);
			this->Controls->Add(this->label_edit_m);
			this->Controls->Add(this->label_edit_b);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Undulator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_b))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_m))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_q))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_n))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_lu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_vx))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_l_max))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_y_max))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		private:
			Graph ^graph1, ^graph2;
			qParticle *qp;

		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			StartBtn->Enabled = !StartBtn->Enabled;
			StopBtn->Enabled = !StopBtn->Enabled;

			qp = new qParticle(
				(double)edit_m->Value* 1.78E-36,
				(double)edit_q->Value*1.6E-19,
				(double)edit_vx->Value,
				(double)edit_b->Value,
				(double)edit_n->Value,
				(double)edit_lu->Value);

			graph1 = gcnew Graph(pictureBox1);
			graph2 = gcnew Graph(pictureBox2);

			graph1->Setup("X", (double)edit_n->Value * (double)edit_lu->Value, "Y", (double)edit_y_max->Value);
			graph2->Setup("X", (double)edit_n->Value * (double)edit_lu->Value, "L", (double)edit_l_max->Value);

			graph1->MakeGrid();
			graph2->MakeGrid();
			
			timer1->Start();
		}

		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			StartBtn->Enabled = !StartBtn->Enabled;
			StopBtn->Enabled = !StopBtn->Enabled;

			timer1->Stop();
		}

		private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			qp->Step();
			graph1->AddGraphDot(
				qp->get_x(),
				qp->get_y()
			);
		}
	};
}
