t=0.01;
x=rand(3,2)*100;
v=rand(3,2)*40;
while 1
	view(x);
	[x,v]=model(x,v,t);
	pause(0.01)
end

