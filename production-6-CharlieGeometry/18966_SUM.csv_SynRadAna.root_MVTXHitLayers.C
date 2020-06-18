void 18966_SUM.csv_SynRadAna.root_MVTXHitLayers()
{
//=========Macro generated from canvas: MVTXHitLayers/MVTXHitLayers
//=========  (Wed Jun 17 20:46:30 2020) by ROOT version 6.16/00
   TCanvas *MVTXHitLayers = new TCanvas("MVTXHitLayers", "MVTXHitLayers",0,0,1000,1000);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   MVTXHitLayers->SetHighLightColor(2);
   MVTXHitLayers->Range(0,0,1,1);
   MVTXHitLayers->SetFillColor(0);
   MVTXHitLayers->SetBorderMode(0);
   MVTXHitLayers->SetBorderSize(2);
   MVTXHitLayers->SetTickx(1);
   MVTXHitLayers->SetTicky(1);
   MVTXHitLayers->SetLeftMargin(0.16);
   MVTXHitLayers->SetRightMargin(0.05);
   MVTXHitLayers->SetTopMargin(0.05);
   MVTXHitLayers->SetBottomMargin(0.16);
   MVTXHitLayers->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: MVTXHitLayers_1
   TPad *MVTXHitLayers_1 = new TPad("MVTXHitLayers_1", "MVTXHitLayers_1",0.01,0.01,0.49,0.99);
   MVTXHitLayers_1->Draw();
   MVTXHitLayers_1->cd();
   MVTXHitLayers_1->Range(-1.107595,11.82988,2.689873,21.60789);
   MVTXHitLayers_1->SetFillColor(0);
   MVTXHitLayers_1->SetBorderMode(0);
   MVTXHitLayers_1->SetBorderSize(2);
   MVTXHitLayers_1->SetLogy();
   MVTXHitLayers_1->SetTickx(1);
   MVTXHitLayers_1->SetTicky(1);
   MVTXHitLayers_1->SetLeftMargin(0.16);
   MVTXHitLayers_1->SetRightMargin(0.05);
   MVTXHitLayers_1->SetTopMargin(0.05);
   MVTXHitLayers_1->SetBottomMargin(0.16);
   MVTXHitLayers_1->SetFrameBorderMode(0);
   MVTXHitLayers_1->SetFrameBorderMode(0);
   
   TH1D *h_SynRadAna_MVTXHit_nHit_Layer_py = new TH1D("h_SynRadAna_MVTXHit_nHit_Layer_py","Hit sum",3,-0.5,2.5);
   h_SynRadAna_MVTXHit_nHit_Layer_py->SetBinContent(1,6.939468e+20);
   h_SynRadAna_MVTXHit_nHit_Layer_py->SetBinContent(2,4.95901e+13);
   h_SynRadAna_MVTXHit_nHit_Layer_py->SetBinError(1,1.770523e+17);
   h_SynRadAna_MVTXHit_nHit_Layer_py->SetBinError(2,4.95901e+13);
   h_SynRadAna_MVTXHit_nHit_Layer_py->SetEntries(2.505e+07);
   h_SynRadAna_MVTXHit_nHit_Layer_py->SetLineWidth(2);
   h_SynRadAna_MVTXHit_nHit_Layer_py->SetMarkerStyle(20);
   h_SynRadAna_MVTXHit_nHit_Layer_py->SetMarkerSize(1.2);
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetXaxis()->SetTitle("layer");
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetXaxis()->SetLabelFont(42);
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetXaxis()->SetLabelSize(0.05);
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetXaxis()->SetTitleSize(0.05);
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetXaxis()->SetTitleOffset(1.4);
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetXaxis()->SetTitleFont(42);
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetYaxis()->SetLabelFont(42);
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetYaxis()->SetLabelSize(0.05);
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetYaxis()->SetTitleSize(0.05);
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetYaxis()->SetTitleOffset(1.4);
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetYaxis()->SetTitleFont(42);
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetZaxis()->SetLabelFont(42);
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetZaxis()->SetLabelSize(0.05);
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetZaxis()->SetTitleSize(0.05);
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetZaxis()->SetTitleOffset(1);
   h_SynRadAna_MVTXHit_nHit_Layer_py->GetZaxis()->SetTitleFont(42);
   h_SynRadAna_MVTXHit_nHit_Layer_py->Draw("colz");
   MVTXHitLayers_1->Modified();
   MVTXHitLayers->cd();
  
// ------------>Primitives in pad: MVTXHitLayers_2
   TPad *MVTXHitLayers_2 = new TPad("MVTXHitLayers_2", "MVTXHitLayers_2",0.51,0.01,0.99,0.99);
   MVTXHitLayers_2->Draw();
   MVTXHitLayers_2->cd();
   MVTXHitLayers_2->Range(-12.85443,-3.025805,64.36076,1.504041);
   MVTXHitLayers_2->SetFillColor(0);
   MVTXHitLayers_2->SetBorderMode(0);
   MVTXHitLayers_2->SetBorderSize(2);
   MVTXHitLayers_2->SetLogy();
   MVTXHitLayers_2->SetTickx(1);
   MVTXHitLayers_2->SetTicky(1);
   MVTXHitLayers_2->SetLeftMargin(0.16);
   MVTXHitLayers_2->SetRightMargin(0.05);
   MVTXHitLayers_2->SetTopMargin(0.05);
   MVTXHitLayers_2->SetBottomMargin(0.16);
   MVTXHitLayers_2->SetFrameBorderMode(0);
   MVTXHitLayers_2->SetFrameBorderMode(0);
   
   TH1D *h_SynRadAna_TPCHit_nHit_Layer_py = new TH1D("h_SynRadAna_TPCHit_nHit_Layer_py","Hit sum",61,-0.5,60.5);
   h_SynRadAna_TPCHit_nHit_Layer_py->SetLineWidth(2);
   h_SynRadAna_TPCHit_nHit_Layer_py->SetMarkerStyle(20);
   h_SynRadAna_TPCHit_nHit_Layer_py->SetMarkerSize(1.2);
   h_SynRadAna_TPCHit_nHit_Layer_py->GetXaxis()->SetTitle("layer");
   h_SynRadAna_TPCHit_nHit_Layer_py->GetXaxis()->SetLabelFont(42);
   h_SynRadAna_TPCHit_nHit_Layer_py->GetXaxis()->SetLabelSize(0.05);
   h_SynRadAna_TPCHit_nHit_Layer_py->GetXaxis()->SetTitleSize(0.05);
   h_SynRadAna_TPCHit_nHit_Layer_py->GetXaxis()->SetTitleOffset(1.4);
   h_SynRadAna_TPCHit_nHit_Layer_py->GetXaxis()->SetTitleFont(42);
   h_SynRadAna_TPCHit_nHit_Layer_py->GetYaxis()->SetLabelFont(42);
   h_SynRadAna_TPCHit_nHit_Layer_py->GetYaxis()->SetLabelSize(0.05);
   h_SynRadAna_TPCHit_nHit_Layer_py->GetYaxis()->SetTitleSize(0.05);
   h_SynRadAna_TPCHit_nHit_Layer_py->GetYaxis()->SetTitleOffset(1.4);
   h_SynRadAna_TPCHit_nHit_Layer_py->GetYaxis()->SetTitleFont(42);
   h_SynRadAna_TPCHit_nHit_Layer_py->GetZaxis()->SetLabelFont(42);
   h_SynRadAna_TPCHit_nHit_Layer_py->GetZaxis()->SetLabelSize(0.05);
   h_SynRadAna_TPCHit_nHit_Layer_py->GetZaxis()->SetTitleSize(0.05);
   h_SynRadAna_TPCHit_nHit_Layer_py->GetZaxis()->SetTitleOffset(1);
   h_SynRadAna_TPCHit_nHit_Layer_py->GetZaxis()->SetTitleFont(42);
   h_SynRadAna_TPCHit_nHit_Layer_py->Draw("colz");
   MVTXHitLayers_2->Modified();
   MVTXHitLayers->cd();
   MVTXHitLayers->Modified();
   MVTXHitLayers->cd();
   MVTXHitLayers->SetSelected(MVTXHitLayers);
}
