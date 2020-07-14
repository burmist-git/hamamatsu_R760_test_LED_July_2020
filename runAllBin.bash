#LED_EA3501
#cp anaSetup_LED_EA3501.dat anaSetup.dat  
#cp runListBin_LED_EA3501.dat runListBin.dat


#LED_EA3505
#cp anaSetup_LED_EA3505.dat anaSetup.dat  
#cp runListBin_LED_EA3505.dat runListBin.dat
#root -l -b -q fileListAndBashGenBin.C
#source convertUSBWC2root8ChannelsBin.bash
#root -l -b -q fileListAndBashGenBin.C
#source runL1Bin.bash
#root -l -b -q fileListAndBashGenBin.C


#SR90_EA3501
#cp anaSetup_SR90_EA3501.dat anaSetup.dat  
#cp runListBin_SR90_EA3501.dat runListBin.dat
#root -l -b -q fileListAndBashGenBin.C
#source convertUSBWC2root8ChannelsBin.bash
#root -l -b -q fileListAndBashGenBin.C
#source runL1Bin.bash
#root -l -b -q fileListAndBashGenBin.C


#L2

#LED_EA3501
cp runListBin_LED_EA3501.dat runListBin.dat
root -l -b -q fileListAndBashGenBin.C
cp runL2Bin.bash runL2Bin_LED_EA3501.bash

#LED_EA3505
cp runListBin_LED_EA3505.dat runListBin.dat
root -l -b -q fileListAndBashGenBin.C
cp runL2Bin.bash runL2Bin_LED_EA3505.bash

#SR90_EA3501
cp runListBin_SR90_EA3501.dat runListBin.dat
root -l -b -q fileListAndBashGenBin.C
cp runL2Bin.bash runL2Bin_SR90_EA3501.bash
