#include <bits/stdc++.h> // or use standard headers
using namespace std;

/// application 
// login, signup(registration)
// available services
// offeres

void main() {
   
    // login, signup 
    // password, username
    string username;
    string password;

    /// display two options 
    // login, signup | signin, signup

    cout<<"1.login 2.signup"<<endl;
    int option;
    cin >> option;
    /// switch case : int, ASCII value(int)<-chars
    if(option == 1){
        // login logic

        // username, password 
        cout<<"please enter your username and password"<<endl;
        cin>> username;
        cin>> password;
        /// cin >> username >> password;

        /// TODO : check for correctness 

        /// firstly, we need to store these data
        /// type of storage
        /// file based (txt) and store it on my device
        /// you'll need just a premission to manipulate files on your platform
        /// 
        /// database -> an opened connection between 
        /// language, tool and the database server 
        /// a sort of communication method between language and the database server. 
        /// ORM, adapter (MySql, MSSQL)
        /// operators .Select(u => u.username) linq 
        /// connected mode, disconnected  

        /// validation (allow threats)
        /// SQL injection -> database, violation 
        /// login directly, or stole data 
    }else{


        // signup logic, registration
    }
    

    /// username exist in vip list 
    if (){
        /// already past customer
        /// sort of features 
        ///
    }else 
    {
        /// normal business content 

    }
    return ;
}