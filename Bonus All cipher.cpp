// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Affine Cipher and decipher.cpp
//Mohamed Wa'el Abdelhady A'ref
//20170260
#include <istream>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,v;
    cout<<"1-Affine Cipher ---------- 2-Caesar Cipher"<<endl;
    cout<<"3-Atbash Cipher ---------- 4-ROT13 Cipher"<<endl;
    cout<<"5-Baconian Cipher -------- 6-Simple Substitution Cipher"<<endl;
    cout<<"7-Polybius Square Cipher -------- 8-Morse Code"<<endl;
    cout<<"9-XOR Cipher ---------- 10-Rail-fence Cipher"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Choose the number of the cipher you want : ";
    cin>>v;
    if (v==1){
            string y;
    cout <<"1- Cipher a message"<<endl;
    cout <<"2- Decipher a message"<<endl;
    cout <<"3- End"<<endl;
    cout <<"------------------"<<endl;
    cout <<"Choose what you want [1/2/3] : ";
    cin >>x;
    if(x==1){
            cout<<"Write the message you want to Cipher : ";
            cin.ignore();
            getline(cin,y);
            for(int i = 0; i < y.length(); ++i){
                    if (y[i] == ' ')
			continue;
                    if(y[i] >= 'a' && y[i] <= 'z'){
                        cout<<(char)(((3 * (y[i]-'a') + 7) % 26+'a' ));

                    }
                    else if(y[i] >= 'A' && y[i] <= 'Z'){
                        cout <<((char)((3 * (y[i] - 'A') + 7) % 26 + 'A'));
                                 }
                        }
                   }
    else if (x==2){
            string z;
            cout<<"Write the message you want to Decipher : ";
            cin>>z;
            for(int m = 0; m<=z.length();++m){
                    if(z[m]>='a' && z[m] <= 'z'){
                            cout<<(char)((9*((26+z[m]-'a') - 7) % 26 + 'a'));
                            }
                        }
                    }
                  }
    else if(v==2){
        cout<<"1- Cipher a message"<<endl;
        cout <<"2- Decipher a message"<<endl;
        cout <<"3- End"<<endl;
        cout <<"-----------------------"<<endl;
        cout <<"Choose what you want [1/2/3] : ";
        cin >>x;
        if(x==1){
                int k;
                string y,result;
                cout<<"Write the message you want to cipher : ";
                cin.ignore();
                getline(cin,y);
                cout<<"Enter the number of shift : ";
                cin>>k;
                for (int i=0;i<y.length();i++){
                        if (y[i] == ' ')
			continue;
                    result= (char)((y[i]+k-97)%26 +97);
                    cout<<result;

                    }
                }
        if(x==2){
            int f;
            string h,result;
            cout<<"Enter the message you want to decipher : ";
            cin.ignore();
            getline(cin,h);
            cout<<"Enter the number of shift : ";
            cin>>f;
            for (int i=0;i<h.length();i++){
                    result = char((h[i]-f-97)%26 +97);
                    cout<<result;

                    }
                }

            }
        if(x==3){
            cout<<"Good bye"<<endl;
            }
  else if (v==3){
            int q;
            cout<<"1- Cipher a message"<<endl;
            cout <<"2- Decipher a message"<<endl;
            cout <<"3- End"<<endl;
            cout <<"-----------------------"<<endl;
            cout <<"Choose what you want [1/2/3] : ";
            cin >>q;
            if (q==1){
               string l;
               cout<<"Enter the message you want to cipher it(CIPTAL LETTERS ONLY) : ";
               cin.ignore();
               getline(cin,l);
               for (int i=0;i<l.length();i++){
                    if (l[i] == ' ')
			continue;
                   cout<<(char)(l[i] = ((25*((l[i]+'A')-25)) % 26) + 'A');
                   }
                }
            if (q==2){
                string a;
                    cout<<"Write the message you want to decipher (CAPITAL LETTERS ONLY) : ";
                    cin.ignore();
                    getline(cin,a);
                    for (int i=0;i<a.length();i++){
                        cout<<(char)(a[i] = ((25*((a[i]+'A')+27)) % 26) + 'A');
                        }
                    }
            if(q==3){
                    cout<<"Good bye"<<endl;

            }
       }
  else if (v==4){
            int a;
    string c, rst;
    cout <<"1- Cipher a message"<<endl;
    cout <<"2- Decipher a message"<<endl;
    cout <<"3- End"<<endl;
    cout <<"------------------"<<endl;
    cout <<"Choose what you want [1/2/3] : ";
    cin  >> a;
    if (a==1){
            cout<<"Write the message you want to Cipher : ";
            cin.ignore();
            getline(cin,c);
            for(int i=0 ; i<c.length();i++){
                    if (c[i] == ' ')
			            continue;
                    if(c[i]<='m'){
                            cout<<(char)(c[i]+13);
                    }
                    else if(c[i]>'m'){
                            cout<<(char)(c[i]-13);
                    }
                }
            }
    else if (a==2){
            cout<<"Write the message you want to Decipher : ";
            cin.ignore();
            getline(cin,c);
            for(int i=0 ; i<c.length();i++){
                    if(c[i]<='m'){
                            cout<<(char)(c[i]+13);
                    }
                    else if(c[i]>'m'){
                            cout<<(char)(c[i]-13);
                    }
                }
            }
    else if(a==3){
        cout<<"Good bye"<<endl;

    }
   }
  else if(v==5){
    int j;
    string f;
    cout <<"1- Cipher a message"<<endl;
    cout <<"2- Decipher a message"<<endl;
    cout <<"3- End"<<endl;
    cout <<"------------------"<<endl;
    cout <<"Choose what you want [1/2/3] : ";
    cin  >> j;
    if(j==1){
            cout<<"Write the message you want to cipher : ";
            cin.ignore();
            getline(cin,f);
            for (int i=0 ;i<f.length();i++){
                    if (f[i] == ' ')
			continue;
                if (f[i]=='a'){
                    cout<<"aaaaa";
                }
                else if(f[i]=='b'){
                    cout<<"aaaab";
                }
                else if(f[i]=='c'){
                    cout<<"aaaba";
                }
                else if(f[i]=='d'){
                    cout<<"aaabb";
                }
                else if(f[i]=='e'){
                    cout<<"aabaa";
                }
                else if(f[i]=='f'){
                    cout<<"aabab";
                }
                else if(f[i]=='g'){
                    cout<<"aabba";
                }
                else if(f[i]=='h'){
                    cout<<"aabbb";
                }
                else if(f[i]=='i'){
                    cout<<"abaaa";
                }
                else if(f[i]=='j'){
                    cout<<"abaab";
                }
                else if(f[i]=='k'){
                    cout<<"ababa";
                }
                else if(f[i]=='l'){
                    cout<<"ababb";
                }
                else if(f[i]=='m'){
                    cout<<"abbaa";
                }
                else if (f[i]=='n'){
                    cout<<"abbab";
                }
                else if(f[i]=='o'){
                    cout<<"abbba";
                }
                else if(f[i]=='p'){
                    cout<<"abbbb";
                }
                else if(f[i]=='q'){
                    cout<<"baaaa";
                }
                else if(f[i]=='r'){
                    cout<<"baaab";
                }
                else if(f[i]=='s'){
                    cout<<"baaba";
                }
                else if(f[i]=='t'){
                    cout<<"baabb";
                }
                else if(f[i]=='u'){
                    cout<<"babaa";
                }
                else if(f[i]=='v'){
                    cout<<"babab";
                }
                else if(f[i]=='w'){
                    cout<<"babba";
                }
                else if(f[i]=='x'){
                    cout<<"babbb";
                }
                else if(f[i]=='y'){
                    cout<<"bbaaa";
                }
                else if(f[i]=='z'){
                    cout<<"bbaab";
                }
            }
         }
    else if(j==3){
            cout<<"Good bye";
            cin>>f;
    }


  }
 if(v==8){    int x;
    string s;
    cout <<"1- Cipher a message"<<endl;
    cout <<"2- End"<<endl;
    cout <<"------------------"<<endl;
    cout <<"Choose what you want [1/2] : ";
    cin >>x;
    if (x==1){
        cout<<"Write the message you want to cipher : ";
        cin.ignore();
        getline(cin,s);
        for(int i=0;i<s.length();i++){
                if (s[i] == ' ')
			continue;
                if(s[i]=='a'){
                    cout<<".- ";
                }
                else if (s[i]=='c'){
                    cout<<"-.-. ";
                }
                else if (s[i]=='d'){
                    cout<<"-.. ";
                }
                else if (s[i]=='e'){
                    cout<<". ";
                }
                else if (s[i]=='f'){
                    cout<<"..-. ";
                }
                else if (s[i]=='g'){
                    cout<<"---. ";
                }
                else if (s[i]=='h'){
                    cout<<".... ";
                }
                else if (s[i]=='i'){
                    cout<<".. ";
                }
                else if (s[i]=='j'){
                    cout<<".--- ";
                }
                else if (s[i]=='k'){
                    cout<<"-.- ";
                }
                else if (s[i]=='l'){
                    cout<<".-.. ";
                }
                else if (s[i]=='m'){
                    cout<<"-- ";
                }
                else if (s[i]=='n'){
                    cout<<"-. ";
                }
                else if (s[i]=='o'){
                    cout<<"--- ";
                }
                else if (s[i]=='p'){
                    cout<<".--. ";
                }
                else if (s[i]=='q'){
                    cout<<"--.- ";
                }
                else if (s[i]=='r'){
                    cout<<".-. ";
                }
                else if (s[i]=='s'){
                    cout<<"... ";
                }
                else if (s[i]=='t'){
                    cout<<"- ";
                }
                else if (s[i]=='u'){
                    cout<<"..- ";
                }
                else if (s[i]=='v'){
                    cout<<"...- ";
                }
                else if (s[i]=='w'){
                    cout<<".-- ";
                }
                else if (s[i]=='x'){
                    cout<<"-..- ";
                }
                else if (s[i]=='y'){
                    cout<<"-.-- ";
                }
                else if (s[i]=='z'){
                    cout<<"--.. ";
                }


    }


        }
      else if(x==2){
        cout<<"Good bye"<<endl;
      }
 }
 else if(v==6){
    int x;
    cout <<"1- Cipher a message"<<endl;
    cout <<"2- Decipher a message"<<endl;
    cout <<"3- End"<<endl;
    cout <<"------------------"<<endl;
    cout <<"Choose what you want [1/2/3] : ";
    cin >>x;
    if(x==1){
    string a;
    cout<<"Write the message you want to cipher : ";
    cin>>a;
    const int ARRAY_LEN = 26;
    for(int i = 0; i < a.length();i++){
            if (a[i] == ' ')
			continue;
	    cout << (char)(a[i] + 2);

    }
    }
    if(x==2){
        string o;
        cout<<"Write the message you want to Decipher : ";
        cin>>o;
        for (int i=0;i<o.length();i++){
            cout << (char)(o[i] - 2);

        }
     }
    else if(x==3){
        cout<<"Good bye"<<endl;
    }
 }
