#include<bits/stdc++.h>
using namespace std;

class ToDoList{
    private:
    vector<pair<string, bool>>tasks;
    public:
    //add a task
    void addTasks(string &task){
        tasks.push_back({task , false});
    }
    //view the tasks 
    void displayTask(){
        cout<<"ToDoList"<<endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << i + 1 << ". ";
            if (tasks[i].second) {
                std::cout << "[Completed] ";
            }
            std::cout << tasks[i].first << std::endl;
        }
    }
    
    //Remove Task
    void removeTask(int ch){
        if(ch>=0 && ch<tasks.size()){
            tasks.erase(tasks.begin()+ch);
        }
    }
    //mark the task as completed
    void markTaskAsCompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].second = true;
        }
    }
};
int main(){
    ToDoList todo;
    int choice;

    while(true){
        cout<<"1. Add a Task"<<endl;
        cout<<"2. View the Tasks"<<endl;
        cout<<"3. Remove a Task"<<endl;
        cout<<"4.Mark a Task as completed"<<endl;
        cout<<"Enter Your Choice ";
        cin>>choice;

        switch(choice){
            case 1: 
            {
                string task;
                cout<<"Enter Your Task : ";
                cin.ignore();
                getline(cin,task);
                todo.addTasks(task);
                break;
            }
            case 2:
                todo.displayTask();
                break;
            case 3:
            {
                int index;
                cout<<"Enter the task number you want to delete :";
                cin>>index; 
                todo.removeTask(index-1);
                break;

            }
            case 4:
                {
                    int index;
                    std::cout << "Enter the task number to mark as completed: ";
                    std::cin >> index;
                    todo.markTaskAsCompleted(index - 1);
                    break;
                }
            default:
               cout<<" Invalid Choice "<<endl;
        }
    }

    return 0;
}