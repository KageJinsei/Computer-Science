library ieee;
use ieee.std_logic_1164.all;

entity meow is port 
(a:in std_logic;
 c:in std_logic;
 b:in std_logic;
 s:out std_logic);
end meow;

architecture arq_meow of meow is begin
s<=not(a and b) or (not c); --b recebe a(lógica) | (nand) para not/and
end arq_meow;