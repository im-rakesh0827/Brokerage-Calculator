#include "bits/stdc++.h"
using  namespace std;
int main(){
    cout<<"Choose : 1.Equity-Delivery-Buy   2.Equity-Delivery-Sell  3.Intraday\n";
    cout<<"Your chooice : ";
    int choice; cin>>choice;
    if(choice==1 || choice==2 || choice==3){
        cout<<"Enter number of share : ";
        long share; cin>>share;
        if(share<=0){
            cout<<"Invalid input :\n";
        }else{
            cout<<"Enter price of a share : ";
            long price; cin>>price;
            if(price<=0){
               cout<<"Invalid input :\n";
            }else{
                int N = share*price;
                if(choice==1){
                    int Brokerage_Charge = 20;
                    double STT_Charge = (0.1/100)*N;
                    double ET_Charge = (0.00345/100)*N;
                    double SEBI_Charge = (0.0001/100)*N;
                    double GST_Charge = (18/100)*N;
                    double Stamp_Charge = (0.015/100)*N;
                    double Total_Charge = Brokerage_Charge+STT_Charge+ET_Charge+SEBI_Charge+GST_Charge+Stamp_Charge;
                    double  Net_Value = N+Total_Charge;
                    cout<<"\nBrokerage charge : "<<Brokerage_Charge<<"\n"<<"STT charge : "<<STT_Charge<<"\n";
                    cout<<"ET charge : "<<ET_Charge<<"\n"<<"SEBI charge : "<<SEBI_Charge<<"\n";
                    cout<<"GST charge : "<<GST_Charge<<"\n"<<"Stamp charge : "<<Stamp_Charge<<"\n";
                    cout<<"Total charges : "<<Total_Charge<<"\nNet Value : "<<Net_Value<<"\n";
                }else if(choice==2){
                    int Brokerage_Charge = 20;
                    double STT_Charge = (0.1/100)*N;
                    double ET_Charge = (0.00345/100)*N;
                    double SEBI_Charge = (0.0001/100)*N;
                    double GST_Charge = (18/100)*N;
                    double Total_Charge = Brokerage_Charge+STT_Charge+ET_Charge+SEBI_Charge+GST_Charge;
                    double  Net_Value = N+Total_Charge;
                    cout<<"\nBrokerage charge : "<<Brokerage_Charge<<"\n"<<"STT charge : "<<STT_Charge<<"\n";
                    cout<<"ET charge : "<<ET_Charge<<"\n"<<"SEBI charge : "<<SEBI_Charge<<"\n";
                    cout<<"GST charge : "<<GST_Charge<<"\n";
                    cout<<"Total charges : "<<Total_Charge<<"\nNet Value : "<<Net_Value<<"\n";

                }
            }
        }
    }
    cout<<"Press : 1.Continue   2.Exit\n";
    cout<<"Your choice : ";
    int op; cin>>op;
    if(op==1){
        main();
    }else if(op==2){
        cout<<"You have successfully exited : \nBetter luck next time\n";
    }else{
        cout<<"Invalid choice :\nExited\n";
    }
    return 0;
}