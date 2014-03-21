program subsquare;
var 
	cnt, n : integer;

function square(base: integer) : longint;
begin
	cnt := 1;
	square := 0;
	while cnt <= base do
	begin
		square := square + sqr(cnt);
		inc(cnt);
	end;
end;

begin
	readln(n);
	writeln(square(n));
end.