#include<iostream>
#include<array>
#include<vector>
#include<iterator>
#include<functional>

#define ascending  0
#define descending 1

#define display(arr) do{\
                       for(auto it : arr)\
                       {std::cout<<it<<"\n";}\
                       std::cout<<"\n\n" ;\
                       }while(0) ;

#define input(arr) do{\
                       for(auto & it : arr)\
                       {std::cout<<"Enter\n";std::cin>>it;}\
                        std::cout<<"\n\n" ;\
                       }while(0) ;