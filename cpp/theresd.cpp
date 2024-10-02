#include<iostream>
#include<thread>


static bool wait = true ;

void doo()
{
    std::cout<<"id "<< std::this_thread::get_id()<<std::endl; 
    using namespace std::literals::chrono_literals;
    {
    while(wait){
        std::cout<<"he           \n";
        std::this_thread::sleep_for(1s);
            }
    }
}   



int main(){

    std::thread name(doo);   // start a thread to do function (function pointer)    // used to work fine

    std::cin.get();        // on diff thread
    wait = false;
    name.join();     //  wait for thread to join/finish
    std::cout<<"id2  "<<std::this_thread::get_id();


}