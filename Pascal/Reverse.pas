program reverse;
var
	rev:ansistring;
	a:longint;
begin
	readln(rev);
	for a:= length(rev) downto 1 do
		begin
			write(rev[a]);
		end;
		writeln;
end.