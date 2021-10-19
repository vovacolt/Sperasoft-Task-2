#include "priopity_stack.h"
#include <typeinfo>

void main()
{
	{
		std::cout << "Test: Is Empty" << std::endl;
		std::cout << "_____________________________" << std::endl << std::endl;

		PriorityStack<int> stack;

		std::cout << (stack.IsEmpty() ? "Stack is empty!" : "Stack isn't empty.") << std::endl << std::endl;

		stack.Push(1, 10);
		std::cout << "Push value: " << stack.Show() << std::endl << std::endl;

		std::cout << (stack.IsEmpty() ? "Stack is empty!" : "Stack isn't empty.") << std::endl << std::endl;

		std::cout << stack;

		std::cout << "_____________________________" << std::endl << std::endl;

		//	ƒо добавлени€ элемента стек пуст.
		//	ѕосле добавлени€ элемента IsEmpty
		//	говорит, что стек не пуст.
		// 
		//	Test: Is Empty
		//	_____________________________
		//
		//	Stack is empty!
		//
		//	Push value : 10
		//
		//	Stack isn't empty.
		//
		//	Stack from top :
		//	Priority:1 | Value : 10
		//
		//_____________________________
	}

	{
		std::cout << "Test: Push" << std::endl;
		std::cout << "_____________________________" << std::endl << std::endl;

		PriorityStack<int> stack;

		stack.Push(1, 10);
		stack.Push(3, 30);
		stack.Push(2, 20);
		stack.Push(5, 40);

		stack.Push(5, 60);
		stack.Push(5, 50);
		stack.Push(3, 35);
		stack.Push(2, 25);

		stack.Push(4, 66);
		stack.Push(4, 77);

		std::cout << stack;

		std::cout << "_____________________________" << std::endl << std::endl;

		//	ѕосле нескольких операций Push,
		//	стек сохран€ет свою структурность,
		//	а приоритетные слои соблюдают принцып LIFO.
		// 
		//	Test: Push
		//	_____________________________
		//
		//	Stack from top :
		//	Priority : 5 | Value : 50
		//	Priority : 5 | Value : 60
		//	Priority : 5 | Value : 40
		//	Priority : 4 | Value : 77
		//	Priority : 4 | Value : 66
		//	Priority : 3 | Value : 35
		//	Priority : 3 | Value : 30
		//	Priority : 2 | Value : 25
		//	Priority : 2 | Value : 20
		//	Priority : 1 | Value : 10
		//
		//	_____________________________
	}

	{
		std::cout << "Test: Pop" << std::endl;
		std::cout << "_____________________________" << std::endl << std::endl;

		PriorityStack<int> stack;

		stack.Push(1, 10);
		stack.Push(3, 30);
		stack.Push(2, 20);
		stack.Push(5, 40);
		stack.Push(5, 60);
		stack.Push(5, 50);

		std::cout << stack;

		std::cout << "Pop from top:" << stack.Pop() << std::endl;
		std::cout << "Pop from top:" << stack.Pop() << std::endl;
		std::cout << "Pop from top:" << stack.Pop() << std::endl << std::endl;

		std::cout << stack;

		std::cout << "_____________________________" << std::endl << std::endl;

		//	ѕосле нескольких операций Pop,
		//	стек сохран€ет свою структурность,
		//	а приоритетные слои соблюдают LIFO.
		// 
		//	Test: Pop
		//	_____________________________
		//
		//	Stack from top :
		//	Priority : 5 | Value : 50
		//	Priority : 5 | Value : 60
		//	Priority : 5 | Value : 40
		//	Priority : 3 | Value : 30
		//	Priority : 2 | Value : 20
		//	Priority : 1 | Value : 10
		//
		//	Pop from top : 50
		//	Pop from top : 60
		//	Pop from top : 40
		//
		//	Stack from top :
		//	Priority : 3 | Value : 30
		//	Priority : 2 | Value : 20
		//	Priority : 1 | Value : 10
		//
		//_____________________________
	}

	{
		std::cout << "Test: Show" << std::endl;
		std::cout << "_____________________________" << std::endl << std::endl;

		PriorityStack<int> stack;

		stack.Push(1, 10);
		stack.Push(3, 30);
		stack.Push(2, 20);
		stack.Push(5, 40);

		std::cout << stack;

		std::cout << "Show top:" << stack.Show() << std::endl << std::endl;

		std::cout << stack;

		std::cout << "_____________________________" << std::endl << std::endl;

		//	ќпераци€ Show только показывает
		//	значение вершины, но
		//	не снимает ее со стека.
		// 
		//	Test: Show
		//	_____________________________
		//
		//	Stack from top :
		//	Priority : 5 | Value : 40
		//	Priority : 3 | Value : 30
		//	Priority : 2 | Value : 20
		//	Priority : 1 | Value : 10
		//
		//	Show top : 40
		//
		//	Stack from top :
		//	Priority : 5 | Value : 40
		//	Priority : 3 | Value : 30
		//	Priority : 2 | Value : 20
		//	Priority : 1 | Value : 10
		//
		//_____________________________
	}

	{
		std::cout << "Test: Clear" << std::endl;
		std::cout << "_____________________________" << std::endl << std::endl;

		PriorityStack<int> stack;

		stack.Push(1, 10);
		stack.Push(3, 30);
		stack.Push(2, 20);
		stack.Push(5, 40);

		std::cout << stack;

		std::cout << "Clear stack..." << std::endl << std::endl;

		stack.Clear();

		std::cout << stack;

		std::cout << "_____________________________" << std::endl << std::endl;

		//	ѕосле очистки, стек пуст.
		// 
		//	Test: Clear
		//	_____________________________
		//
		//	Stack from top :
		//	Priority : 5 | Value : 40
		//	Priority : 3 | Value : 30
		//	Priority : 2 | Value : 20
		//	Priority : 1 | Value : 10
		//
		//	Clear stack...
		//
		//	Stack is empty!
		//
		//_____________________________
	}
}