%interpolación polinomial
disp('interpolacion polinomial');
n=input('n=');%grado del polinomio
xr=input('xr=');%valor de la abcisa
x=zeros(1,n+1);
y=zeros(1,n+1);
for i=1:n+1
    x(i)=input(sprintf('x(%d)=', i));
    y(i)=input(sprintf('y(%d)=', i));
end
yr=0;
for i=1:n+1
    NL=1;
    DL=1;
    for j=1:n+1
        if i~=j
            NL=NL*(xr-x(j));
            DL=DL*(x(i)-x(j));
        end
    end
    yr=yr+(NL/DL)*y(i);
end
disp(yr);





