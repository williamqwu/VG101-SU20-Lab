function view(x)
	clf;
	padding=10;
	axis equal
	axis ([min(x(:,1))-padding max(x(:,1))+padding min(x(:,2))-padding max(x(:,2))+padding ]);
	hold on;
	r=1;
	drawCircle(x(1,:),r,'r');
	drawCircle(x(2,:),r,'g');
	drawCircle(x(3,:),r,'b');
	hold off;
end

function drawCircle(coor,r,color)
	t = (0:0.1:1)'*2*pi;
	x = coor(1)+cos(t)*r;
	y = coor(2)+sin(t)*r;
	%disp([x y]);
	fill(x,y,color);
end