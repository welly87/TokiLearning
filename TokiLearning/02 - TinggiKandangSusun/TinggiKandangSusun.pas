var
	tabel : longint;
	lantai, x, y, a, max: longint;
	jumlah: int64;
begin
	readln(x, y);
	tabel := 0;
	lantai := 0;
	jumlah := 0;
	while x > y do
	begin
		max := 0;
		for a := 1 to y do
		begin
			readln(tabel);
			if tabel > max then max := tabel;
		end;
		inc(lantai);
		x := x - y;
		jumlah := jumlah + max;
	end;

	max := 0;
	for a := 1 to x do
	begin
		readln(tabel);
		if tabel > max then max := tabel;
	end;
	jumlah := jumlah + max + lantai + 2;
	writeln(jumlah);
end.