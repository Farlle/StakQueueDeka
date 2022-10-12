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
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(264, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(226, 251);
			this->listBox1->TabIndex = 1;
			// 
			// radioButtonInt
			// 
			this->radioButtonInt->AutoSize = true;
			this->radioButtonInt->Location = System::Drawing::Point(12, 32);
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
			this->radioButtonDouble->Location = System::Drawing::Point(12, 55);
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
			this->radioButtonChar->Location = System::Drawing::Point(12, 78);
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
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Выберите тип данных";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Стек", L"Очередь", L"Дека" });
			this->comboBox1->Location = System::Drawing::Point(580, 28);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(577, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Выберите типа списка";
			// 
			// enter
			// 
			this->enter->Location = System::Drawing::Point(12, 101);
			this->enter->Name = L"enter";
			this->enter->Size = System::Drawing::Size(160, 23);
			this->enter->TabIndex = 8;
			this->enter->Text = L"Добавить";
			this->enter->UseVisualStyleBackColor = true;
			this->enter->Click += gcnew System::EventHandler(this, &MyForm::enter_Click);
			// 
			// empty
			// 
			this->empty->Location = System::Drawing::Point(12, 130);
			this->empty->Name = L"empty";
			this->empty->Size = System::Drawing::Size(160, 23);
			this->empty->TabIndex = 9;
			this->empty->Text = L"Проверка на пустоту";
			this->empty->UseVisualStyleBackColor = true;
			this->empty->Click += gcnew System::EventHandler(this, &MyForm::empty_Click);
			// 
			// viewList
			// 
			this->viewList->Location = System::Drawing::Point(12, 159);
			this->viewList->Name = L"viewList";
			this->viewList->Size = System::Drawing::Size(160, 23);
			this->viewList->TabIndex = 10;
			this->viewList->Text = L"Вывод";
			this->viewList->UseVisualStyleBackColor = true;
			this->viewList->Click += gcnew System::EventHandler(this, &MyForm::viewList_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(178, 104);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(78, 20);
			this->textBox1->TabIndex = 11;
			// 
			// pop
			// 
			this->pop->Location = System::Drawing::Point(12, 188);
			this->pop->Name = L"pop";
			this->pop->Size = System::Drawing::Size(160, 23);
			this->pop->TabIndex = 12;
			this->pop->Text = L"Извлечение из верешины";
			this->pop->UseVisualStyleBackColor = true;
			this->pop->Click += gcnew System::EventHandler(this, &MyForm::pop_Click);
			// 
			// clearNode
			// 
			this->clearNode->Location = System::Drawing::Point(12, 218);
			this->clearNode->Name = L"clearNode";
			this->clearNode->Size = System::Drawing::Size(160, 23);
			this->clearNode->TabIndex = 13;
			this->clearNode->Text = L"Удалить всё";
			this->clearNode->UseVisualStyleBackColor = true;
			this->clearNode->Click += gcnew System::EventHandler(this, &MyForm::clearNode_Click);
			// 
			// addInEnd
			// 
			this->addInEnd->Location = System::Drawing::Point(12, 247);
			this->addInEnd->Name = L"addInEnd";
			this->addInEnd->Size = System::Drawing::Size(160, 23);
			this->addInEnd->TabIndex = 14;
			this->addInEnd->Text = L"Добавить в конец";
			this->addInEnd->UseVisualStyleBackColor = true;
			this->addInEnd->Click += gcnew System::EventHandler(this, &MyForm::addInEnd_Click);
			// 
			// popOnTail
			// 
			this->popOnTail->Location = System::Drawing::Point(12, 276);
			this->popOnTail->Name = L"popOnTail";
			this->popOnTail->Size = System::Drawing::Size(160, 23);
			this->popOnTail->TabIndex = 15;
			this->popOnTail->Text = L"Извлечение из конца";
			this->popOnTail->UseVisualStyleBackColor = true;
			this->popOnTail->Click += gcnew System::EventHandler(this, &MyForm::popOnTail_Click);
			// 
			// clearListBox
			// 
			this->clearListBox->Location = System::Drawing::Point(354, 276);
			this->clearListBox->Name = L"clearListBox";
			this->clearListBox->Size = System::Drawing::Size(75, 23);
			this->clearListBox->TabIndex = 16;
			this->clearListBox->Text = L"Очистка";
			this->clearListBox->UseVisualStyleBackColor = true;
			this->clearListBox->Click += gcnew System::EventHandler(this, &MyForm::clearListBox_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(179, 249);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(79, 20);
			this->textBox2->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(580, 103);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 20);
			this->textBox3->TabIndex = 18;
			this->textBox3->Text = L"5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(577, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Укажите размерность стека";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(820, 339);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->clearListBox);
			this->Controls->Add(this->popOnTail);
			this->Controls->Add(this->addInEnd);
			this->Controls->Add(this->clearNode);
			this->Controls->Add(this->pop);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->viewList);
			this->Controls->Add(this->empty);
			this->Controls->Add(this->enter);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButtonChar);
			this->Controls->Add(this->radioButtonDouble);
			this->Controls->Add(this->radioButtonInt);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"Стек";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
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
};
}
