library ieee;
use ieee.std_logic_1164.all;

entity turtle is port 
(a:in std_logic;
 c:in std_logic;
 b:in std_logic;
 s:out std_logic);
end turtle;

architecture arq_turtle of turtle is begin
s<=not(a and b) or (not c); --b recebe a(lógica) | (nand) para not/and
end arq_turtle;