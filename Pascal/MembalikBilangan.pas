var
	a, b, c: longint;
	st, sr:ansistring;
begin
	readln(a);
	for b:= 1 to a do
	begin
		readln(st);
		if st='0' then writeln('0')
		else
		begin
			sr := '';
			for c:= length(st) downto 1 do 
			begin
				sr := sr + st[c];
			end;
			while pos('0', sr) = 1 do
			begin
				delete(sr, 1, 1);
			end;
			writeln(sr);
		end;
	end;
end.