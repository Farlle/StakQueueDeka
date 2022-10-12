#include "MyForm.h"
#include "msclr\marshal_cppstd.h"
using namespace msclr::interop;
MyStack<int> stakInt;
MyStack<double> stakDouble;
MyStack<char> stakChar;

MyQueue<int> queInt;
MyQueue<double> queDouble;
MyQueue<char> queChar;

MyDeka<int> dekaInt;
MyDeka<double> dekaDouble;
MyDeka<char> dekaChar;
//static int sizeMax;


//node<int> *stakInt = new node<int>;
System::Void stek::MyForm::enter_Click(System::Object ^ sender, System::EventArgs ^ e)
{

	if (comboBox1->SelectedIndex == 0)
	{
	/*	sizeMax = Convert::ToInt32(textBox3->Text);

		if ((stakInt.CurrentSize == sizeMax)||(stakDouble.CurrentSize == sizeMax)||(stakChar.CurrentSize == sizeMax))
		{
			MessageBox::Show("Стек переполнен \n Размерность будет увеличена", "Проверка");
			sizeMax ++;
		}*/
		if (radioButtonInt->Checked == true)
		{
			int key = Convert::ToInt32(textBox1->Text);
			stakInt.push(key);
		}
		if (radioButtonDouble->Checked == true)
		{
			double key = Convert::ToDouble(textBox1->Text);
			stakDouble.push(key);
		}
		if (radioButtonChar->Checked == true)
		{
			char key = Convert::ToChar(textBox1->Text);
			stakChar.push(key);

		}
	}
	if (comboBox1->SelectedIndex == 1)
	{
		//sizeMax = Convert::ToInt32(textBox3->Text);

		/*if ((queInt.CurrentSize == sizeMax) || (queDouble.CurrentSize == sizeMax) || (queChar.CurrentSize == sizeMax))
		{
			MessageBox::Show("Стек переполнен \n Размерность будет увеличена", "Проверка");
			sizeMax++;
			
		}*/
		if (radioButtonInt->Checked == true)
		{
			int key = Convert::ToInt32(textBox1->Text);
			queInt.push(key);
		}
		if (radioButtonDouble->Checked == true)
		{
			double key = Convert::ToDouble(textBox1->Text);
			queDouble.push(key);
		}
		if (radioButtonChar->Checked == true)
		{
			char key = Convert::ToChar(textBox1->Text);
			queChar.push(key);
		}
	}
	if (comboBox1->SelectedIndex == 2)
	{
		
		if (radioButtonInt->Checked == true)
		{
			int key = Convert::ToInt32(textBox1->Text);
			dekaInt.pushHead(key);
		}
		if (radioButtonDouble->Checked == true)
		{
			double key = Convert::ToDouble(textBox1->Text);
			dekaDouble.pushHead(key);
		}
		if (radioButtonChar->Checked == true)
		{
			char key = Convert::ToChar(textBox1->Text);
			dekaChar.pushHead(key);
		}
	}
}

