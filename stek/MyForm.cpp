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

static int sizeMax;


//node<int> *stakInt = new node<int>;
System::Void stek::MyForm::enter_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 0)
	{
		sizeMax = Convert::ToInt32(textBox3->Text);

		if ((stakInt.CurrentSize == sizeMax)||(stakDouble.CurrentSize == sizeMax)||(stakChar.CurrentSize == sizeMax))
		{
			MessageBox::Show("Стек переполнен \n Размерность будет увеличена", "Проверка");
			sizeMax ++;
		}
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
		this->pop->Text = "Извлечь из начала";

		sizeMax = Convert::ToInt32(textBox3->Text);
		
		//this->pop_Click->Text("ad;lakl;ds;lkad");
		if ((queInt.CurrentSize == sizeMax) || (queDouble.CurrentSize == sizeMax) || (queChar.CurrentSize == sizeMax))
		{
			if (queInt.CurrentSize == sizeMax)
			{
				MessageBox::Show(" Очередь переполнена \n Будет создана циклическая", "Проверка");
				int key = Convert::ToInt32(textBox1->Text);
				queInt.creatCircleQueue(key);
				sizeMax++;
			}
			if (queDouble.CurrentSize == sizeMax)
			{
				MessageBox::Show(" Очередь переполнена \n Будет создана циклическая", "Проверка");
				double key = Convert::ToDouble(textBox1->Text);
				queDouble.creatCircleQueue(key);
				sizeMax++;
			}
			if (queChar.CurrentSize == sizeMax)
			{
				MessageBox::Show(" Очередь переполнена \n Будет создана циклическая", "Проверка");
				char key = Convert::ToChar(textBox1->Text);
				queChar.creatCircleQueue(key);
				sizeMax++;
			}
			
		}
		else
		{


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
	}
	if (comboBox1->SelectedIndex == 2)
	{
		this->pop->Text = "Извлечь из начала";
		
		sizeMax = Convert::ToInt32(textBox3->Text);

		if ((dekaInt.CurrentSize == sizeMax) || (dekaDouble.CurrentSize == sizeMax) || (dekaChar.CurrentSize == sizeMax))
		{
			if (radioButtonInt->Checked == true)
			{
				MessageBox::Show(" Дек переполнен \n Будет создан циклический", "Проверка");
				int key = Convert::ToInt32(textBox1->Text);
				dekaInt.creatCircleDekaTail(key);
			}
			if (radioButtonDouble->Checked == true)
			{
				MessageBox::Show(" Дек переполнен \n Будет создан циклический", "Проверка");
				double key = Convert::ToDouble(textBox1->Text);
				dekaDouble.creatCircleDekaTail(key);
			}
			if (radioButtonChar->Checked == true)
			{
				MessageBox::Show(" Дек переполнен \n Будет создан циклический", "Проверка");
				char key = Convert::ToChar(textBox1->Text);
				dekaChar.creatCircleDekaTail(key);
			}

		}
		else
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
}

System::Void stek::MyForm::viewList_Click(System::Object ^ sender, System::EventArgs ^ e)
{
//	listBox1->Items->Add("Список:");
	if (comboBox1->SelectedIndex == 0)
	{
		listBox1->Items->Add("Стек:");
		listBox1->Items->Add("Вершина:");
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
		listBox1->Items->Add("Очередь:");
		listBox1->Items->Add("Начало");
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
		listBox1->Items->Add("Конец");
	}
	if (comboBox1->SelectedIndex == 2)
	{
		listBox1->Items->Add("Дек:");
		listBox1->Items->Add("Начало:");
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
		listBox1->Items->Add("Конец:");
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
				MessageBox::Show("Стек не пуст", "Проверка");
			}
			else
			{
				MessageBox::Show("Стек  пуст", "Проверка");

			}
		}
		if (radioButtonDouble->Checked == true)
		{
			if (stakDouble.isEmpty() == true)
			{
				MessageBox::Show("Стек не пуст", "Проверка");
			}
			else
			{
				MessageBox::Show("Стек  пуст", "Проверка");

			}
		}
		if (radioButtonChar->Checked == true)
		{
			if (stakChar.isEmpty() == true)
			{
				MessageBox::Show("Стек не пуст", "Проверка");
			}
			else
			{
				MessageBox::Show("Стек  пуст", "Проверка");

			}
		}
	}
	if (comboBox1->SelectedIndex == 1)
	{
		if (radioButtonInt->Checked == true)
		{
			if (queInt.isEmpty() == true)
			{
				MessageBox::Show("Очередь не пуста", "Проверка");
			}
			else
			{
				MessageBox::Show("Очередь  пуста", "Проверка");

			}
		}
		if (radioButtonDouble->Checked == true)
		{
			if (queDouble.isEmpty() == true)
			{
				MessageBox::Show("Очередь не пуста", "Проверка");
			}
			else
			{
				MessageBox::Show("Очередь  пуста", "Проверка");

			}
		}
		if (radioButtonChar->Checked == true)
		{
			if (queChar.isEmpty() == true)
			{
				MessageBox::Show("Очередь не пуста", "Проверка");
			}
			else
			{
				MessageBox::Show("Очередь  пуста", "Проверка");

			}
		}
	}
	if (comboBox1->SelectedIndex == 2)
	{
		if (radioButtonInt->Checked == true)
		{
			if (dekaInt.isEmpty() == true)
			{
				MessageBox::Show("Дек не пуст", "Проверка");
			}
			else
			{
				MessageBox::Show("Дек  пуст", "Проверка");

			}
		}
		if (radioButtonDouble->Checked == true)
		{
			if (dekaDouble.isEmpty() == true)
			{
				MessageBox::Show("Дек не пуст", "Проверка");
			}
			else
			{
				MessageBox::Show("Дек  пуст", "Проверка");

			}
		}
		if (radioButtonChar->Checked == true)
		{
			if (dekaChar.isEmpty() == true)
			{
				MessageBox::Show("Дек не пуст", "Проверка");
			}
			else
			{
				MessageBox::Show("Дек  пуст", "Проверка");

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
			if (stakInt.isEmpty() == true)
			{
				int k = stakInt.pop();
				listBox1->Items->Add("Извлеченный элемент:");
				listBox1->Items->Add(k);
			}
			else 
			{
				MessageBox::Show("Стек пуст!", "Проверка");
			}
			//MessageBox::Show(" Очередь переполнена \n Будет создана циклическая", "Проверка", k);
		}
		if (radioButtonDouble->Checked == true)
		{
			if (stakDouble.isEmpty() == true)
			{
				double k = stakDouble.pop();
				listBox1->Items->Add("Извлеченный элемент:");
				listBox1->Items->Add(k);
			}
			else
			{
				MessageBox::Show("Стек пуст!", "Проверка");
			}
		}
		if (radioButtonChar->Checked == true)
		{
			if (stakChar.isEmpty() == true)
			{
				char k = stakChar.pop();
				String^ key = marshal_as<String^>(&k);
				listBox1->Items->Add("Извлеченный элемент:");
				listBox1->Items->Add(key);
			}
			else
			{
				MessageBox::Show("Стек пуст!", "Проверка");

			}
		}
	}
	if (comboBox1->SelectedIndex == 1)
	{

		if (radioButtonInt->Checked == true)
		{
			if (queInt.isEmpty() == true)
			{
				int k = queInt.pop();
				listBox1->Items->Add("Извлеченный элемент:");
				listBox1->Items->Add(k);
			}
			else
			{
				MessageBox::Show("Очередь пуста!", "Проверка");
			}
		}
		if (radioButtonDouble->Checked == true)
		{
			if (queDouble.isEmpty() == true)
			{
				double k = queDouble.pop();
				listBox1->Items->Add("Извлеченный элемент:");
				listBox1->Items->Add(k);
			}
			else
			{
				MessageBox::Show("Очередь пуста!", "Проверка");
			}
		}
		if (radioButtonChar->Checked == true)
		{
			if (queChar.isEmpty() == true)
			{
				char k = queChar.pop();
				String^ key = marshal_as<String^>(&k);
				listBox1->Items->Add("Извлеченный элемент:");
				listBox1->Items->Add(key);
			}
			else
			{
				MessageBox::Show("Очередь пуста!", "Проверка");
			}
		}
	}
	if (comboBox1->SelectedIndex == 2)
	{
		if (radioButtonInt->Checked == true)
		{
			if (dekaInt.isEmpty() == true)
			{
				
				int k = dekaInt.popHead();
				listBox1->Items->Add("Извлеченный элемент из начала:");
				listBox1->Items->Add(k);
				if (dekaInt.CurrentSize == 0)
				{
					dekaInt.clearAll();
				}
			}
			else
			{
				MessageBox::Show("Дек пуста!", "Проверка");
			}
			
		}
		if (radioButtonDouble->Checked == true)
		{
			if (dekaDouble.isEmpty() == true)
			{
				double k = dekaDouble.popHead();
				listBox1->Items->Add("Извлеченный элемент из начала:");
				listBox1->Items->Add(k);
				if (dekaDouble.CurrentSize == 1)
				{
					dekaDouble.clearAll();
				}
			}
			else
			{
				MessageBox::Show("Дек пуста!", "Проверка");
			}
		}
		if (radioButtonChar->Checked == true)
		{
			if (dekaChar.isEmpty() == true)
			{
				char k = dekaChar.popHead();
				String^ key = marshal_as<String^>(&k);
				listBox1->Items->Add("Извлеченный элемент из начала:");
				listBox1->Items->Add(key);
				if (dekaChar.CurrentSize == 1)
				{
					dekaChar.clearAll();
				}
			}
			else
			{
				MessageBox::Show("Дек пуста!", "Проверка");
			}
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
			dekaInt.clearAll();
		}
		if (radioButtonDouble->Checked == true)
		{
			dekaDouble.clearAll();
		}
		if (radioButtonChar->Checked == true)
		{
			dekaChar.clearAll();
		}
	}

}

