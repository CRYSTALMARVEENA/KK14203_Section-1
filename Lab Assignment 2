#include <iostream>

using namespace std;
class POSNode

{
    string item;  //represents product name
    float price;  //represents the price of the product
    POSNode *next;  //represents a pointer to the next node.

public:

    POSNode(){};
    
    void setItem(string item_1){
        item = item_1;
    };

    void setPrice(float price_1){
        price = price_1;
    };

    void setNext(POSNode *next_1) { 
	next = next_1; 
	};

    string getItem() { return item; };

    float getPrice() { return price; };

    POSNode *Next() { return next; };

};

class POSList

{
    POSNode *head;

public:

    POSList() { head = NULL; };

    void addNode(string item, float price);

    void print();
};

void POSList::addNode(string item, float price)

{
    // Create a new node
    POSNode *newNode = new POSNode();
    newNode->setItem(item);
    newNode->setPrice(price);
    newNode->setNext(NULL);

    // Create a temp pointer
    POSNode *temp = head;
    if (temp != NULL)
    {

        // Nodes already present in the list
        while (temp->Next() != NULL)
        {
            temp = temp->Next();
        }

        // Point the last node to the new node
       temp->setNext(newNode);

    }

    else

    {
        // First node in the list
        head = newNode;
    }
}

void POSList::print()

{

    POSNode *p = head;
    int i = 1;
    float sum = 0.0;
    cout << "========================================================" << endl;
    cout << "BC\tITEMS\t\t\t\t\tPRICE" << endl;
    cout << "========================================================" << endl;

    //print the each element in the list.
    while (p->Next() != NULL)
    {
        cout << i << "\t" << p->getItem() << "\t" << p->getPrice() << endl;
        i++;
        sum = sum + p->getPrice();
        p = p->Next();
    }

    sum = sum + p->getPrice();
    cout << i << "\t" << p->getItem() << "\t" << p->getPrice() << endl;
    cout << "========================================================" << endl;
    cout << "Total (GST Inc.)\t\t" << sum << endl;
    cout << "========================================================" << endl;

}

/* Main fucntion
 Create a POSList object l;
Add nodes to list using AddNode function
Display the list using the print function.
*/ 

int main()    

{
    POSList l;
    l.addNode("Pagoda Gnut 110g      ", 3.49);  // add nodes to list using AddNote function
    l.addNode("Hup Seng Cream Cracker", 4.19);
    l.addNode("Yit Poh 2n1 Kopi-o    ", 7.28);
    l.addNode("Zoelife SN & Seed     ", 5.24);
    l.addNode("Gatsby S/FO Wet&Hard  ", 16.99);
    l.addNode("GB W/G U/Hold 150g    ", 6.49);
    l.print();
}
