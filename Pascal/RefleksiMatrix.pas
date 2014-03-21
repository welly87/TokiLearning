program refleksi_matriks;
type tarr = array[1..100,1..100] of integer;
var y,x,n : integer;
ar1, ar2, ar3 : tarr;

function cekarr(cr1, cr2 : tarr) : boolean;
var bol : boolean;
begin
	for y := 1 to n do
	begin
		for x := 1 to n do 
			if cr1[y, x] = cr2[y,x] then
				bol := true
			else
			begin
				bol := false;
				break;
			end;
			
			if bol then continue
			else break;
	end;
	cekarr := bol;
end;

begin
	readln(n, n);
	
	for y := 1 to n do
		for x:= 1 to n do 
			read(ar1[y, x]);
	
	readln(n, n);
	
	for y := 1 to n do
		for x:= 1 to n do 
			read(ar2[y, x]);
	
	ar3 := ar1;
	
	if cekarr(ar3, ar2) then
		writeln('identik')
	else
	begin
		for y := 1 to n do
			for x := n downto 1 do
				ar3[y, x] := ar1[y, n + 1- x];
		if cekarr(ar3, ar2) then
			writeln('vertikal')
		else
		begin
			for y := n downto 1 do
				for x := 1 to n do 
					ar3[y,x] := ar1[n+1-y,x];
			if cekarr(ar3, ar2) then
				writeln('horisontal')
			else
			begin
				for y := n downto 1 do 
					for x := n downto 1 do 
						ar3[x, y] := ar1[n+1-y, n+1-x];
				if cekarr(ar3, ar2) then
					writeln('diagonal kiri bawah')
				else 
				begin
					for y := 1 to n do
						for x := 1 to n do 
							ar3[x, y] := ar1[y, x];
					if cekarr(ar3, ar2) then
						writeln('diagonal kanan bawah')
					else
						writeln('tidak identik')
					end;
				end;
			end;
		end;
end.