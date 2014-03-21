program pecahan;
var
	a, b, c, d, e, f, x, temp : int64;
	
function fpb(x, y : int64) : int64;
var
	r : int64;
begin
	while y <> 0 do
	begin
		r := x mod y;
		x := y;
		y := r;
	end;
	
	fpb := x;
end;

begin
	readln(a, b);
	readln(c, d);
	
	if b = 0 then
	begin
		e := c;
		f := d;
	end
	else
	if d = 0 then
	begin
		e := a;
		f := b;
	end
	else
	begin
		x := fpb(b, d);
		b := b div x;
		d := d div x;
		
		a := a * d;
		c := c * b;
		
		f := b * d * x;
		e := a + c;
	end;
	
	while fpb(e, f) <> 1 do
	begin
		temp := fpb(e, f);
		e := e div temp;
		f := f div temp;
	end;
	
	if e = f then writeln('1')
	else writeln(e, ' ', f);
end.