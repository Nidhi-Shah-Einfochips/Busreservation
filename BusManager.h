#ifndef _BusManager_H_
#define _BusManager_H_
#include<iostream>
#include<memory>
#include<map>
#include<bits/stdc++.h>
#include<vector>
#include"BusManagerIF.h"
#include"BusIF.h"
class BusManager:public BusManagerIF , public  std::enable_shared_from_this<BusManager>
{
    private:
        BusManager();
        std::map<std::string,BusIF::Ptr> BusList;
        
    public:
        typedef std::shared_ptr<BusManager> Ptr;
        static BusManagerIF::Ptr CreateBusManager();
        void AddBus(BusIF::BusDetails);
        std::list<BusIF::Ptr> search(stationcode::stCode,stationcode::stCode);
        std::list<BusIF::Ptr> PrintBusList();
        bool CancelTicket(std::string);
        virtual ~BusManager(){};
        

       
    
};
#endif
