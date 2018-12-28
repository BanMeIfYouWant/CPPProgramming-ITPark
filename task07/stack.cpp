#include <iostream>

class Stack {
	struct Elem {
		int num;
		Elem *p;
	};
	
	Elem *top;
public:
	Stack() {
		top = NULL;
	}

	Stack(const Stack& newStack) {
		std::cout << "Copy constructor activated!\n\n";
		top = new Elem(*newStack.top);
	}

	~Stack() {
		while(top)
			pop();
	}

	void push(int n) {
		Elem *tmp = new Elem;
		tmp->num = n;
		tmp->p = top;
		top = tmp;
	}

	int pop() {
		if(!top) return -1;
		Elem tmp = *top;
		delete top;
		top = tmp.p;
		return tmp.num;
	}

	void operator=(const Stack& newStack) {
		if(this == &newStack) return;
		delete top;
		top = new Elem(*newStack.top);
	}

	void show() {
		if(top) {
			Elem tmp = *top;
			top = tmp.p;
			std::cout << tmp.num;
		} else std::cout << "Stack is empty!" << std::endl;
	}
};

int main() {
	Stack newStack1;
	newStack1.push(20);
	Stack newStack2 = newStack1;
	newStack2 = newStack1;
	newStack1.show();
	std::cout << "\n" << std::endl;
	newStack2.show();
}
