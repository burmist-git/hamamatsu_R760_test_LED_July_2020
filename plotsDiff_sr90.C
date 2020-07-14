//C, C++
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

#include <time.h>

using namespace std;

Int_t plotsDiff_sr90(){

  TString fileN1;
  TString fileN2;
  TString fileN3;
  TString fileN4;

  fileN1 = "../root_data_L2/Run_015_Data_7_11_2020_Binary/Run_015_Data_7_11_2020_Binary.bin.L1.root.L2.root";
  fileN2 = "../root_data_L2/Run_016_Data_7_11_2020_Binary/Run_016_Data_7_11_2020_Binary.bin.L1.root.L2.root";
  fileN3 = "../root_data_L2/Run_017_Data_7_11_2020_Binary/Run_017_Data_7_11_2020_Binary.bin.L1.root.L2.root";
  fileN4 = "../root_data_L2/Run_018_Data_7_11_2020_Binary/Run_018_Data_7_11_2020_Binary.bin.L1.root.L2.root";

  TFile *f1 = new TFile(fileN1.Data());
  TFile *f2 = new TFile(fileN2.Data());
  TFile *f3 = new TFile(fileN3.Data());
  TFile *f4 = new TFile(fileN4.Data());

  //h1_deltaTimeConstTh_cut_ch_1 h1_amplMax_cut_ch_1 h1_sigChargeInWindowVT_cut_ch_1
  //TH1D *h1_1 = (TH1D*)f1->Get("h1_deltaTimeConstTh_cut_ch_1");
  //TH1D *h1_2 = (TH1D*)f2->Get("h1_deltaTimeConstTh_cut_ch_1");
  //TH1D *h1_3 = (TH1D*)f3->Get("h1_deltaTimeConstTh_cut_ch_1");
  TH1D *h1_1 = (TH1D*)f1->Get("h1_amplMax_cut_ch_0");
  TH1D *h1_2 = (TH1D*)f2->Get("h1_amplMax_cut_ch_0");
  TH1D *h1_3 = (TH1D*)f3->Get("h1_amplMax_cut_ch_0");
  TH1D *h1_4 = (TH1D*)f4->Get("h1_amplMax_cut_ch_0");
  //TH1D *h1_1 = (TH1D*)f1->Get("h1_sigChargeInWindowVT_cut_ch_0");
  //TH1D *h1_2 = (TH1D*)f2->Get("h1_sigChargeInWindowVT_cut_ch_0");
  //TH1D *h1_3 = (TH1D*)f3->Get("h1_sigChargeInWindowVT_cut_ch_0");
  //TH1D *h1_4 = (TH1D*)f4->Get("h1_sigChargeInWindowVT_cut_ch_0");

  //TH1D *h1_1 = (TH1D*)f1->Get("h1_sigChargeInWindowVT_ch_4");
  //TH1D *h1_2 = (TH1D*)f2->Get("h1_sigChargeInWindowVT_ch_4");
  //TH1D *h1_3 = (TH1D*)f3->Get("h1_sigChargeInWindowVT_ch_4");

  //TH1D *h1_1 = (TH1D*)f1->Get("h1_timeCFD_ch_4");
  //TH1D *h1_2 = (TH1D*)f2->Get("h1_timeCFD_ch_4");
  //TH1D *h1_3 = (TH1D*)f3->Get("h1_timeCFD_ch_4");

  //TH1D *h1_1 = (TH1D*)f1->Get("h1_Amplitude_ch_4");
  //TH1D *h1_2 = (TH1D*)f2->Get("h1_amplitudeUSBWC_ch_4");
  //TH1D *h1_3 = (TH1D*)f3->Get("h1_amplitudeUSBWC_ch_4");

  //TH1D *h1_1 = (TH1D*)f1->Get("h1_sigRiseT_cut_ch_1");
  //TH1D *h1_2 = (TH1D*)f2->Get("h1_sigRiseT_cut_ch_1");
  //TH1D *h1_3 = (TH1D*)f3->Get("h1_sigRiseT_cut_ch_1");
  //TH1D *h1_1 = (TH1D*)f1->Get("h1_sigWidth_cut_ch_1");
  //TH1D *h1_2 = (TH1D*)f2->Get("h1_sigWidth_cut_ch_1");
  //TH1D *h1_3 = (TH1D*)f3->Get("h1_sigWidth_cut_ch_1");
  //TH1D *h1_1 = (TH1D*)f1->Get("h1_sigFallT_cut_ch_1");
  //TH1D *h1_2 = (TH1D*)f2->Get("h1_sigFallT_cut_ch_1");
  //TH1D *h1_3 = (TH1D*)f3->Get("h1_sigFallT_cut_ch_1");
  //h1_sigRiseT_cut_ch_1  h1_sigWidth_cut_ch_1 h1_sigFallT_cut_ch_7

  //normalizeHisto(h1_1);
  //normalizeHisto(h1_2);

  h1_1->Rebin(8);
  h1_2->Rebin(8);
  h1_3->Rebin(8);
  h1_4->Rebin(8);

  h1_1->SetTitle("");

  h1_1->SetName("1");
  h1_2->SetName("2");
  h1_3->SetName("3");
  h1_4->SetName("4");

  TCanvas *c1 = new TCanvas("c1",fileN1.Data(),10,10,800,800);
  gStyle->SetPalette(1);
  gStyle->SetFrameBorderMode(0);
  gROOT->ForceStyle();
  gStyle->SetStatColor(kWhite);
  //gStyle->SetOptStat(kFALSE);
 
  h1_1->SetLineColor(kBlack);
  h1_1->SetLineWidth(3.0);
  h1_2->SetLineColor(kRed);
  h1_2->SetLineWidth(3.0);
  h1_3->SetLineColor(kBlue);
  h1_3->SetLineWidth(3.0);
  h1_4->SetLineColor(kMagenta);
  h1_4->SetLineWidth(3.0);

  //c1->Divide(2,1);
  //c1->cd(1);
  //h1_1->SetMaximum(520);
  //h1_1->GetXaxis()->SetRangeUser(0.224,0.234);
  //h1_1->GetXaxis()->SetRangeUser(156,164);
  //h1_1->GetXaxis()->SetRangeUser(1.9,2.1);
  //h1_1->GetXaxis()->SetRangeUser(-0.05,1.0);
  h1_1->Draw();
  h1_2->Draw("sames");
  h1_3->Draw("sames");
  h1_4->Draw("sames");
  //h1_3->Draw("same");
  //h1_1->GetXaxis()->SetTitle("#Delta time, ns");
  //h1_1->SetMaximum(7000);
  //h1_1->GetXaxis()->SetRangeUser(0,200.0);
  //h1_1->GetXaxis()->SetTitle("Rise time, ns");
  //h1_1->GetXaxis()->SetTitle("Width, ns");
  //h1_1->GetXaxis()->SetTitle("Fall time, ns");
  h1_1->GetXaxis()->SetTitle("Amplitude, V");
  //h1_1->GetXaxis()->SetTitle("Charge, nVs");
  //h1_2->GetXaxis()->SetTitle("Number of p.e. per incoming 500 MeV/c e^{-}");

  //h1_1->Draw();
  //h1_2->Draw("same");

  //h1_2->Draw();
  //h1_2->Fit("gaus");
  //h1_2->GetXaxis()->SetTitle("Number of p.e. per incoming 500 MeV/c e^{-}");
  //h1_2->GetXaxis()->SetRangeUser(0,1.0);

  
  //h1_1->Fit("gaus");
  TLegend *leg = new TLegend(0.6,0.6,0.9,0.9,"","brNDC");
  leg->AddEntry(h1_1, "Pedestal","l");
  leg->AddEntry(h1_2, "No quartz tablet","l");
  leg->AddEntry(h1_3, "Quartz tablet (1200/240)","l");
  leg->AddEntry(h1_4, "Quartz tablet (1200/4000)","l");
  //leg->AddEntry(h1_3, "Run 3","l");
  leg->Draw();
  

  return 0;
}

void normalizeHisto(TH1D *h1_1){
  Double_t norm = h1_1->GetEntries();
  for(Int_t i = 0;i<h1_1->GetNbinsX();i++){
    h1_1->SetBinContent(i+1,h1_1->GetBinContent(i+1)/norm);
  }
}
