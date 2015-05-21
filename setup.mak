#	Build MSI packages

WIX_LINK = light.exe -ext WixUIExtension -ext WixUtilExtension -dWixUILicenseRtf=docs\eula.rtf

msi : groestlcoin-multisig_x86.msi groestlcoin-multisig_x64.msi

groestlcoin-multisig_x86.msi : groestlcoin-multisig.wxs x86_R_St\groestlcoin-multisig.exe
	candle.exe -o groestlcoin-multisig-x86.wixobj groestlcoin-multisig.wxs
	$(WIX_LINK)  -out $@ groestlcoin-multisig-x86.wixobj

groestlcoin-multisig_x64.msi : groestlcoin-multisig.wxs x64_R_St\groestlcoin-multisig.exe
	candle.exe -arch x64 -o groestlcoin-multisig-x64.wixobj groestlcoin-multisig.wxs
	$(WIX_LINK) -out $@ groestlcoin-multisig-x64.wixobj


