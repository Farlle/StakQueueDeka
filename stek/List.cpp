//#include "stdafx.h"
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
	T pop()
	{
		node<T>* tmp = head;
		T key = head->inf;
		head = head->link;
		delete tmp;
		CurrentSize--;
		return key;
	}
	void clear() 
	{
		while (head != nullptr) 
		{
			node<T>* tmp = head;
			head = head->link;
			delete tmp;
		}
		CurrentSize = 0;
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
	node<T> *circleElem = nullptr;
	int CurrentSize = 0;
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
		CurrentSize++;
	}

	void creatCircleQueue(T elem)
	{

		if (circleElem == nullptr)
		{
			circleElem = head;
			circleElem->inf = elem;
			circleElem = circleElem->link;
		}
		else
		{
			circleElem->inf = elem;
			circleElem = circleElem->link;
		}
	}
	
	T pop() 
	{
		node<T>* tmp = head;
		T key = head->inf;
		head = head->link;
		delete tmp;
		CurrentSize--;
		return key;

		
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
		CurrentSize = 0;
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
	node<T> *circleElem = nullptr;
	node<T> *circleElemTail = nullptr;
	int CurrentSize = 0;
	//void clearAll();

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
		CurrentSize++;

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
		CurrentSize++;

	}

	T popHead()
	{
		
		node<T>* tmp = head;
		T key = head->inf;
		head = head->link;
		delete tmp;
		CurrentSize--;
		return key;


	}
	T popTail() {
		T key;
		if (CurrentSize == 1)
		{
			node<T>* tmp = tail;
			 key = tail->inf;
			 clearAll();
			//tail = tail->linkPrev;
		/*	tail->link = nullptr;
			CurrentSize--;

			free(tmp);
			tail->link = nullptr;*/
			//head->link = nullptr;
		}
		else
		{
			node<T>* tmp = tail;
			 key = tail->inf;
			tail = tail->linkPrev;
			tail->link = nullptr;
			head->link = nullptr;
			CurrentSize--;

			delete tmp;
		}
		
		return key;

	}

	void creatCircleDeka(T elem)
	{

		if (circleElem == nullptr)
		{
			circleElem = head;
			circleElem->inf = elem;
			circleElem = circleElem->linkPrev;
		}
		else
		{
			circleElem->inf = elem;
			circleElem = circleElem->linkPrev;
		}
	}

	void creatCircleDekaTail(T elem)
	{
		tail->inf = elem;
	}

	void clearAll()
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
		/*while (CurrentSize = !0)
		{
			popTail();
		}*/
	
		CurrentSize = 0;

	}

};