#include <iostream>

template <typename T>
class ListItem
{
public:
	ListItem(){}
	T value()const
	{
		return _value;
	}

	ListItem *next()const
	{
		return _next;
	}

	ListItem* _next;
	ListItem* _prev;
	T				  _value;
};



template <typename T>
class List
{
public:
	typedef ListItem<T>* _ListItemPtr;
	List():_MyHead(BuyNode()),_Mysize(0)
	{
		_front = _MyHead->_next;
		_end = _MyHead->_prev;
	};
	
	void insert_front(T value)
	{
		_ListItemPtr p = BuyNode();
		SetValue(p, value);

		_ListItemPtr pt = _front;
		//_front = p;
		p->_next = pt->_next;
		(pt->_next)->_prev = p;
		p->_prev = pt;
		_front = p;
		++_Mysize;
	}

private:
	void SetValue(_ListItemPtr ptr, T value)
	{
			void *p = &((*ptr)._value);
			::new (p) T(value);
	}

	void insert_end(T value);
	ListItem<T>* BuyNode()
	{
		_ListItemPtr p = new ListItem<T>();
		void *vpre = &((*p)._prev);
		void *vnex = &((*p)._next);

		::new (vpre)  _ListItemPtr(p);			//¶¨Î»new
		::new (vnex) _ListItemPtr(p);

		return p;
	}

	ListItem<T>* BuyNode(T value);
private:
	_ListItemPtr _end;
	_ListItemPtr _front;
	_ListItemPtr _MyHead;
	long				   _Mysize;
};

