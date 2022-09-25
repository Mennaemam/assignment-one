class Road
{
private:
    int Speed_Limit;
    char Road_Type;
    int countA;
    int countB;
    int countC;
    
public:
    Road(int Speed_Limit, char Road_Type)
    {
        Speed_Limit= 0;
        Road_Type= ' ';
        countA=0;
        countB=0;
        countC=0;
    }
    Road(char r, int s)
    {
        Road_Type=r;
        Speed_Limit=s;
    }
    void setroad_type( char r)
    {
        while(r!='A' && r!= 'B' && r != 'C')
            {
                cout<<"incorrect roadtype"<<endl;
            }
        Road_Type=r;
    }
    char getroad_type()
    {
        return Road_Type;
    }
    void setspeed_limit( int s)
    {
        Speed_Limit=s;
    }
    int getspeed_limit()
    {
        return Speed_Limit;
    }
    bool Radar(char Road_Type,int car_speed)
    {
        if (Road_Type == 'A' && car_speed>60)
        {
            cout<<"This car will be fined"<<endl;
            cout<<"----------------------------"<<endl;
            return 1;
        }
        else
            if (Road_Type == 'B' && car_speed>80)
        {
            cout<<"This car will be fined"<<endl;
            cout<<"----------------------------"<<endl;
            return 1;
        }
        else
            if (Road_Type == 'C' && car_speed>90)
        {
            cout<<"This car will be fined"<<endl;
            cout<<"----------------------------"<<endl;
            return 1;
        }
        else
        {
            cout<<"Car speed is below the limit"<<endl;
            cout<<"----------------------------"<<endl;
            return 0;
        }
    }
    void allow(string Car_Type)
    {
        if(Car_Type =="private")
        {
            cout<<"This car is allowed on road A and road B but not road C"<<endl;
            countA++;
            countB++;
        }
        else if( Car_Type== "motorcycle" )
        {
            cout<<"This car is allowed on road A and road B but not road C"<<endl;
            countA++;
            countB++;
        }
        else if( Car_Type== "truck")
        {
            cout<<"This car is allowed on road C and road B but not road A"<<endl;
            countC++;
            countB++;
        }
        else if( Car_Type== "bus")
        {
            cout<<"This car is allowed on road B only"<<endl;
            countB++;
        }
    }
    int getcounta()
    {
        return countA;
    }
    int getcountb()
    {
        return countB;
    }
    int getcountc()
    {
        return countC;
    }
    int age(int Year_Model)
    {
        return 2022-Year_Model;
        
    }

};
