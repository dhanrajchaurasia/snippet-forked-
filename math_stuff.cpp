typedef long long LL;

// compute nth fibonacci number modulo m in O(log n)
LL fib(LL n, LL m) {
  if (!n) return 0;
  LL a=1,b=0,c=0,d=1;
  LL a1=1,b1=1,c1=1,d1=0;
  LL a2,b2,c2,d2;
  n -= 1;
  while (n) {
    if (n & 1) {
      a2=(a*a1+b*c1)%m;
      b2=(a*b1 + b*d1)%m;
      c2=(c*a1 + d*c1)%m;
      d2=(c*b1 + d*d1)%m;
      a=a2;b=b2;c=c2;d=d2;
    }
    n >>= 1;
    a2=(a1*a1 + b1*c1)%m;
    b2=(a1*b1 + b1*d1)%m;
    c2=(c1*a1 + d1*c1)%m;
    d2=(c1*b1 + d1*d1)%m;
    a1=a2;b1=b2;c1=c2;d1=d2;
  }
  return a;
}

