#pragma once
#include <iostream>

//���� ����� � ������������
template <class T>
struct PriorityStackNode
{
    int priority;
    T value;

    struct PriorityStackNode<T>* next;
};

//���� � ������������
template <class T>
class PriorityStack
{
private:
    PriorityStackNode<T>* top;
    int length;
public:

    PriorityStack()
    {
        top = nullptr;
        length = 0;
    }

    //�������� ������� � ����
    void Push(int priority, T value)
    {
        PriorityStackNode<T>* new_node;
        PriorityStackNode<T>* ptr;

        new_node = new PriorityStackNode<T>;
        new_node->value = value;
        new_node->priority = priority;

        //������������ ������ � ��������
        if (top == nullptr || priority >= top->priority)
        {
            new_node->next = top;
            top = new_node;
        }
        else
        {
            ptr = top;

            while (ptr->next != nullptr)
            {
                //������� ������ ������� ��������������� ����
                if (ptr->next->priority <= priority)
                {
                    break;
                }

                ptr = ptr->next;
            }

            new_node->next = ptr->next;
            ptr->next = new_node;

            length++;
        }
    }

    //����� ������� �� ����� � ������������ �����������
    T Pop()
    {
        PriorityStackNode<T>* ptr;
        if (top == nullptr) 
        {
            _STL_REPORT_ERROR("stack empty before pop");
        }

        ptr = top;

        T ret_value = ptr->value;
        top = top->next;

        length--;

        delete(ptr);
        return ret_value;
    }

    //���������� ������� �� ����� � ������������ �����������, �� ������ ��� �� �����
    T Show()
    {
        return top->value;
    }

    //���������, ������ �� ����
    bool IsEmpty()
    {
        return top == nullptr;
    }

    //������� ������������� �����
    int Length()
    {
        return length;
    }

    //������� ����
    void Clear()
    {
        while (!IsEmpty())
        {
            Pop();
        }
    }

    friend std::ostream& operator<<(std::ostream& output, const PriorityStack<int>& stack)
    {
        PriorityStackNode<T>* ptr;
        ptr = stack.top;

        if (ptr == nullptr)
        {
            output << "Stack is empty!" << std::endl;
        }
        else
        {
            output << "Stack from top:" << std::endl;
            while (ptr != nullptr)
            {
                output << "Priority:"  << ptr->priority << " | " << "Value:" << ptr->value << std::endl;
                ptr = ptr->next;
            }
        }

        output << std::endl;

        return output;
    }
};