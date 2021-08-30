#include <iostream>
#include <string>

class Parent 
{

        std::string passport = "5009605330";
    
    protected:
    
        int age = 30;
        float weight = 84.45;
        float height = 1.78; 
    
    public:
    
        std::string name = "Albert Protopopov";
        
        virtual void say()
        {
            std::cout << "I like work" << std::endl;
        }
        
        void show_potected()
        {
            std::cout << "protected: age = "<< age << " weight = " << weight << " height = " << height << std::endl;
        }
        
        void show_private()
        {
            std::cout << "passport: " << passport << std::endl;
        }
        friend void show_private(const Parent &parent);
   
};

void show_private(const Parent &parent)
{
    std::cout << "Parent passport from friend function: " << parent.passport << std::endl;
}

class Child: public Parent 
{

        std::string birth_certificate = "11111111";
        
    protected:
    
        int ch_age = 5;
        float ch_weight = 15;
        float ch_height = 1.20;
        
    public:
        
        std::string name = "Sasha Protopopov"; 
        
        virtual void say() override
        {
            std::cout << "I like game" << std::endl;
        } 
        void play()
        {
            std::cout << "I wont play!!" << std::endl;
        }
        void show_private()
        {
            std::cout << "birth certificate: " << birth_certificate << std::endl;
        }
        void show_my_parent()
        {
            std::cout << Parent::name << std::endl;
        }
        void change_my_parent()
        {
            Parent::name = "Masha Petrowa";
        }
        void show_protected()
        {
            std::cout << "chiled age: " << ch_age << std::endl;
            std::cout << "chiled weight: " << ch_weight << std::endl;
            std::cout << "chiled age: " << ch_age << std::endl;
        }
        void show_protected_parent()
        {
            std::cout << "age: " << Parent::age << std::endl;
            std::cout << "weight: " << Parent::weight << std::endl;
            std::cout << "height: " << Parent::height << std::endl;
        }
        void change_protected_parent()
        {
            Parent::age = 33;
            Parent::weight = 65;
            Parent::height  = 1.68;
        }
 
};

int main(){
    
    Parent parent;
    std::cout << parent.name << std::endl;
    parent.say();
    parent.show_potected();
    parent.show_private();
    show_private(parent);
    
    std::cout << "\n\n";
    
    Child child;
    std::cout << child.name << std::endl;
    child.show_protected();
    child.say();
    child.play();
    child.show_private();
    child.show_my_parent();
    child.change_my_parent();
    child.show_my_parent();
    child.show_protected_parent();
    child.change_protected_parent();
    child.show_protected_parent();
    
    std::cout << std::endl << "parent: " << std::endl;
    
    std::cout << parent.name << std::endl;
    parent.show_potected();
    
    std::cout << std::endl << "Pointers: " << std::endl;
    
    Parent *pparent;
    pparent = &parent;
    pparent->say();
    pparent = &child;
    pparent->say();
    Child *ch = dynamic_cast<Child*>(pparent);
    ch->play();
    
    return 0;
}
