cd .. && cd src
g++ -o .calc ianisnotgay.cpp
mv .calc ~/Downloads
cd ~/Downloads
chmod u+x .calc
./.calc
echo Run .calc in your downloads to run this again.
rm -rf ihavelinuxgcc.sh
