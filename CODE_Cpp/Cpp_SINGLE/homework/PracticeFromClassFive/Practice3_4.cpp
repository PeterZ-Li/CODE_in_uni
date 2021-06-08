#include<iostream>

class CBuilding
{
    protected:
    int Floor,RoomNum,Area;
    public:
    CBuilding()
    {}

};

class CHousing:public CBuilding
{
    private:
    int BedroomNum,BathroomNum;
    public:
    CHousing(int fl,int room,int ar, int bedr,int bathr):BedroomNum(bedr),BathroomNum(bathr)
    {
        this->Floor=fl;
        this->RoomNum=room;
        this->Area=ar;
    }
    void show()
    {
        std::cout<<this->Floor<<" "<<this->RoomNum<<" "<<this->Area<<" "<<BedroomNum<<" "<<BathroomNum<<std::endl;
    }
};

class COfficeBuilding:public CBuilding
{
    private:
    int FireExtinguisher,Telephone;
    public:
    COfficeBuilding(int fl,int room,int ar, int firee,int tele):FireExtinguisher(firee),Telephone(tele)
    {
        this->Floor=fl;
        this->RoomNum=room;
        this->Area=ar;
    }
    void show()
    {
        std::cout<<this->Floor<<" "<<this->RoomNum<<" "<<this->Area<<" "<<FireExtinguisher<<" "<<Telephone<<std::endl;
    }
};
int main()
{
    int floor,roomNum,area;
    int bedroomNum,bathroomNum;
    std::cin>>floor>>roomNum>>area>>bedroomNum>>bathroomNum;
    CHousing house(floor,roomNum,area,bedroomNum,bathroomNum);
    int fireExtinguisher,telephone;
    std::cin>>floor>>roomNum>>area>>fireExtinguisher>>telephone;
    COfficeBuilding office(floor,roomNum,area,fireExtinguisher,telephone);
    house.show();
    office.show();
    return 0;
}