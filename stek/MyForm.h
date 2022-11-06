#include"List.cpp"
#pragma once

namespace stek {

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
			makeTabel(6);

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

	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::RadioButton^  radioButtonInt;
	private: System::Windows::Forms::RadioButton^  radioButtonDouble;


	private: System::Windows::Forms::RadioButton^  radioButtonChar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  enter;
	private: System::Windows::Forms::Button^  empty;

	private: System::Windows::Forms::Button^  viewList;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  pop;
	private: System::Windows::Forms::Button^  clearNode;
	private: System::Windows::Forms::Button^  addInEnd;
	private: System::Windows::Forms::Button^  popOnTail;
	private: System::Windows::Forms::Button^  clearListBox;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->radioButtonInt = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDouble = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonChar = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->enter = (gcnew System::Windows::Forms::Button());
			this->empty = (gcnew System::Windows::Forms::Button());
			this->viewList = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pop = (gcnew System::Windows::Forms::Button());
			this->clearNode = (gcnew System::Windows::Forms::Button());
			this->addInEnd = (gcnew System::Windows::Forms::Button());
			this->popOnTail = (gcnew System::Windows::Forms::Button());
			this->clearListBox = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(573, 19);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(226, 251);
			this->listBox1->TabIndex = 1;
			// 
			// radioButtonInt
			// 
			this->radioButtonInt->AutoSize = true;
			this->radioButtonInt->Location = System::Drawing::Point(6, 36);
			this->radioButtonInt->Name = L"radioButtonInt";
			this->radioButtonInt->Size = System::Drawing::Size(58, 17);
			this->radioButtonInt->TabIndex = 2;
			this->radioButtonInt->TabStop = true;
			this->radioButtonInt->Text = L"Integer";
			this->radioButtonInt->UseVisualStyleBackColor = true;
			// 
			// radioButtonDouble
			// 
			this->radioButtonDouble->AutoSize = true;
			this->radioButtonDouble->Location = System::Drawing::Point(6, 59);
			this->radioButtonDouble->Name = L"radioButtonDouble";
			this->radioButtonDouble->Size = System::Drawing::Size(57, 17);
			this->radioButtonDouble->TabIndex = 3;
			this->radioButtonDouble->TabStop = true;
			this->radioButtonDouble->Text = L"double";
			this->radioButtonDouble->UseVisualStyleBackColor = true;
			// 
			// radioButtonChar
			// 
			this->radioButtonChar->AutoSize = true;
			this->radioButtonChar->Location = System::Drawing::Point(6, 82);
			this->radioButtonChar->Name = L"radioButtonChar";
			this->radioButtonChar->Size = System::Drawing::Size(46, 17);
			this->radioButtonChar->TabIndex = 4;
			this->radioButtonChar->TabStop = true;
			this->radioButtonChar->Text = L"char";
			this->radioButtonChar->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Выберите тип данных";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Стек", L"Очередь", L"Дека" });
			this->comboBox1->Location = System::Drawing::Point(265, 30);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(262, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Выберите типа структуры";
			// 
			// enter
			// 
			this->enter->Location = System::Drawing::Point(6, 17);
			this->enter->Name = L"enter";
			this->enter->Size = System::Drawing::Size(210, 23);
			this->enter->TabIndex = 8;
			this->enter->Text = L"Добавить";
			this->enter->UseVisualStyleBackColor = true;
			this->enter->Click += gcnew System::EventHandler(this, &MyForm::enter_Click);
			// 
			// empty
			// 
			this->empty->Location = System::Drawing::Point(15, 17);
			this->empty->Name = L"empty";
			this->empty->Size = System::Drawing::Size(210, 23);
			this->empty->TabIndex = 9;
			this->empty->Text = L"Проверка на пустоту";
			this->empty->UseVisualStyleBackColor = true;
			this->empty->Click += gcnew System::EventHandler(this, &MyForm::empty_Click);
			// 
			// viewList
			// 
			this->viewList->Location = System::Drawing::Point(15, 54);
			this->viewList->Name = L"viewList";
			this->viewList->Size = System::Drawing::Size(210, 23);
			this->viewList->TabIndex = 10;
			this->viewList->Text = L"Вывод";
			this->viewList->UseVisualStyleBackColor = true;
			this->viewList->Click += gcnew System::EventHandler(this, &MyForm::viewList_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(244, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(65, 20);
			this->textBox1->TabIndex = 11;
			// 
			// pop
			// 
			this->pop->Location = System::Drawing::Point(15, 22);
			this->pop->Name = L"pop";
			this->pop->Size = System::Drawing::Size(210, 23);
			this->pop->TabIndex = 12;
			this->pop->Text = L"Извлечение из верешины/начала";
			this->pop->UseVisualStyleBackColor = true;
			this->pop->Click += gcnew System::EventHandler(this, &MyForm::pop_Click);
			// 
			// clearNode
			// 
			this->clearNode->Location = System::Drawing::Point(15, 88);
			this->clearNode->Name = L"clearNode";
			this->clearNode->Size = System::Drawing::Size(210, 23);
			this->clearNode->TabIndex = 13;
			this->clearNode->Text = L"Удалить всё";
			this->clearNode->UseVisualStyleBackColor = true;
			this->clearNode->Click += gcnew System::EventHandler(this, &MyForm::clearNode_Click);
			// 
			// addInEnd
			// 
			this->addInEnd->Location = System::Drawing::Point(6, 50);
			this->addInEnd->Name = L"addInEnd";
			this->addInEnd->Size = System::Drawing::Size(210, 23);
			this->addInEnd->TabIndex = 14;
			this->addInEnd->Text = L"Добавить в начало деки";
			this->addInEnd->UseVisualStyleBackColor = true;
			this->addInEnd->Click += gcnew System::EventHandler(this, &MyForm::addInEnd_Click);
			// 
			// popOnTail
			// 
			this->popOnTail->Location = System::Drawing::Point(15, 53);
			this->popOnTail->Name = L"popOnTail";
			this->popOnTail->Size = System::Drawing::Size(210, 23);
			this->popOnTail->TabIndex = 15;
			this->popOnTail->Text = L"Извлечение из конца деки";
			this->popOnTail->UseVisualStyleBackColor = true;
			this->popOnTail->Click += gcnew System::EventHandler(this, &MyForm::popOnTail_Click);
			// 
			// clearListBox
			// 
			this->clearListBox->Location = System::Drawing::Point(15, 122);
			this->clearListBox->Name = L"clearListBox";
			this->clearListBox->Size = System::Drawing::Size(210, 23);
			this->clearListBox->TabIndex = 16;
			this->clearListBox->Text = L"Очистка";
			this->clearListBox->UseVisualStyleBackColor = true;
			this->clearListBox->Click += gcnew System::EventHandler(this, &MyForm::clearListBox_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(242, 50);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(67, 20);
			this->textBox2->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(265, 91);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 20);
			this->textBox3->TabIndex = 18;
			this->textBox3->Text = L"4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(264, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Укажите размерность";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(533, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 22;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(533, 135);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(533, 119);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(533, 106);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 25;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(533, 95);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 26;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(533, 69);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 27;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 23);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Узнать размер структуры";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(555, 258);
			this->tabControl1->TabIndex = 29;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->radioButtonInt);
			this->tabPage1->Controls->Add(this->radioButtonDouble);
			this->tabPage1->Controls->Add(this->radioButtonChar);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(547, 232);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Выбор данных и типа структуры";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->enter);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->addInEnd);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(547, 232);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Добавление элементов";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->pop);
			this->tabPage3->Controls->Add(this->popOnTail);
			this->tabPage3->Controls->Add(this->clearNode);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(547, 232);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Извлечение";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->empty);
			this->tabPage4->Controls->Add(this->button1);
			this->tabPage4->Controls->Add(this->viewList);
			this->tabPage4->Controls->Add(this->clearListBox);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(547, 232);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Вспомогательный функционал";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(820, 339);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"Структура";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void makeTabel(int n)
		{
			 
			
		}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void enter_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void viewList_Click(System::Object^  sender, System::EventArgs^  e);

private: System::Void empty_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void pop_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void clearNode_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void addInEnd_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void popOnTail_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void clearListBox_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
