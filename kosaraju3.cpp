#include<bits/stdc++.h>
#define ll long long
#define MAXN 200000

using namespace std;

///O(V+E)
vector< ll > graph[ MAXN + 1 ], grapht[ MAXN + 1 ],gp;
bool visited[ MAXN + 1 ];


void dfs1( ll S ) {
    visited[ S ] = true;
    ll i;
    for ( i = 0; i < graph[ S ].size(); ++i ) {
        if ( !visited[ graph[ S ][ i ] ] ) {
            dfs1( graph[ S ][ i ] );
        }
    }
    gp.push_back( S );
}

void dfs2( int S, int c ) {
    visited[ S ] = false;

    ll i;
    for ( i = 0; i < grapht[ S ].size(); ++i ) {
        if ( visited[ grapht[ S ][ i ] ] ) {
            dfs2( grapht[ S ][ i ], c );
        }
    }
}

int main()
{
    int t, i, N, v, j, compon, M, u, count, lim;
    scanf( "%d%d", &N, &M );
    for ( i = 1; i <= N; ++i ) {
        visited[ i ] = false;
        graph[ i ].clear();
        grapht[ i ].clear();

    }
    for ( i = 1; i <= M; ++i ) {
        scanf( "%d%d", &u, &v );
        graph[ v ].push_back( u );
        grapht[ u ].push_back( v );
    }
    for ( i = 1; i <= N; ++i ) {
        if ( !visited[ i ] ) {
            dfs1( i );
        }
    }
    compon = 0;
    for ( i = gp.size() - 1; i >= 0; --i ) {
        if ( visited[ gp[ i ] ] ) {
            dfs2( gp[ i ], compon++ );
        }
    }

    cout<<compon<<endl;

}
