@Echo off
if exist NitroHax.nds del NitroHax.nds
if exist NitroHax_NTR.nds del NitroHax_NTR.nds
make
if exist NitroHax.nds patch_ndsheader_dsiware.py NitroHax.nds --mode dsi --maker 01 --code CHCT --title "NTR NitroHax" --out NitroHax_NTR.nds
if exist NitroHax_NTR.nds makerom -srl NitroHax_NTR.nds
pause