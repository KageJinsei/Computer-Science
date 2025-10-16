entity sonic is port 
(a:in bit;
 b:in bit;
 c:in bit;
 s:out bit);
end sonic;

architecture arq_sonic of sonic is begin
s<=not(a and b) or (not c);
end arq_sonic;
