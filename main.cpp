#include <iostream>
using namespace std;

//declare the methods
int decimalToBinary(int num);

void decimalToHexa(int y);


int main()
{

    //From here we initialize the numbers we want to be converted
    int mynum[23]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,31,100,255,256};
    cout<<"Decimal values"<<endl;
    for(int x=0;x<sizeof(mynum)/sizeof(mynum[0]);x++){
                 cout<<mynum[x]<<endl;

    }
    cout<<"Corresponding binary values are"<<endl;
     for(int i=0;i<sizeof(mynum)/sizeof(mynum[0]);i++){
             decimalToBinary(mynum[i]);
             cout<<endl;
    }
    cout<<"Corresponding hexadecimal values are"<<endl;
              for(int j=0;j<sizeof(mynum)/sizeof(mynum[0]);j++){


          decimalToHexa(mynum[j]);
          cout<<endl;
    }



    return 0;
}
//define the methods
int decimalToBinary(int num)
{

     for (int i = 11; i >= 0; i--) {
        int x = num>> i;
           if (x & 1)
            cout << "1";
                  else
            cout << "0" ;
    }
}
void decimalToHexa(int mynum)
{
    char hexaDeciNum[100];


    int i = 0;
       while(mynum!=0)
    {

        int temp  = 0;


        temp = mynum% 16;

        if(temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        mynum = mynum/16;
    }


    for(int j=i-1; j>=0; j--)
        cout << hexaDeciNum[j];
}

