program magicsquare;
var
	t, n, i : longint;
function sum_of_line(x: longint) : int64;
begin
	//sum_of_line := (x * (1 + x * x)) div 2;
	sum_of_line := (round(exp(3*ln(x))) + x) div 2;
end;

begin
	readln(n);
	for i := 1 to n do
	begin
		readln(t);
		writeln(sum_of_line(t));
	end;
end.