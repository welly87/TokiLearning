program subpersegi;
var 
	n : longint;
function sum_of_square(base : longint) : longint;
begin
	{ sum_of_square := (base * (base + 1) * ( 2 * base + 1) / 6); }
	sum_of_square := (base * (base + 1) * ( 2 * base + 1) div 6);
end;
begin
	//1/6 n( n + 1 )( 2n + 1 )
	
	readln(n);
	writeln(sum_of_square(n));
end.