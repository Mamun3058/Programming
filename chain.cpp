/**
	* Mamun Ahmed
	   ID:1103058
	   Dept:CSE
	   Sec:A
**/
#include<bits/stdc++.h>
using namespace std;
#define ne                        next
#define pr                         prev
#define en                        entry
#define v                           value
#define t                           Table_size
 int t = 20;
 /*
 HN means HashNode
 HM means HashMap
 ht means HashTable
 */
class HN
{
    public:
       int k,v;
	HN* ne;
        HN(int k, int v)
        {
            this->k = k;
	    this->v = v;
	    this->ne = NULL;
        }
};
class HM
{
    private:
        HN** ht;
    public:
        HM()
        {
            ht= new HN*[t];
            for (int i = 0; i <t; i++)
                ht[i] = NULL;
        }
        /*
         * Hash Function
         */
        int HashFunc(int k)
        {
            return k % t;
        }

        /*
         * Insert Element at a index
         */
        void Insert(int k, int v)
        {
            int hash_val = HashFunc(k);
            HN* pr = NULL;
            HN* en = ht[hash_val];
            while (en != NULL)
            {
                pr = en;
                en = en->ne;
            }
            if (en == NULL)
            {
                en = new HN(k, v);
                if (pr == NULL)
	        {
                    ht[hash_val] = en;
                }
	        else
	           {
                    pr->ne = en;
                }
            }
            else
            {
                en->v = v;
            }
        }
        /*
         * Remove Element at a index
         */
        void Remove(int k)
        {
            int hash_val = HashFunc(k);
            HN* en = ht[hash_val];
            HN* pr = NULL;
            if (en == NULL || en->k != k)
            {
            	cout<<"No Element found at index "<<k<<endl;
                return;
            }
            while (en->ne != NULL)
	    {
                pr = en;
                en = en->ne;
            }
            if (pr != NULL)
            {
                pr->ne = en->ne;
            }
            delete en;
            cout<<"Element Deleted"<<endl;
        }
        /*
         * Search Element at a key
         */
        int Search(int k)
        {
            bool temp = false;
            int hash_val = HashFunc(k);
            HN* en = ht[hash_val];
            while (en != NULL)
	    {
                if (en->k== k)
	        {
                    cout<<en->v<<" ";
                    temp= true;
                }
                en = en->ne;
            }
            if (!temp)
                return -1;
        }
};

/*
 * Main Function
 */
int main()
{
    HM hash;
    int k, v,ch;
    while (1)
    {
       cout<<"        which operation you want to do??        "<<endl<<endl;
        cout<<"1.Insert element into the table"<<endl;
        cout<<"2.Search element from the index"<<endl;
        cout<<"3.Delete element from the Index"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter element to be inserted: ";
            cin>>v;
            cout<<"Enter index in which element to be inserted: ";
            cin>>k;
            hash.Insert(k, v);
            break;
        case 2:
            cout<<"Enter index of the element to be searched: ";
            cin>>k;
            cout<<"Element at Index "<<k<<" : ";
            if (hash.Search(k) == -1)
            {
	        cout<<"No element found at Index"<<k<<endl;
	        continue;
	    }
            break;
        case 3:
            cout<<"Enter Index of the element to be deleted: ";
            cin>>k;
            hash.Remove(k);
            break;
        case 4:
            exit(1);
        default:
           cout<<endl<<"Wrong Input"<<endl;
       }
    }
    return 0;
}
