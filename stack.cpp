#include <iostream>

using namespace std;

template<typename T>
class Stack {
private:
	T* elements;
	int top;
	int size;
	void allocate();

public:
	enum {
		DEFAULTSIZE = 50, EMPTY = -1
	};
	Stack();
	Stack(int size);
	~Stack();
	void push(const T& item);
	void show() const;
	T pop();
	T peek() const;
	bool isEmpty() const;
	bool isFull() const;
	int count() const;
};

template<typename T>
Stack<T>::Stack() {
	size = DEFAULTSIZE;
	allocate();
}

template<typename T>
Stack<T>::Stack(int size) {
	// Exception
	if (size <= 0)
		size = DEFAULTSIZE;

	this->size = size;
	allocate();
}

template<typename T>
Stack<T>::~Stack() {
	delete[] elements;
}

template<typename T>
void Stack<T>::allocate() {
	elements = new T[size];
	top = EMPTY;
}

template<typename T>
void Stack<T>::push(const T& item) {
	if (!isFull())
		elements[++top] = item;
	else
		cout << "Stack is Full" << endl;
}

template<typename T>
void Stack<T>::show() const {
	cout << "elemets: {";
	int i = top;
	while (i > EMPTY) {
		cout << " " << elements[i--];
	}
	cout << " } count: " << count() << endl;
}

template<typename T>
T Stack<T>::pop() {
	if (!isEmpty())
		return elements[top--];
	else
		cout << "Stack is empty" << endl;
}

template<typename T>
T Stack<T>::peek() const {
	if (!isEmpty())
		return elements[top];
	else
		cout << "Stack is empty" << endl;
}

template<typename T>
bool Stack<T>::isEmpty() const {
	return (top == EMPTY);
}

template<typename T>
bool Stack<T>::isFull() const {
	return (count() >= size);
}

template<typename T>
int Stack<T>::count() const {
	return top + 1;
}

template<typename T>
ostream& operator<< (ostream& out, const Stack<T>& stack) {
	stack.show();
	return out;
}

int main(void) {
	Stack<int> stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	cout << stack;
	cout << "Count: " << stack.count() << endl;
	cout << "Top elem: " << stack.peek() << endl;
	cout << "Count: " << stack.count() << endl;
	cout << "Pop: " << stack.pop() << endl;
	cout << "Count: " << stack.count() << endl;
	cout << stack;
}