System::Void stek::MyForm::viewList_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	listBox1->Items->Add("Список:");
	if (comboBox1->SelectedIndex == 0)
	{
		if (radioButtonInt->Checked == true)
		{
			stakInt.current = stakInt.head;
			while (stakInt.isEmptyForCurrent())
			{
				int key = stakInt.current->inf;
				stakInt.current = stakInt.current->link;
				listBox1->Items->Add(key);
			}
			stakInt.current = stakInt.head;

		}
		if (radioButtonDouble->Checked == true)
		{
			stakDouble.current = stakDouble.head;
			while (stakDouble.isEmptyForCurrent())
			{
				double key = stakDouble.current->inf;
				stakDouble.current = stakDouble.current->link;
				listBox1->Items->Add(key);
			}
			stakDouble.current = stakDouble.head;
		}
		if (radioButtonChar->Checked == true)
		{
			stakChar.current = stakChar.head;
			while (stakChar.isEmptyForCurrent())
			{
				char key = stakChar.current->inf;
				String^ k = marshal_as<String^>(&key);
				stakChar.current = stakChar.current->link;
				listBox1->Items->Add(k);
			}
			stakChar.current = stakChar.head;
		}

	}
	if (comboBox1->SelectedIndex == 1)
	{
		if (radioButtonInt->Checked == true)
		{
		queInt.current = queInt.head;
		while (queInt.isEmptyForCurrent())
		{
			int key = queInt.current->inf;
			queInt.current = queInt.current->link;
			listBox1->Items->Add(key);
		}
		queInt.current = queInt.head;
		}
		if (radioButtonDouble->Checked == true)
		{
			queDouble.current = queDouble.head;
			while (queDouble.isEmptyForCurrent())
			{
				double key = queDouble.current->inf;
				queDouble.current = queDouble.current->link;
				listBox1->Items->Add(key);
			}
			queDouble.current = queDouble.head;
		}
		if (radioButtonChar->Checked == true)
		{
			queChar.current = queChar.head;
			while (queChar.isEmptyForCurrent())
			{
				char key = queChar.current->inf;
				String^ k = marshal_as<String^>(&key);
				queChar.current = queChar.current->link;
				listBox1->Items->Add(k);
			}
			queChar.current = queChar.head;
		}
	}
	if (comboBox1->SelectedIndex == 2)
	{
		if (radioButtonInt->Checked == true)
		{
			dekaInt.current = dekaInt.head;
			while (dekaInt.isEmptyForCurrent())
			{
				int key = dekaInt.current->inf;
				dekaInt.current = dekaInt.current->link;
				listBox1->Items->Add(key);
			}
			dekaInt.current = dekaInt.head;
		}
		if (radioButtonDouble->Checked == true)
		{
			dekaDouble.current = dekaDouble.head;
			while (dekaDouble.isEmptyForCurrent())
			{
				double key = queDouble.current->inf;
				dekaDouble.current = dekaDouble.current->link;
				listBox1->Items->Add(key);
			}
			dekaDouble.current = dekaDouble.head;
		}
		if (radioButtonChar->Checked == true)
		{
			dekaChar.current = dekaChar.head;
			while (dekaChar.isEmptyForCurrent())
			{
				char key = dekaChar.current->inf;
				String^ k = marshal_as<String^>(&key);
				dekaChar.current = dekaChar.current->link;
				listBox1->Items->Add(k);
			}
			dekaChar.current = dekaChar.head;
		}
	}

}

System::Void stek::MyForm::empty_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 0)
	{
		if (radioButtonInt->Checked == true)
		{
			if (stakInt.isEmpty() == true)
			{
				MessageBox::Show("Список не пуст", "Проверка");
			}
			else
			{
				MessageBox::Show("Список  пуст", "Проверка");

			}
		}
		if (radioButtonDouble->Checked == true)
		{
			if (stakDouble.isEmpty() == true)
			{
				MessageBox::Show("Список не пуст", "Проверка");
			}
			else
			{
				MessageBox::Show("Список  пуст", "Проверка");

			}
		}
		if (radioButtonChar->Checked == true)
		{
			if (stakChar.isEmpty() == true)
			{
				MessageBox::Show("Список не пуст", "Проверка");
			}
			else
			{
				MessageBox::Show("Список  пуст", "Проверка");

			}
		}
	}
	if (comboBox1->SelectedIndex == 1)
	{
		if (radioButtonInt->Checked == true)
		{
			if (queInt.isEmpty() == true)
			{
				MessageBox::Show("Список не пуст", "Проверка");
			}
			else
			{
				MessageBox::Show("Список  пуст", "Проверка");

			}
		}
		if (radioButtonDouble->Checked == true)
		{
			if (queDouble.isEmpty() == true)
			{
				MessageBox::Show("Список не пуст", "Проверка");
			}
			else
			{
				MessageBox::Show("Список  пуст", "Проверка");

			}
		}
		if (radioButtonChar->Checked == true)
		{
			if (queChar.isEmpty() == true)
			{
				MessageBox::Show("Список не пуст", "Проверка");
			}
			else
			{
				MessageBox::Show("Список  пуст", "Проверка");

			}
		}
	}
	if (comboBox1->SelectedIndex == 2)
	{
		if (radioButtonInt->Checked == true)
		{
			if (dekaInt.isEmpty() == true)
			{
				MessageBox::Show("Список не пуст", "Проверка");
			}
			else
			{
				MessageBox::Show("Список  пуст", "Проверка");

			}
		}
		if (radioButtonDouble->Checked == true)
		{
			if (dekaDouble.isEmpty() == true)
			{
				MessageBox::Show("Список не пуст", "Проверка");
			}
			else
			{
				MessageBox::Show("Список  пуст", "Проверка");

			}
		}
		if (radioButtonChar->Checked == true)
		{
			if (dekaChar.isEmpty() == true)
			{
				MessageBox::Show("Список не пуст", "Проверка");
			}
			else
			{
				MessageBox::Show("Список  пуст", "Проверка");

			}
		}
	}
}

