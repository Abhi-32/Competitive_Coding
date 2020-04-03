  #include <bits/stdc++.h>
    using namespace std ;
     
    int main(){
        int t,n ;
        cin>> t ;
        while( t-- ){
            cin >> n ;
            int arr[n] ;
            for( int i = 0; i < n; i++ )
                cin >> arr[i] ;
            int a,b, c = 0 ;
            bool done  = true ;
            for( int i =0; i < n ; i++ ){
                if( arr[i] < c ){
                    done = false ;
                    break ;
                }
                if( i < n/2 ) c++ ;
                else if( i == n/2 and n%2==0 ) c-= 2 ;
                else c-- ;
            }
            if( n % 2 == 0 and !done ){
                c = 0 ;
                done = true ;
                for( int i = n-1 ; i >= 0 ; i-- ){
                    if( arr[i] < c ){
                        done = false ;
                        break ;
                    }
                    if( n-i-1 < n/2 ) c++ ;
                    else if( n-i-1 == n/2 ) c-=2 ;
                    else c-- ;
                }
            }
            if( done )
            cout<< "Yes" ;
            else
            cout<< "No" ;
            cout<< endl ;
        }
}