program empatatotujuh;
var
	t, i, n : longint;
{ 
	ada formula utk deret aritmatika 
	http://indonesiamathematicclub.blogspot.com/2012/06/materi-pola-barisan-dan-deret-bilangan.html
}

function sn(x, y : longint) : int64;
var 
	n4 : int64;
begin
		n4 := x div y;
		if x >= y then
			sn := (2 * y + (n4 - 1) * y) * n4 div 2
		else
			sn := 0;
end;

begin
	readln(t);
	for i := 1 to t do
	begin
		readln(n);
		writeln(sn(n, 4) + sn(n, 7) - sn(n, 28));
	end;
end.