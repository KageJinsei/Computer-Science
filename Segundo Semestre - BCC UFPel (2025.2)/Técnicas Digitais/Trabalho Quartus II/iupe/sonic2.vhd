ntity sonic2 is port 
(a:in bit;
 b:in bit;
 c:in bit;
 z:out bit);
end sonic2;

architecture arq_sonic2 of sonic2 is begin
z<=not(a and b) or (not(not c));
end arq_sonic2;
