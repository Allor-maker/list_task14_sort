#include "list.h"
#include <chrono>

void List::sort_list() 
{
    auto start = std::chrono::high_resolution_clock::now(); 

    if (!first || !first->Next) return;
    first = merge_sort(first, nullptr);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Time for sorting: " << duration.count() << std::endl;

}

List::Node* List::merge_sort(Node* start, Node* end)
{
    
    if ( start->Next == end) return start;

    Node* mid = get_mid(start, end);
    Node* next_mid = mid->Next;
    mid->Next = end;

    Node* left = merge_sort(start, mid->Next);
    Node* right = merge_sort(next_mid, end);
    return merge(left,right);

}
List::Node* List::get_mid(Node* start, Node* end)
{
    
    if (start->Next->Next==end) return start;
    Node* curr1 = start;
    Node* curr2 = start;

    while (curr2 != end && curr2->Next!= end)
    {
        curr1 = curr1->Next;
        curr2 = curr2->Next->Next;
    }
    return curr1;
}
List::Node* List::merge(Node* left, Node* right)
{
    
    if (!left) return right;
    if (!right) return left;
    if (left->value <= right->value)
    {
        left->Next = merge(left->Next, right);
        return left;
    }
    else
    {
        right->Next = merge(left, right->Next);
        return right;
    }
}
