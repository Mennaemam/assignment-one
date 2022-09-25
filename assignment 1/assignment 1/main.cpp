#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

class Car
{
    private:
    string Car_Brand;
    string Car_Type;
    string Car_Plate;
    int Speed;
    int Year_Model;
    
    public:
    Car( string Car_Brand, string Car_Type, string Car_Plate,int Speed,int Year_Model)
    {
        Car_Brand= " ";
        Car_Type= " ";
        Car_Plate= "";
        Speed=0;
        Year_Model=0;
        string priv= "private";
        string motor= "motorcycle";
        string truck= "trucks";
        string bus= "bus";
       
    }
    Car(string brand,string type, int Max_Speed, int model, string plate )
    {
       Car_Brand= brand;
        Car_Type=type;
        Speed=Max_Speed;
        Year_Model = model;
        Car_Plate = plate;
    }
    void setcar_brand( string b)
    {
        Car_Brand=b;
    }
    string getcar_brand()
    {
        return Car_Brand;
    }
    void setcar_type(string t)
    {
       while( t!= "private" && t!="motorcycle"  && t!= "truck" && t!= "bus")
        {
            cout<<"Incorrect cartype"<<endl;
        }
        Car_Type=t;
    }
    string getcar_type()
    {
        return Car_Type;
    }
    void setcar_plate(string p)
    {
        Car_Plate=p;
    }
    string getcar_plate()
    {
        return Car_Plate;
    }
    void setspeed(int s)
    {
        Speed=s;
    }
    int getspeed()
    {
        return Speed;
    }
    void setyear_model(int y)
    {
        Year_Model=y;
    }
    int getyear_model()
    {
        return Year_Model;
    }

};

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
int main()
{
    Car car1("toyota","private","mfr456",50,2010);
    car1.setcar_brand("toyota");
    car1.setcar_type("private");
    car1.setcar_plate("mfr456");
    car1.setspeed(50);
    car1.setyear_model(2010);
    Car car2("mercedes","private","asd234",70,2019);
    car2.setcar_brand("mercedes");
    car2.setcar_type("private");
    car2.setcar_plate("asd234");
    car2.setspeed(70);
    car2.setyear_model(2019);
    Car car3("toyota","truck","rty789",54,2013);
    car3.setcar_brand("toyota");
    car3.setcar_type("truck");
    car3.setcar_plate("rty789");
    car3.setspeed(54);
    car3.setyear_model(2013);
    Car car4("opel","motorcycle","jkl435",80,2012);
    car4.setcar_brand("opel");
    car4.setcar_type("motorcycle");
    car4.setcar_plate("jkl435");
    car4.setspeed(80);
    car4.setyear_model(2012);
    Car car5("harley","motorcycle","yhn768",91,2021);
    car5.setcar_brand("harley");
    car5.setcar_type("motorcycle");
    car5.setcar_plate("yhn768");
    car5.setspeed(91);
    car5.setyear_model(2021);
    Car car6("toyota","bus","okn908",56,2011);
    car6.setcar_brand("toyota");
    car6.setcar_type("bus");
    car6.setcar_plate("okn908");
    car6.setspeed(56);
    car6.setyear_model(2011);
    Car car7("honda","private","tre583",100,2009);
    car7.setcar_brand("honda");
    car7.setcar_type("private");
    car7.setcar_plate("tre583");
    car7.setspeed(100);
    car7.setyear_model(2009);
    Car car8("hyundai","bus","qaz123",78,2014);
    car8.setcar_brand("hyundai");
    car8.setcar_type("bus");
    car8.setcar_plate("qaz123");
    car8.setspeed(78);
    car8.setyear_model(2014);
    Road road1(60,'A');
    road1.setspeed_limit(60);
    road1.setroad_type('A');
    Road road2(80, 'B');
    road2.setspeed_limit(80);
    road2.setroad_type('B');
    Road road3(90, 'C');
    road3.setspeed_limit(90);
    road3.setroad_type('C');
    queue <Car> q;
    
    q.push(car1);
    q.push(car2);
    q.push(car3);
    q.push(car4);
    q.push(car5);
    q.push(car6);
    q.push(car7);
    q.push(car8);
    

    char roadtype1=road1.getroad_type();
    char roadtype2=road2.getroad_type();
    char roadtype3=road3.getroad_type();
    
     while(!q.empty())
     {
        Car cartemp= q.front();
        cout<<cartemp.getcar_type();
        int y= cartemp.getyear_model();
        string t= cartemp.getcar_type();
        
        road1.allow(t);
         road2.allow(t);
         road3.allow(t);
         int s= cartemp.getspeed();
         string plate=cartemp.getcar_plate();
         string brand=cartemp.getcar_brand();
         if(t=="private")
         {
            bool flag=road1.Radar(roadtype1,s);
             
             if(flag== true)
             {
                 cout<<" "<<endl;
                 cout<<"Car brand="<<cartemp.getcar_brand()<<endl;
                 cout<<"Car type="<<cartemp.getcar_type()<<endl;
                 cout<<"Car plate="<<cartemp.getcar_plate()<<endl;
                 cout<<"Car speed="<<cartemp.getspeed()<<endl;
                 cout<<"Car year model="<<cartemp.getyear_model()<<endl;
                 cout<<"Car age="<<road1.age(y)<<endl;
                 cout<<" "<<endl;
             }
             bool flag1=road2.Radar(roadtype2,s);
             if(flag1== true)
             {
                 cout<<" "<<endl;
                 cout<<"Car brand="<<cartemp.getcar_brand()<<endl;
                 cout<<"Car type="<<cartemp.getcar_type()<<endl;
                 cout<<"Car plate="<<cartemp.getcar_plate()<<endl;
                 cout<<"Car speed="<<cartemp.getspeed()<<endl;
                 cout<<"Car year model="<<cartemp.getyear_model()<<endl;
                 cout<<"Car age="<<road2.age(y)<<endl;
                 cout<<" "<<endl;
             }
         }
         else if(t=="motorcycle")
         {
             bool flag= road1.Radar(roadtype1,s);
             
             if(flag== true)
             {
                 cout<<" "<<endl;
                 cout<<"Car brand="<<cartemp.getcar_brand()<<endl;
                 cout<<"Car type="<<cartemp.getcar_type()<<endl;
                 cout<<"Car plate="<<cartemp.getcar_plate()<<endl;
                 cout<<"Car speed="<<cartemp.getspeed()<<endl;
                 cout<<"Car year model="<<cartemp.getyear_model()<<endl;
                 cout<<"Car age="<<road1.age(y)<<endl;
                 cout<<" "<<endl;
             }
            bool flag1= road2.Radar(roadtype2,s);
             if(flag1== true)
             {
                 cout<<" "<<endl;
                 cout<<"Car brand="<<cartemp.getcar_brand()<<endl;
                 cout<<"Car type="<<cartemp.getcar_type()<<endl;
                 cout<<"Car plate="<<cartemp.getcar_plate()<<endl;
                 cout<<"Car speed="<<cartemp.getspeed()<<endl;
                 cout<<"Car year model="<<cartemp.getyear_model()<<endl;
                 cout<<"Car age="<<road2.age(y)<<endl;
                 cout<<" "<<endl;
             }
         }
         else if(t=="truck")
         {
            bool flag= road3.Radar(roadtype3,s);
             if(flag== true)
             {
                 cout<<" "<<endl;
                 cout<<"Car brand="<<cartemp.getcar_brand()<<endl;
                 cout<<"Car type="<<cartemp.getcar_type()<<endl;
                 cout<<"Car plate="<<cartemp.getcar_plate()<<endl;
                 cout<<"Car speed="<<cartemp.getspeed()<<endl;
                 cout<<"Car year model="<<cartemp.getyear_model()<<endl;
                 cout<<"Car age="<<road3.age(y)<<endl;
                 cout<<" "<<endl;
             }
         }
         else if(t=="bus")
         {
             bool flag=road2.Radar(roadtype2,s);
             if(flag== true)
             {
                 cout<<" "<<endl;
                 cout<<"Car brand="<<cartemp.getcar_brand()<<endl;
                 cout<<"Car type="<<cartemp.getcar_type()<<endl;
                 cout<<"Car plate="<<cartemp.getcar_plate()<<endl;
                 cout<<"Car speed="<<cartemp.getspeed()<<endl;
                 cout<<"Car year model="<<cartemp.getyear_model()<<endl;
                 cout<<"Car age="<<road2.age(y)<<endl;
                 cout<<" "<<endl;
             }
         }
         

         q.pop();
     }
    cout<<"Road A has an amount of "<<road1.getcounta()<< " cars passed"<<endl;
    cout<<"Road B has an amount of "<<road2.getcountb()<< " cars passed"<<endl;
    cout<<"Road C has an amount of "<<road3.getcountc()<< " cars passed"<<endl;
    cout<<"Efficiency of road A is "<<(road1.getcounta()/road2.getcountb())*100<<endl;
    cout<<"Efficiency of road B is "<<(road2.getcountb()/road2.getcountb())*100<<endl;
    cout<<"Efficiency of road C is "<<(road3.getcountc()/road2.getcountb())*100<<endl;
}
    
