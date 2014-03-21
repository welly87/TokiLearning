var
	s1, s2, s3, s4:string;
begin
	readln(s1);
	readln(s2);
	readln(s3);
	readln(s4);
	delete(s1, pos(s2,s1),length(s2));
	insert(s4, s1, pos(s3,s1) + length(s3));
	writeln(s1);
end.