System::Void stek::MyForm::addInEnd_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 2)
	{
		sizeMax = Convert::ToInt32(textBox3->Text);

		if ((dekaInt.CurrentSize == sizeMax) || (dekaDouble.CurrentSize == sizeMax) || (dekaChar.CurrentSize == sizeMax))
		{
			if (radioButtonInt->Checked == true)
			{
				MessageBox::Show(" Дек переполнен \n Будет создан циклический", "Проверка ");
				int key = Convert::ToInt32(textBox2->Text);
				dekaInt.creatCircleDeka(key);
			}
			if (radioButtonDouble->Checked == true)
			{
				MessageBox::Show(" Дек переполнен \n Будет создан циклический", "Проверка ");
				double key = Convert::ToDouble(textBox2->Text);
				dekaDouble.creatCircleDeka(key);
			}
			if (radioButtonChar->Checked == true)
			{
				MessageBox::Show(" Дек переполнен \n Будет создан циклический", "Проверка ");
				char key = Convert::ToChar(textBox2->Text);
				dekaChar.creatCircleDeka(key);
			}
		}
		else
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
}

System::Void stek::MyForm::popOnTail_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 2)
	{
	
		if (radioButtonInt->Checked == true)
		{
			if (dekaInt.CurrentSize!=0)
			{
				int k = dekaInt.popTail();
				listBox1->Items->Add("Извлеченный элемент из конца:");
				listBox1->Items->Add(k);
			}
			else
			{
				MessageBox::Show("Дек пуст");
			}
			
		}
		if (radioButtonDouble->Checked == true)
		{
			if (dekaDouble.CurrentSize != 0)
			{
				double k = dekaDouble.popTail();
				listBox1->Items->Add("Извлеченный элемент из конца:");
				listBox1->Items->Add(k);
			}
			else
			{
				MessageBox::Show("Дек пуст");
			}
			
		}
		if (radioButtonChar->Checked == true)
		{
			if (dekaChar.CurrentSize != 0)
			{
				char k = dekaChar.popTail();
				String^ key = marshal_as<String^>(&k);
				listBox1->Items->Add("Извлеченный элемент из конца:");
				listBox1->Items->Add(key);
			}
			else
			{
				MessageBox::Show("Дек пуст");
			}
			
		}
	}
}

