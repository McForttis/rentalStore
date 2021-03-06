//---------------------------------borrow.h------------------------------------
// This is a subclass of the Transaction class. It stores information for a
// borrow transaction and handles the transaction. When an item is
// borrowed, the inventory of the store and user history are updated
// accordingly.
//-----------------------------------------------------------------------------

#ifndef BORROW_H
#define BORROW_H

class Borrow : public Transaction {
public:
   bool executeTransaction();       // updates all info
   
private:
   void updateInventory() const;    // updates store inventory
   void updateBorrowedList() const; // updates user's borrowed list
   void updateUserHistory() const;  // updates user's transaction history
};

#endif
