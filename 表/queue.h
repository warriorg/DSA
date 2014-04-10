#ifndef _List_H

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty(List L);
//测试链表是否为空表
int IsEmpty(List L);
//测试单签位置是否是链表的末尾
int IsLast(Position P, List L);
//
Position Find(ElementType X, List L);
//删除
void Delete(ElementType X, List L);
Position FindPrevious(ElementType X, List L);
void Insert(ElementType X, List L, Position P);
void DeleteList(List L);
Position Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position p);

#endif
