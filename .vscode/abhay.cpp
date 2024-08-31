#include<iostream>

using namespace std;

int vacant=10, items=0;

void producer() {
    vacant--;
    items++;
    cout<<"Item Produced"<<endl;
}

void consumer(){
    vacant++;
    items--;
    cout<<"Item Consumed : "<<endl;
}

int main(){
    int choice;
    cout<<"Operations :- "<<endl<<"1. Produce Item"<<endl<<"2.Consume Item"<<endl<<"3. Exit"<<endl;

    while(1){
        cout<<"Enter choice :- ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            if(items == 5 || vacant==0){
                cout<<"Full cannot fill it more"<<endl;
            }
            else{
                producer();
            }
            break;

        case 2:
            if(items == 0 || vacant == 10)
                cout<<"Empty cannot give it more"<<endl;
            else{
                consumer();
                }
            break;

        case 3:
            cout<<"EXITTING ";
            return 0;

        default:
            cout<<"Enter Proper Operation";
            break;
        }
    }
    return 0;
}
