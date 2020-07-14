//#include "visBin.h"
{
  gROOT->LoadMacro("visBin.C");
  gROOT->LoadMacro("./wfSimulation/src/waveformSimple.cpp");
  //visBin t("../root_data/Run_1_Data_9_15_2016_Binary/Run_1_Data_9_15_2016_Binary.bin.root");
  //visBin t("../root_data/Run_2_Data_11_17_2016_Binary/Run_2_Data_11_17_2016_Binary.bin.root");
  //visBin t("../root_data/Run_5_Data_11_17_2016_Binary/Run_5_Data_11_17_2016_Binary.bin.root");
  //visBin t("../root_data/Run_6_Data_11_17_2016_Binary/Run_6_Data_11_17_2016_Binary.bin.root");
  //LED_EA3501  runs 001-010
  //LED_EA3505  runs 011-014
  //SR90_EA3501 runs 015-018
  //visBin t("../root_data/Run_001_Data_7_9_2020_Binary/Run_001_Data_7_9_2020_Binary.bin.root");
  visBin t("../root_data/Run_007_Data_7_9_2020_Binary/Run_007_Data_7_9_2020_Binary.bin.root");
  //visBin *t = new visBin("../root_data/Run_001_Data_7_9_2020_Binary/Run_001_Data_7_9_2020_Binary.bin.root");
  
  Int_t evID;
  Int_t chID;
  TString key_lineOn;
  TString key_printInfoTrue;
  TString fileAnaSetups;
  evID = 3;
  chID = 1;
  key_lineOn = "yes";
  key_printInfoTrue = "printInfoTrue";
  //t.DrawOneChannel(evID, chID);
  //fileAnaSetups = "anaSetup.dat";

  //LED_EA3501
  fileAnaSetups = "anaSetup_LED_EA3501.dat";
  //LED_EA3505
  //fileAnaSetups = "anaSetup_LED_EA3505.dat";
  //SR90_EA3501
  //fileAnaSetups = "anaSetup_SR90_EA3501.dat";
  t.DrawOneChannel_waveformSimple(evID, chID, key_lineOn, key_printInfoTrue,fileAnaSetups);
  //t.Loop();
}