System::Void stek::MyForm::pop_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 0)
	{
		if (radioButtonInt->Checked == true)
		{
			stakInt.pop();

		}
		if (radioButtonDouble->Checked == true)
		{
			stakDouble.pop();
		}
		if (radioButtonChar->Checked == true)
		{
			stakChar.pop();
		}
	}
	if (comboBox1->SelectedIndex == 1)
	{

		if (radioButtonInt->Checked == true)
		{
			queInt.pop();
		}
		if (radioButtonDouble->Checked == true)
		{
			queDouble.pop();
		}
		if (radioButtonChar->Checked == true)
		{
			queChar.pop();
		}
	}
	if (comboBox1->SelectedIndex == 2)
	{

		if (radioButtonInt->Checked == true)
		{
			dekaInt.popHead();
		}
		if (radioButtonDouble->Checked == true)
		{
			dekaDouble.popHead();
		}
		if (radioButtonChar->Checked == true)
		{
			dekaChar.popHead();
		}
	}
}

System::Void stek::MyForm::clearNode_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 0)
	{
		if (radioButtonInt->Checked == true)
		{
			
			stakInt.clear();
		}
		if (radioButtonDouble->Checked == true)
		{
			stakDouble.clear();
		}
		if (radioButtonChar->Checked == true)
		{
			stakChar.clear();
		}
	}
	if (comboBox1->SelectedIndex == 1)
	{
		if (radioButtonInt->Checked == true)
		{
			while (queInt.isEmpty())
			{
				queInt.pop();
			}
			
			//queInt.clear();
		}
		if (radioButtonDouble->Checked == true)
		{
			queDouble.clear();
		}
		if (radioButtonChar->Checked == true)
		{
			queChar.clear();
		}
	}
	if (comboBox1->SelectedIndex == 2)
	{
		if (radioButtonInt->Checked == true)
		{
			dekaInt.clear();
		}
		if (radioButtonDouble->Checked == true)
		{
			dekaDouble.clear();
		}
		if (radioButtonChar->Checked == true)
		{
			dekaChar.clear();
		}
	}

}

System::Void stek::MyForm::addInEnd_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 2)
	{
		if (radioButtonInt->Checked == true)
		{
			int key = Convert::ToInt32(textBox2->Text);
			dekaInt.pushTail(key);
		}
		if (radioButtonDouble->Checked == true)
		{
			double key = Convert::ToDouble(textBox2->Text);
			dekaDouble.pushTail(key);
		}
		if (radioButtonChar->Checked == true)
		{
			char key = Convert::ToChar(textBox2->Text);
			dekaChar.pushTail(key);
		}
	}
}

System::Void stek::MyForm::popOnTail_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 2)
	{

		if (radioButtonInt->Checked == true)
		{
			dekaInt.popTail();
		}
		if (radioButtonDouble->Checked == true)
		{
			dekaDouble.popTail();
		}
		if (radioButtonChar->Checked == true)
		{
			dekaChar.popTail();
		}
	}
}

System::Void stek::MyForm::clearListBox_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	listBox1->Items->Clear();
}
