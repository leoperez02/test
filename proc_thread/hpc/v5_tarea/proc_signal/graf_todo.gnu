set key bmargin left horizontal Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid
set title "Seno" 
set title  font ",20" norotate
x = 0.0
plot [0:512] 'seno.dat' with lines, 'hamm.dat' with lines, 'prod.dat' with lines  
