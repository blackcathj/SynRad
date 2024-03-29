void ALL.ALL.csv_DSTReader.rooth_DSTReader_z()
{
//=========Macro generated from canvas: h_DSTReader_z/h_DSTReader_z
//=========  (Thu Jun  4 11:34:03 2020) by ROOT version 6.16/00
   TCanvas *h_DSTReader_z = new TCanvas("h_DSTReader_z", "h_DSTReader_z",0,0,1000,860);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   h_DSTReader_z->SetHighLightColor(2);
   h_DSTReader_z->Range(-562.0253,-1.711996,450.6329,8.987981);
   h_DSTReader_z->SetFillColor(0);
   h_DSTReader_z->SetBorderMode(0);
   h_DSTReader_z->SetBorderSize(2);
   h_DSTReader_z->SetLogy();
   h_DSTReader_z->SetTickx(1);
   h_DSTReader_z->SetTicky(1);
   h_DSTReader_z->SetLeftMargin(0.16);
   h_DSTReader_z->SetRightMargin(0.05);
   h_DSTReader_z->SetTopMargin(0.05);
   h_DSTReader_z->SetBottomMargin(0.16);
   h_DSTReader_z->SetFrameBorderMode(0);
   h_DSTReader_z->SetFrameBorderMode(0);
   
   TH1F *hz_all__1 = new TH1F("hz_all__1","Photons and MAPS hits",80,-400,400);
   hz_all__1->SetBinContent(1,73710);
   hz_all__1->SetBinContent(2,72790);
   hz_all__1->SetBinContent(3,71690);
   hz_all__1->SetBinContent(4,71280);
   hz_all__1->SetBinContent(5,72330);
   hz_all__1->SetBinContent(6,70010);
   hz_all__1->SetBinContent(7,71970);
   hz_all__1->SetBinContent(8,70860);
   hz_all__1->SetBinContent(9,71780);
   hz_all__1->SetBinContent(10,70790);
   hz_all__1->SetBinContent(11,70920);
   hz_all__1->SetBinContent(12,72130);
   hz_all__1->SetBinContent(13,71410);
   hz_all__1->SetBinContent(14,72890);
   hz_all__1->SetBinContent(15,74410);
   hz_all__1->SetBinContent(16,75110);
   hz_all__1->SetBinContent(17,75540);
   hz_all__1->SetBinContent(18,78280);
   hz_all__1->SetBinContent(19,80270);
   hz_all__1->SetBinContent(20,82000);
   hz_all__1->SetBinContent(21,82630);
   hz_all__1->SetBinContent(22,83740);
   hz_all__1->SetBinContent(23,87050);
   hz_all__1->SetBinContent(24,88620);
   hz_all__1->SetBinContent(25,92350);
   hz_all__1->SetBinContent(26,95040);
   hz_all__1->SetBinContent(27,96730);
   hz_all__1->SetBinContent(28,99510);
   hz_all__1->SetBinContent(29,102890);
   hz_all__1->SetBinContent(30,104890);
   hz_all__1->SetBinContent(31,107420);
   hz_all__1->SetBinContent(32,108240);
   hz_all__1->SetBinContent(33,109570);
   hz_all__1->SetBinContent(34,109060);
   hz_all__1->SetBinContent(35,111880);
   hz_all__1->SetBinContent(36,113710);
   hz_all__1->SetBinContent(37,111460);
   hz_all__1->SetBinContent(38,112480);
   hz_all__1->SetBinContent(39,114220);
   hz_all__1->SetBinContent(40,117240);
   hz_all__1->SetBinContent(41,119910);
   hz_all__1->SetBinContent(42,122320);
   hz_all__1->SetBinContent(43,131950);
   hz_all__1->SetBinContent(44,164020);
   hz_all__1->SetBinContent(45,237910);
   hz_all__1->SetBinContent(46,276500);
   hz_all__1->SetBinContent(47,283020);
   hz_all__1->SetBinContent(48,237560);
   hz_all__1->SetBinContent(49,214560);
   hz_all__1->SetBinContent(50,204330);
   hz_all__1->SetBinContent(51,198840);
   hz_all__1->SetBinContent(52,196340);
   hz_all__1->SetBinContent(53,193450);
   hz_all__1->SetBinContent(54,193620);
   hz_all__1->SetBinContent(55,196440);
   hz_all__1->SetBinContent(56,195840);
   hz_all__1->SetBinContent(57,202110);
   hz_all__1->SetBinContent(58,212020);
   hz_all__1->SetBinContent(59,214950);
   hz_all__1->SetBinContent(60,226530);
   hz_all__1->SetBinContent(61,235780);
   hz_all__1->SetBinContent(62,245190);
   hz_all__1->SetBinContent(63,256210);
   hz_all__1->SetBinContent(64,266060);
   hz_all__1->SetBinContent(65,275050);
   hz_all__1->SetBinContent(66,279600);
   hz_all__1->SetBinContent(67,281020);
   hz_all__1->SetBinContent(68,283780);
   hz_all__1->SetBinContent(69,283700);
   hz_all__1->SetBinContent(70,277190);
   hz_all__1->SetBinContent(71,269640);
   hz_all__1->SetBinContent(72,258090);
   hz_all__1->SetBinContent(73,247550);
   hz_all__1->SetBinContent(74,20);
   hz_all__1->SetMinimum(1);
   hz_all__1->SetMaximum(2.8378e+08);
   hz_all__1->SetEntries(1.1e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   hz_all__1->SetFillColor(ci);
   hz_all__1->SetLineWidth(2);
   hz_all__1->SetMarkerStyle(20);
   hz_all__1->SetMarkerSize(1.2);
   hz_all__1->GetXaxis()->SetTitle("z position @ #gamma crossing ref. facet, z_{#gamma} [cm]");
   hz_all__1->GetXaxis()->SetLabelFont(42);
   hz_all__1->GetXaxis()->SetLabelSize(0.05);
   hz_all__1->GetXaxis()->SetTitleSize(0.05);
   hz_all__1->GetXaxis()->SetTitleOffset(1.4);
   hz_all__1->GetXaxis()->SetTitleFont(42);
   hz_all__1->GetYaxis()->SetTitle("Virtual Photon Count w/o Normalization");
   hz_all__1->GetYaxis()->SetLabelFont(42);
   hz_all__1->GetYaxis()->SetLabelSize(0.05);
   hz_all__1->GetYaxis()->SetTitleSize(0.05);
   hz_all__1->GetYaxis()->SetTitleOffset(1.4);
   hz_all__1->GetYaxis()->SetTitleFont(42);
   hz_all__1->GetZaxis()->SetLabelFont(42);
   hz_all__1->GetZaxis()->SetLabelSize(0.05);
   hz_all__1->GetZaxis()->SetTitleSize(0.05);
   hz_all__1->GetZaxis()->SetTitleOffset(1);
   hz_all__1->GetZaxis()->SetTitleFont(42);
   hz_all__1->Draw("");
   
   TH1F *hz_all_10keV__2 = new TH1F("hz_all_10keV__2","",80,-400,400);
   hz_all_10keV__2->SetBinContent(1,10640);
   hz_all_10keV__2->SetBinContent(2,9610);
   hz_all_10keV__2->SetBinContent(3,9430);
   hz_all_10keV__2->SetBinContent(4,9340);
   hz_all_10keV__2->SetBinContent(5,9820);
   hz_all_10keV__2->SetBinContent(6,9070);
   hz_all_10keV__2->SetBinContent(7,9330);
   hz_all_10keV__2->SetBinContent(8,9230);
   hz_all_10keV__2->SetBinContent(9,8280);
   hz_all_10keV__2->SetBinContent(10,8540);
   hz_all_10keV__2->SetBinContent(11,8350);
   hz_all_10keV__2->SetBinContent(12,8160);
   hz_all_10keV__2->SetBinContent(13,7960);
   hz_all_10keV__2->SetBinContent(14,7910);
   hz_all_10keV__2->SetBinContent(15,7790);
   hz_all_10keV__2->SetBinContent(16,7180);
   hz_all_10keV__2->SetBinContent(17,7380);
   hz_all_10keV__2->SetBinContent(18,7620);
   hz_all_10keV__2->SetBinContent(19,7090);
   hz_all_10keV__2->SetBinContent(20,7120);
   hz_all_10keV__2->SetBinContent(21,6650);
   hz_all_10keV__2->SetBinContent(22,6200);
   hz_all_10keV__2->SetBinContent(23,6120);
   hz_all_10keV__2->SetBinContent(24,5970);
   hz_all_10keV__2->SetBinContent(25,5740);
   hz_all_10keV__2->SetBinContent(26,5680);
   hz_all_10keV__2->SetBinContent(27,5580);
   hz_all_10keV__2->SetBinContent(28,5160);
   hz_all_10keV__2->SetBinContent(29,5000);
   hz_all_10keV__2->SetBinContent(30,4580);
   hz_all_10keV__2->SetBinContent(31,4600);
   hz_all_10keV__2->SetBinContent(32,4150);
   hz_all_10keV__2->SetBinContent(33,4180);
   hz_all_10keV__2->SetBinContent(34,3780);
   hz_all_10keV__2->SetBinContent(35,3710);
   hz_all_10keV__2->SetBinContent(36,3680);
   hz_all_10keV__2->SetBinContent(37,3570);
   hz_all_10keV__2->SetBinContent(38,3020);
   hz_all_10keV__2->SetBinContent(39,3220);
   hz_all_10keV__2->SetBinContent(40,2800);
   hz_all_10keV__2->SetBinContent(41,2640);
   hz_all_10keV__2->SetBinContent(42,2290);
   hz_all_10keV__2->SetBinContent(43,2250);
   hz_all_10keV__2->SetBinContent(44,2120);
   hz_all_10keV__2->SetBinContent(45,1840);
   hz_all_10keV__2->SetBinContent(46,1880);
   hz_all_10keV__2->SetBinContent(47,1900);
   hz_all_10keV__2->SetBinContent(48,1650);
   hz_all_10keV__2->SetBinContent(49,1510);
   hz_all_10keV__2->SetBinContent(50,1250);
   hz_all_10keV__2->SetBinContent(51,1390);
   hz_all_10keV__2->SetBinContent(52,1150);
   hz_all_10keV__2->SetBinContent(53,910);
   hz_all_10keV__2->SetBinContent(54,730);
   hz_all_10keV__2->SetBinContent(55,680);
   hz_all_10keV__2->SetBinContent(56,610);
   hz_all_10keV__2->SetBinContent(57,630);
   hz_all_10keV__2->SetBinContent(58,430);
   hz_all_10keV__2->SetBinContent(59,370);
   hz_all_10keV__2->SetBinContent(60,140);
   hz_all_10keV__2->SetBinContent(61,80);
   hz_all_10keV__2->SetBinContent(62,30);
   hz_all_10keV__2->SetBinContent(63,40);
   hz_all_10keV__2->SetBinContent(64,10);
   hz_all_10keV__2->SetBinContent(68,10);
   hz_all_10keV__2->SetBinContent(69,10);
   hz_all_10keV__2->SetEntries(289790);

   ci = TColor::GetColor("#000099");
   hz_all_10keV__2->SetFillColor(ci);
   hz_all_10keV__2->SetLineWidth(2);
   hz_all_10keV__2->SetMarkerStyle(20);
   hz_all_10keV__2->SetMarkerSize(1.2);
   hz_all_10keV__2->GetXaxis()->SetLabelFont(42);
   hz_all_10keV__2->GetXaxis()->SetLabelSize(0.05);
   hz_all_10keV__2->GetXaxis()->SetTitleSize(0.05);
   hz_all_10keV__2->GetXaxis()->SetTitleOffset(1.4);
   hz_all_10keV__2->GetXaxis()->SetTitleFont(42);
   hz_all_10keV__2->GetYaxis()->SetLabelFont(42);
   hz_all_10keV__2->GetYaxis()->SetLabelSize(0.05);
   hz_all_10keV__2->GetYaxis()->SetTitleSize(0.05);
   hz_all_10keV__2->GetYaxis()->SetTitleOffset(1.4);
   hz_all_10keV__2->GetYaxis()->SetTitleFont(42);
   hz_all_10keV__2->GetZaxis()->SetLabelFont(42);
   hz_all_10keV__2->GetZaxis()->SetLabelSize(0.05);
   hz_all_10keV__2->GetZaxis()->SetTitleSize(0.05);
   hz_all_10keV__2->GetZaxis()->SetTitleOffset(1);
   hz_all_10keV__2->GetZaxis()->SetTitleFont(42);
   hz_all_10keV__2->Draw("same");
   
   TH1F *hz__3 = new TH1F("hz__3","",80,-400,400);
   hz__3->SetBinContent(45,1);
   hz__3->SetBinContent(57,3);
   hz__3->SetEntries(4);

   ci = TColor::GetColor("#990000");
   hz__3->SetFillColor(ci);
   hz__3->SetLineWidth(2);
   hz__3->SetMarkerStyle(20);
   hz__3->SetMarkerSize(1.2);
   hz__3->GetXaxis()->SetLabelFont(42);
   hz__3->GetXaxis()->SetLabelSize(0.05);
   hz__3->GetXaxis()->SetTitleSize(0.05);
   hz__3->GetXaxis()->SetTitleOffset(1.4);
   hz__3->GetXaxis()->SetTitleFont(42);
   hz__3->GetYaxis()->SetLabelFont(42);
   hz__3->GetYaxis()->SetLabelSize(0.05);
   hz__3->GetYaxis()->SetTitleSize(0.05);
   hz__3->GetYaxis()->SetTitleOffset(1.4);
   hz__3->GetYaxis()->SetTitleFont(42);
   hz__3->GetZaxis()->SetLabelFont(42);
   hz__3->GetZaxis()->SetLabelSize(0.05);
   hz__3->GetZaxis()->SetTitleSize(0.05);
   hz__3->GetZaxis()->SetTitleOffset(1);
   hz__3->GetZaxis()->SetTitleFont(42);
   hz__3->Draw("same");
   
   TLegend *leg = new TLegend(0.2,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Fun4All-EIC + SynRad simulation","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hz_all","All SynRad virtual #gamma","lf");

   ci = TColor::GetColor("#009900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hz_all_10keV","E_{#gamma} > 10keV","lf");

   ci = TColor::GetColor("#000099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hz","Interacted with MAPS tracker","lf");

   ci = TColor::GetColor("#990000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   h_DSTReader_z->Modified();
   h_DSTReader_z->cd();
   h_DSTReader_z->SetSelected(h_DSTReader_z);
}
