#include <iostream>

using namespace std;

class Pet {
protected:
    char* name;
public:
    Pet(char* name) {
        this->name = new char[strlen(name) + 1];
        strcpy_s(this->name, strlen(name) + 1, name);
    }
    Pet(): Pet(nullptr) {}

    virtual void Sound() = 0;
    virtual void Show() = 0;
    virtual void Type() = 0;
};



class Dog : public Pet {
protected:
    char* sound;
    char* type;
public:
    Dog(char* name, char* sound, char* type) : Pet(name) {
        this->sound = new char[strlen(sound) + 1];
        strcpy_s(this->sound, strlen(sound) + 1, sound);
        this->type = new char[strlen(type) + 1];
        strcpy_s(this->type, strlen(type) + 1, type);
    }

    void Sound() override {
        cout << sound << endl;
    }

    void Show() override {
        cout << name << endl;
    }

    void Type() override {
        cout << type << endl;
    }
};



class Cat : public Pet {
protected:
    char* sound;
    char* type;
public:
    Cat(char* name, char* sound, char* type) : Pet(name) {
        this->sound = new char[strlen(sound) + 1];
        strcpy_s(this->sound, strlen(sound) + 1, sound);
        this->type = new char[strlen(type) + 1];
        strcpy_s(this->type, strlen(type) + 1, type);
    }
    void Sound() override {
        cout << sound << endl;
    }

    void Show() override {
        cout << name << endl;
    }

    void Type() override {
        cout << type << endl;
    }
};



class Parrot : public Pet {
protected:
    char* sound;
    char* type;
public:
    Parrot(char* name, char* sound, char* type) : Pet(name) {
        this->sound = new char[strlen(sound) + 1];
        strcpy_s(this->sound, strlen(sound) + 1, sound);
        this->type = new char[strlen(type) + 1];
        strcpy_s(this->type, strlen(type) + 1, type);
    }
    void Sound() override {
        cout << sound << endl;
    }

    void Show() override {
        cout << name << endl;
    }

    void Type() override {
        cout << type << endl;
    }
};



class Hamster : public Pet {
protected:
    char* sound;
    char* type;
public:
    Hamster(char* name, char* sound, char* type) : Pet(name) {
        this->sound = new char[strlen(sound) + 1];
        strcpy_s(this->sound, strlen(sound) + 1, sound);
        this->type = new char[strlen(type) + 1];
        strcpy_s(this->type, strlen(type) + 1, type);
    }
    void Sound() override {
        cout << sound << endl;
    }

    void Show() override {
        cout << name << endl;
    }

    void Type() override {
        cout << type << endl;
    }
};

int main()
{
    Pet* pet;

    pet = new Dog((char*)"name", (char*)"woof", (char*)"buldog");
    pet->Sound();
    pet->Show();
    pet->Type();
    cout << endl;

    delete pet;

    pet = new Cat((char*)"name", (char*)"meow :3", (char*)"idk");
    pet->Sound();
    pet->Show();
    pet->Type();
    cout << endl;

    delete pet;

    pet = new Parrot((char*)"name", (char*)"chiric", (char*)"idk");
    pet->Sound();
    pet->Show();
    pet->Type();
    cout << endl;

    delete pet;

    pet = new Hamster((char*)"name", (char*)"...", (char*)"idk");
    pet->Sound();
    pet->Show();
    pet->Type();
    cout << endl;

    delete pet;
}