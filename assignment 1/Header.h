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

