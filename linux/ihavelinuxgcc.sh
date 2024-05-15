$x &> /dev/null
cd .. && cd src
g++ -o calc ianisnotgay.cpp
chmod u+x calc
./calc
echo Go to the 'src' folder and find the calc application. You can move it where you like!
read -p "To run it, just type in ./calc in the folder it's in, in your terminal." -n 1 -s
rm -rf ihavelinuxgcc.sh
