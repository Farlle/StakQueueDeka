#include<iostream>;

template<typename T>
class MyStack
{
public:
	template<typename T>
	struct node
	{
		T inf;
		node * link;
	};
	int CurrentSize = 0;
	node<T> *head = nullptr;
	node<T> *current = head;
	bool isEmpty()
	{
		if (head == nullptr)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	bool isEmptyForCurrent()
	{
		if (current == nullptr)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

public: void push(T elem)
	{
		node<T>* tmp = new node<T>;
		tmp->link = head;
		head = tmp;
		head->inf = elem;
		CurrentSize++;
	}
	void pop()
	{
		node<T>* tmp = head;
		head = head->link;
		delete tmp;
		CurrentSize--;
	}
	void clear() 
	{
		while (head != nullptr) 
		{
			node<T>* tmp = head;
			head = head->link;
			delete tmp;
		}
	//	CurrentSize = 0;
	}
};

template<typename T>
class MyQueue 
{
public:
	template<typename T>
	struct node
	{
		T inf;
		node* link;
		node* linkPrev;
	};
	node<T> *head = nullptr;
	node<T> *tail = nullptr;
	node<T> *current = head;
	//int CurrentSize = 0;
	bool isEmpty()
	{
		if (head == nullptr)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	bool isEmptyForCurrent()
	{
		if (current == nullptr)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	void push(T elem) 
	{
		if (!isEmpty()) 
		{
			node<T>* tmp = new node<T>;
			tmp->inf = elem;
			tmp->link = head;
			head = tmp;
			head->link = NULL;
			tail = head;
		}
		else
		{			
			node<T>* tmp = new node<T>;
			tmp->inf = elem;
			tmp->link = nullptr;
			tail->link = tmp;
			tail = tmp;
			
		}
		//CurrentSize++;
	}

	/*void creatCircleQueue(T elem)
	{
		head->inf = elem;
	}*/
	
	void pop() 
	{
		node<T>* tmp = head;
		head = head->link;
		delete tmp;
		//CurrentSize--;
	}
	void clear()
	{
		while (head != nullptr)
		{
			node<T>* tmp = head;
			head = head->link;
			delete tmp;
		}
		node<T> *head = new node<T>;
		node<T> *tail = new node<T>;
		node<T> *current = head;

		tail = nullptr;
		head = nullptr;
		//CurrentSize = 0;
	}
};




template<typename T>
class MyDeka
{
public:
	template<typename T>
	struct node
	{
		T inf;
		node* link;
		node* linkPrev;
	};
	node<T>* head = nullptr;
	node<T>* tail = nullptr;
	node<T> *current = head;
	bool isEmpty()
	{
		if (head == nullptr)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	bool isEmptyForCurrent()
	{
		if (current == nullptr)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	void pushHead(T elem) {
		if (tail == nullptr && head == nullptr) 
		{
			node<T>* tmp = new node<T>;
			head = tmp;
			tail = tmp;
			head->link = nullptr;
			head->linkPrev = nullptr;
			tail->link = nullptr;
			tail->linkPrev = nullptr;
		}
		else 
		{
			node<T>* tmp = new node<T>;
			tmp->linkPrev = tail;
			tmp->link = nullptr;
			tail->link = tmp;
			tail = tmp;
		}
		tail->inf = elem;
	}

	void pushTail(T elem) {
		if (tail == nullptr && head == nullptr) {
			node<T>* tmp = new node<T>;
			head = tmp;
			tail = tmp;
			head->link = nullptr;
			head->linkPrev = nullptr;
			tail->link = nullptr;
			tail->linkPrev = nullptr;
		}
		else {
			node<T>* tmp = new node<T>;
			tmp->link = head;
			tmp->linkPrev = nullptr;
			head->linkPrev = tmp;
			head = tmp;
		}
		head->inf = elem;
		
	}

	void popHead()
	{
		node<T>* tmp = head;
		head = head->link;
		delete tmp;
	}
	void popTail() {
		node<T>* tmp = tail;
		tail = tail->linkPrev;
		tail->link = nullptr;
		delete tmp;
	}

	void clear()
	{
		while (head != nullptr)
		{
			node<T>* tmp = head;
			head = head->link;
			if (tmp != nullptr) 
			{
				free(tmp);
			}
		}
		tail = nullptr;
	}

};