System::Void stek::MyForm::clearListBox_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	listBox1->Items->Clear();
}

System::Void stek::MyForm::button1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if (comboBox1->SelectedIndex == 0)
	{
		
		if (radioButtonInt->Checked == true)
		{
		//	listBox1->add stakInt.CurrentSize
			listBox1->Items->Add("Размер = " + stakInt.CurrentSize);

		}
		if (radioButtonDouble->Checked == true)
		{
			listBox1->Items->Add("Размер = " + stakDouble.CurrentSize);
		}
		if (radioButtonChar->Checked == true)
		{
			listBox1->Items->Add("Размер = " + stakChar.CurrentSize);
		}
	}
	if (comboBox1->SelectedIndex == 1)
	{
		
		if (radioButtonInt->Checked == true)
		{
			listBox1->Items->Add("Размер = " + queInt.CurrentSize);
		}
		if (radioButtonDouble->Checked == true)
		{
			listBox1->Items->Add("Размер = " + queDouble.CurrentSize);

		}
		if (radioButtonChar->Checked == true)
		{
			listBox1->Items->Add("Размер = " + queChar.CurrentSize);
		}

	}
	if (comboBox1->SelectedIndex == 2)
	{
		
		if (radioButtonInt->Checked == true)
		{
			listBox1->Items->Add("Размер = " + dekaInt.CurrentSize);
		}
		if (radioButtonDouble->Checked == true)
		{
			listBox1->Items->Add("Размер = " + dekaDouble.CurrentSize);
		}
		if (radioButtonChar->Checked == true)
		{
			listBox1->Items->Add("Размер = " + dekaChar.CurrentSize);
		}
	}


}
