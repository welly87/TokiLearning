program pemberat;
var
	b, k : int64;

function pkt(y: longint) : int64;
var j : longint;
begin
	pkt	:= 1;
	for j := 1 to y do
	pkt := pkt shl 1;
end;

procedure bin(var x : int64);
var 
	s, c : string;
	m, i, p, temp : longint;
begin
	s := '';
	
	while x >= 1 do
	begin
		m := x mod 2;
		str(m, c);
		s := c + s;
		x := x div 2;
	end;
	
	p := length(s) - 1;
	
	for i := 1 to length(s) do
	begin
		val(s[i], m, temp);
		if m = 1 then
		writeln(pkt(p));
		dec(p);
	end;
end;

begin
	readln(b);
	readln(k);
	
	b := k - b;
	bin(b);
	
	{ readln; }
end.