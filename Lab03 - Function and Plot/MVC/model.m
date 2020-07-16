function [x,v]=model(x,v,t)
	x=x+v*t;
	v=v+acc(x)*t;
end

function acceleration=acc(x)
	x1=x(1,:);
	x2=x(2,:);
	x3=x(3,:);
	m=1;
	acceleration=[F(x1,x2)+F(x1,x3);F(x2,x1)+F(x2,x3);F(x3,x1)+F(x3,x2)]/m;
end

function force=F(x1,x2)%x1
	G=5000;m1=1;m2=1;
	force=G*m1*m2*(x2-x1)/norm(x1-x2)^3;
end