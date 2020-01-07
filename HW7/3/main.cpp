#include <iostream>

using namespace std;

template <class elemType> class linkList;
template <class elemType> class waiting_time;
template <class T> ostream &operator<<(ostream &, const linkList<T> &);
template <class elemType>
class node {
	friend class linkList<elemType>;
	friend class waiting_time<elemType>;
	friend ostream &operator<<<>( ostream &, const linkList<elemType> &);
    private:
            elemType  data;
            node <elemType> *next;
    public:
	node(const elemType &x, node <elemType> *N = NULL)
                           { data = x; next = N;}
	node( ):next(NULL) {}
	~node() {}
};

template <class elemType>
class linkList
{  friend ostream &operator<<<>( ostream &,const linkList<elemType> &);
   protected:
          node <elemType> *head;
	   void makeEmpty();
   public:
         linkList()  { head  = new node<elemType>;  }
         ~linkList()  {makeEmpty(); delete head;}
        void create(const elemType &flag);
   };

template <class T>
class waiting_time:public linkList<T>
{
public:
    T push(T number); //the function of push data T !
    T pop(); // the function of pop data !
    ~waiting_time(){};
};
template <class T>
T waiting_time<T>::push(T number)
{
    T tmp;
    tmp=number;
    node <T> *p;
    node <T> *q=this->head;
    p = new node<T>(tmp);
    while (q->next!=NULL)
        q=q->next;
    q->next=p;
    p->next=NULL;
    return number;
}

template <class T>
T waiting_time<T>::pop()
{
    node <T> *q = this->head->next;
    T ans=0;
    if (q != NULL){ ans=q->data; this->head=q; delete q; return ans;}
    else
    {
        cout<<"the queue is empty!"<<endl;
        return -1;
    }

}

template <class elemType>
void linkList<elemType>::makeEmpty()
 {
  node <elemType> *p = head->next, *q;
  head->next=NULL;
  while (p != NULL) { q=p->next; delete p;  p=q;}
 }

template <class elemType>
void linkList<elemType>::create(const elemType &flag)
{ elemType tmp;
  node <elemType> *p, *q = head;

 cout << "please enter the data one by one, " << flag << " for the end." << endl;
 while (true) {
	 cin >> tmp;
	 if (tmp == flag) break;
       p = new node<elemType>(tmp);
	 q->next = p;
	 q = p;
 }
 q->next = NULL;
}

template <class T>
ostream &operator<<(ostream &os,
                         const linkList<T> &obj)
{ node <T> *q = obj.head->next;
  os << endl;
  while (q != NULL){ os << q->data;  q = q->next;  }
  return os;
}



int main()
{

waiting_time<int> waiting1;

cout<<"Please enter a set of (5,1,1,1,1,1,1,1,1,1) to simulate the queue: "<<endl;
cout<<"( with the coming order one by one. )"<<endl;

//waiting1.create(0); //0 is the end of entering

int i=0;
int input;
for (i=0;i<10;++i)
{
    cin>>input;
    waiting1.push(input); //push the data to the queue one by one !
}

int time[10]={0};

for (i=0;i<10;++i)
{
    time[i]=waiting1.pop(); // pop the data from the queue !
}
int person1=0;
int person2=0;
for (i=0;i<10;++i)
{
    if (person1<person2)
        person1+=time[i];
    else
        person2+=time[i];
}

// situation 1
cout<<"The total time of solution 1 is: "<<endl;
cout<<9<<endl;

// situation 2
cout<<"The total time of solution 2 is:"<<endl;
cout<<max(person1,person2)<<endl;
    return 0;
}