else if(v==7){
        int x,row,col,ceil;
        string w;
        cout <<"1- Cipher a message"<<endl;
        cout <<"2- End"<<endl;
        cout <<"------------------"<<endl;
        cout <<"Choose what you want [1/2] : ";
        cin >>x;
        if (x==1){
              cout<<"Write the message you want to cipher : ";
              cin>>w;
              for(int i=0;i<w.length();i++){
                    if (w[i] == ' ')
			continue;
                      row =((w[i] - 'a') / 5) + 1;
                      col = ((w[i] - 'a') % 5) + 1;
                      cout<<row;
                      cout<<col;
                    }
                }
    else if (x==2){
            cout<<"Good bye"<<endl;
    }
}
 else if (v==10){
    int i,j,len,rails,count,code[100][1000];
    char str[1000];
    cout<<"Write the message to Cipher : ";
    cin>>str;
    len=strlen(str);
    cout<<"Enter number of rails : ";
    cin>>rails;
    for(i=0;i<rails;i++)
    {
        for(j=0;j<len;j++)
        {
            code[i][j]=0;
        }
    }
count=0;
j=0;
while(j<len)
{
if(count%2==0)
{
    for(i=0;i<rails;i++)
    {
        //strcpy(code[i][j],str[j]);
        code[i][j]=(int)str[j];
        j++;
    }

}
else
{

    for(i=rails-2;i>0;i--)
    {
        code[i][j]=(int)str[j];
    j++;
    }
}

count++;
}

for(i=0;i<rails;i++)
{
    for(j=0;j<len;j++)
    {
        if(code[i][j]!=0)
        printf("%c",code[i][j]);
    }
    }
  }
 else if (v==9){
            string ll;
    cout<<"Write the message to cipher : ";
   cin>>ll;
  char key[] = "ABCDEFGH";

  for(int i = 0; i < sizeof(ll)-1; i++) {
        if (ll[i] == ' ')
			continue;
      ll[i] = ll[i] ^ key[i];
  }

  cout<<ll;

  return 0;
}


 }








