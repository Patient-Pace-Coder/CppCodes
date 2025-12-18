#include <iostream>
#include <string>
using namespace std;

class Joint{

    protected:
        string name;
        int rangeOfMotion;

    Joint(string name, int rangeOfMotion) 
        : name{name}, rangeOfMotion{rangeOfMotion} 
        {
        }
    
    public:
        void displayInfo() const{
            cout << "Joint Name : " << name << endl;
            cout << "Range of Motion : " << rangeOfMotion << " degrees" << endl;
        }
       
        virtual void move();
        virtual ~Joint() = default;

};

void Joint :: move(){
    cout << "Joint " << name << " is moving " << endl;
}

class KneeJoint : public Joint{

    public:
        KneeJoint(string name, int rangeOfMotion)
            : Joint{name, rangeOfMotion}
        {
        }

        void move() override{
            cout << "Joint " << name << " is moving " << endl;
        }  
};

class HipJoint : public Joint{

    public:
        HipJoint(string name, int rangeOfMotion)
            : Joint{name, rangeOfMotion}
        {
        }

        void move() override{
            cout << "Joint " << name << " is moving " << endl;
        }
};

class ShoulderJoint : public Joint{

    public:
        ShoulderJoint(string name, int rangeOfMotion)
            : Joint{name, rangeOfMotion}
        {
        }

        void move() override{
            cout << "joint " << name << " is moving " << endl;
        }
};

int main(){
    Joint* j1 = new KneeJoint("Right Knee", 135);
    Joint* j2 = new HipJoint("Left Hip", 120);      
    Joint* j3 = new ShoulderJoint("Right Shoulder", 180);
    Joint* joints[] = { j1, j2, j3 };
    for( auto j : joints){
        j->displayInfo();
        j->move();
        cout << endl;
    }
}