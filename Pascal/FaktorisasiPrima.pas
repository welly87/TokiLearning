program fakprim;
var
	n, i, j, cnt, cnt2	: longint;
	a, b : array[1..10000] of longint;
	prim : boolean;

function cekprim(z:longint):boolean;
var cprim	:	boolean;
begin
	cprim := true;
	for i := 2 to trunc(sqrt(z)) do
	begin
		if z mod i = 0 then
		begin
			cprim := false;
			break;
		end;
	end;
	
	if cprim = true then
		cekprim := true
	else cekprim := false;
end;

procedure listprima(x : longint);
begin
	cnt := 0;
	for i := 2 to x do
	begin
		for j := 2 to i do
		begin
			if i = j then 
				prim := true
			else
			if i mod j = 0 then
			begin
				prim := false;
				break;
			end;
		end;
			
		if prim = true then
		begin
			inc(cnt);
			a[cnt] := i;
		end;
			
	end;
end;

procedure primfak;
begin
	cnt2 := 0;
	for i := 1 to cnt do
	begin
		if n mod a[i] = 0 then
		begin
			inc(cnt2);
			b[cnt2] := a[i];
		end;
	end;
end;

procedure pkt(y : longint);
var asli, pngkt : longint;
begin
	asli := y;
	pngkt := 0;
	while (y <= n) and (n mod y = 0) do
	begin
		y := y * asli;
		inc(pngkt);
	end;
	
	if pngkt = 1 then write('')
	else write('^',pngkt,'');
end;


begin
	readln(n);
	if n = 1 then
	begin
		writeln(n);
	end
	else
	if cekprim(n) = true then
	begin
		writeln(n);
	end
	else
	begin
		listprima(n);
		primfak;
		for i := 1 to cnt2 do
		begin
			if (i = cnt2) then
			begin
				write(b[i]);
				pkt(b[i]);
				writeln;
			end
			else
			begin
				write(b[i]);
				pkt(b[i]);
				write(' x ');
			end;
		end;
	end;
end.