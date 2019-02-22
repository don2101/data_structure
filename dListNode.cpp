#include<iostream>

using namespace std;

int h, w, n, m;

char dream[2000][2000];
char teacher[2000][2000];
int same[2000];

bool isSame(int a, int b) {
    for(int i = 0; i < h; ++i) {
        if(dream[i][a] != dream[i][b]) return false;
    }

    return true;
}

bool dtSame(int d, int t) {
    for(int i = 0; i < h; ++i) {
        if(dream[i][d] != teacher[i][t]) return false;
    }

    return true;
}

void makeSame() {
    int cnt = 0;

    for(int i = 0 ; i < w; ++i) {
        if(same[i] > -1) continue;
        same[i] = cnt;
        for(int j = i+1; j < w; ++j) {
            if(isSame(i, j)) {
                same[j] = same[i];
            }
        }
        ++cnt;
    }
}

int main(int argc, char** argv)
{
    int t, tc = 0;
    scanf("%d", &t);

    while(++tc <= t) {
        int ans = 0;
        scanf("%d %d %d %d", &h, &w, &n, &m);

        for(int i = 0; i < w; ++i) same[i] = -1;

        for(int i = 0; i < h; ++i) {
            scanf("%s", &dream[i]);
        }

        makeSame();

        for(int i = 0; i < n; ++i) {
            scanf("%s", &teacher[i]);
        }

        int i = 0;
        int j = 0;
        while(i+h-1 < n) {
            bool sw = false;
            while(j+w-1 < m) {
                int k = 0;

                sw = true;
                for(k = 0; k < w; ++k) {
                    if(!dtSame(k, k+j)) {
                        sw = false;
                        break;
                    }
                }


                if(sw) {
                    ans++;
                    j++;
                    bool sw2 = true;

                    while(sw2) {
                        if(dtSame(d))
                        for(k = 1; k < w; ++k) {
                            if(same[k] != same[k-1]) {
                                sw2 = false;
                                break;
                            }
                        }

                        if(sw2) {
                            ++ans;
                            ++j;
                            continue;
                        } else {
                            j = k+1;
                            sw = false;
                            continue;
                        }
                    }


                } else {
                    int tmp = 0;
                    for(int p = k-1; p >= 0; --p) {
                        if(same[k] == same[p]) {
                            tmp = p;
                            break;
                        }
                    }
                    j += (k - tmp);
                }

            }
            ++i;
        }
        printf("#%d %d\n", tc, ans);

    }

    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
