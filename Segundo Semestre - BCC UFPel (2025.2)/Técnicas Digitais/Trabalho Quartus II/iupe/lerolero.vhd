library ieee;
use ieee.std_logic_1164.all;

entity lerolero is 
port 
(a:in std_logic;
 b:out std_logic);
end lerolero;

architecture arq_lerolero of lerolero is begin
b<=a; --b recebe a(lógica)
end arq_lerolero;