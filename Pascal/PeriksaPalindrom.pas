var
	st, ts, ss, hasil : ansistring;
	y, a, leng : integer;
begin
	
	readln(st);
	
	hasil := '';
	st := st + ' ';
	
	while (length(st) <> 0) do
	begin
		ss := '';
		y := 1;
		
		while st[y] <> ' ' do
		begin
			ss := ss + st[y];
			inc(y);
		end;
		delete(st, 1, y);
		
		leng := length(ss);
		ts := '';
		
		for a := leng downto 1 do
		begin
			ts := ts + ss[a];
		end;
		if ss = ts then
			hasil := hasil + ss + ' ';
	end;
	delete(hasil, length(hasil), 1);
	writeln(hasil);
end.