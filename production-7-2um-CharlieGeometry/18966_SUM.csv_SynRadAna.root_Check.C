void 18966_SUM.csv_SynRadAna.root_Check()
{
//=========Macro generated from canvas: Check/Check
//=========  (Sun Jul  5 10:00:22 2020) by ROOT version 6.16/00
   TCanvas *Check = new TCanvas("Check", "Check",0,0,1000,1000);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Check->SetHighLightColor(2);
   Check->Range(0,0,1,1);
   Check->SetFillColor(0);
   Check->SetBorderMode(0);
   Check->SetBorderSize(2);
   Check->SetTickx(1);
   Check->SetTicky(1);
   Check->SetLeftMargin(0.16);
   Check->SetRightMargin(0.05);
   Check->SetTopMargin(0.05);
   Check->SetBottomMargin(0.16);
   Check->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: Check_1
   TPad *Check_1 = new TPad("Check_1", "Check_1",0.01,0.51,0.49,0.99);
   Check_1->Draw();
   Check_1->cd();
   Check_1->Range(-1.525316,5.160456,11.13291,22.90877);
   Check_1->SetFillColor(0);
   Check_1->SetBorderMode(0);
   Check_1->SetBorderSize(2);
   Check_1->SetLogy();
   Check_1->SetTickx(1);
   Check_1->SetTicky(1);
   Check_1->SetLeftMargin(0.16);
   Check_1->SetRightMargin(0.05);
   Check_1->SetTopMargin(0.05);
   Check_1->SetBottomMargin(0.16);
   Check_1->SetFrameBorderMode(0);
   Check_1->SetFrameBorderMode(0);
   
   TH1D *h_SynRadAna_Normalization__1 = new TH1D("h_SynRadAna_Normalization__1","h_SynRadAna_ Normalization",10,0.5,10.5);
   h_SynRadAna_Normalization__1->SetBinContent(1,2.001e+08);
   h_SynRadAna_Normalization__1->SetBinContent(2,2.001e+08);
   h_SynRadAna_Normalization__1->SetBinContent(3,5.543273e+21);
   h_SynRadAna_Normalization__1->SetBinContent(4,2.087145e+08);
   h_SynRadAna_Normalization__1->SetBinContent(5,2.001e+08);
   h_SynRadAna_Normalization__1->SetBinContent(6,2.087145e+08);
   h_SynRadAna_Normalization__1->SetBinError(1,14145.67);
   h_SynRadAna_Normalization__1->SetBinError(2,14145.67);
   h_SynRadAna_Normalization__1->SetBinError(3,5.004053e+17);
   h_SynRadAna_Normalization__1->SetBinError(4,15031.42);
   h_SynRadAna_Normalization__1->SetBinError(5,14145.67);
   h_SynRadAna_Normalization__1->SetBinError(6,15031.42);
   h_SynRadAna_Normalization__1->SetEntries(1.2006e+09);
   h_SynRadAna_Normalization__1->SetLineWidth(2);
   h_SynRadAna_Normalization__1->SetMarkerStyle(20);
   h_SynRadAna_Normalization__1->SetMarkerSize(1.2);
   h_SynRadAna_Normalization__1->GetXaxis()->SetTitle("Items");
   h_SynRadAna_Normalization__1->GetXaxis()->SetBinLabel(1,"Event");
   h_SynRadAna_Normalization__1->GetXaxis()->SetBinLabel(2,"Photon");
   h_SynRadAna_Normalization__1->GetXaxis()->SetBinLabel(3,"Flux");
   h_SynRadAna_Normalization__1->GetXaxis()->SetBinLabel(4,"G4Particle");
   h_SynRadAna_Normalization__1->GetXaxis()->SetBinLabel(5,"G4PrimaryParticle");
   h_SynRadAna_Normalization__1->GetXaxis()->SetBinLabel(6,"G4Vertex");
   h_SynRadAna_Normalization__1->GetXaxis()->SetBit(TAxis::kLabelsVert);
   h_SynRadAna_Normalization__1->GetXaxis()->SetLabelFont(42);
   h_SynRadAna_Normalization__1->GetXaxis()->SetLabelSize(0.05);
   h_SynRadAna_Normalization__1->GetXaxis()->SetTitleSize(0.05);
   h_SynRadAna_Normalization__1->GetXaxis()->SetTitleOffset(1.4);
   h_SynRadAna_Normalization__1->GetXaxis()->SetTitleFont(42);
   h_SynRadAna_Normalization__1->GetYaxis()->SetTitle("Count");
   h_SynRadAna_Normalization__1->GetYaxis()->SetLabelFont(42);
   h_SynRadAna_Normalization__1->GetYaxis()->SetLabelSize(0.05);
   h_SynRadAna_Normalization__1->GetYaxis()->SetTitleSize(0.05);
   h_SynRadAna_Normalization__1->GetYaxis()->SetTitleOffset(1.4);
   h_SynRadAna_Normalization__1->GetYaxis()->SetTitleFont(42);
   h_SynRadAna_Normalization__1->GetZaxis()->SetLabelFont(42);
   h_SynRadAna_Normalization__1->GetZaxis()->SetLabelSize(0.05);
   h_SynRadAna_Normalization__1->GetZaxis()->SetTitleSize(0.05);
   h_SynRadAna_Normalization__1->GetZaxis()->SetTitleOffset(1);
   h_SynRadAna_Normalization__1->GetZaxis()->SetTitleFont(42);
   h_SynRadAna_Normalization__1->Draw("");
   Check_1->Modified();
   Check->cd();
  
// ------------>Primitives in pad: Check_2
   TPad *Check_2 = new TPad("Check_2", "Check_2",0.51,0.51,0.99,0.99);
   Check_2->Draw();
   Check_2->cd();
   Check_2->Range(-4.651899,8.723814,21.29747,16.67551);
   Check_2->SetFillColor(0);
   Check_2->SetBorderMode(0);
   Check_2->SetBorderSize(2);
   Check_2->SetLogy();
   Check_2->SetTickx(1);
   Check_2->SetTicky(1);
   Check_2->SetLeftMargin(0.16);
   Check_2->SetRightMargin(0.05);
   Check_2->SetTopMargin(0.05);
   Check_2->SetBottomMargin(0.16);
   Check_2->SetFrameBorderMode(0);
   Check_2->SetFrameBorderMode(0);
   
   TH1D *h_SynRadAna_photonEnergy_flux__2 = new TH1D("h_SynRadAna_photonEnergy_flux__2","Source photon",200,0,100);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(1,1.000731e+16);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(2,3.148642e+15);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(3,1.632314e+15);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(4,1.299493e+15);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(5,9.708546e+14);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(6,7.228442e+14);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(7,4.919092e+14);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(8,3.368926e+14);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(9,2.200894e+14);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(10,1.499408e+14);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(11,1.213692e+14);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(12,7.417141e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(13,4.144232e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(14,2.098169e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(15,1.225384e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(16,1.060139e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(17,7.771444e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(18,5.932659e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(19,4.546246e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(20,4.766325e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(21,2.510951e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(22,2.391783e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(23,2.220927e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(24,1.874543e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(25,1.771112e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(26,1.074487e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(27,8.057744e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(28,7.511486e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(29,3.65903e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(30,2.745035e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(31,1.849848e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(32,2.356245e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(33,1.946893e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(34,2.602878e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(35,2.086407e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(36,2.405039e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(37,1.829477e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(38,5.692624e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(39,3.425312e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(40,6.041762e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(41,1.443415e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(42,6.037748e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(43,1.345524e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(44,1.408744e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(45,9.658646e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(46,1.524497e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(47,3.453154e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(48,1.990528e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(49,1.011774e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(50,3.110619e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(51,9.414858e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(53,1.962187e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(54,3.453154e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(55,4.544242e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(56,1.932272e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(57,1.028619e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(59,9.763933e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(62,3.254879e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(64,1.092355e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(65,1.007036e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(69,2.019433e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(70,1.217417e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(71,2.054529e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(72,1.933515e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(75,1.136113e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(76,9.803972e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(79,2.017553e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(82,2.270371e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(84,1.032768e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(87,1.243342e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(92,1.016057e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(102,1.105982e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(105,1.044405e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(109,1.00956e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(118,9.655095e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(122,1.021328e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(124,2.033547e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(126,1.070148e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(139,2.066613e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(140,1.017805e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(148,3.126506e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(178,1.938818e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(186,1.087376e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(190,9.678387e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(201,2.991091e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(1,1.254783e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(2,7.039254e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(3,5.065511e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(4,4.521506e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(5,3.906261e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(6,3.370698e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(7,2.777215e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(8,2.29784e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(9,1.861254e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(10,1.534144e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(11,1.3821e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(12,1.079706e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(13,8.094149e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(14,5.742863e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(15,4.374309e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(16,4.07905e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(17,3.47438e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(18,3.018051e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(19,2.662893e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(20,2.742541e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(21,1.931949e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(22,1.913402e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(23,1.859608e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(24,1.721644e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(25,1.672719e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(26,1.285168e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(27,1.125839e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(28,1.099026e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(29,7.441764e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(30,6.1935e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(31,5.080279e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(32,6.082992e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(33,5.531435e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(34,9.299952e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(35,1.043581e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(36,1.04648e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(37,5.102728e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(38,2.686931e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(39,1.270502e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(40,2.692971e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(41,7.969452e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(42,2.694184e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(43,7.322394e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(44,7.739387e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(45,6.829694e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(46,8.51078e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(47,2.441749e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(48,9.963038e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(49,7.154325e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(50,1.270276e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(51,6.65731e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(53,9.810996e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(54,2.441749e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(55,2.560737e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(56,9.666144e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(57,7.273433e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(59,6.904143e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(62,1.329499e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(64,7.724114e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(65,7.103082e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(69,1.009794e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(70,8.60844e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(71,1.027269e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(72,9.65552e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(75,8.03353e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(76,6.932455e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(79,1.010498e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(82,1.138567e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(84,7.284584e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(87,8.791755e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(92,7.184606e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(102,7.820474e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(105,7.385057e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(109,7.138667e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(118,6.827183e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(122,7.22188e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(124,1.015995e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(126,7.567092e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(139,1.034133e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(140,7.196965e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(148,1.275433e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(178,9.699886e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(186,7.688908e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(190,6.826608e+08);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(201,1.224202e+09);
   h_SynRadAna_photonEnergy_flux__2->SetEntries(1.227122e+08);
   h_SynRadAna_photonEnergy_flux__2->SetLineWidth(2);
   h_SynRadAna_photonEnergy_flux__2->SetMarkerStyle(20);
   h_SynRadAna_photonEnergy_flux__2->SetMarkerSize(1.2);
   h_SynRadAna_photonEnergy_flux__2->GetXaxis()->SetTitle("Photon energy [keV]");
   h_SynRadAna_photonEnergy_flux__2->GetXaxis()->SetRange(0,40);
   h_SynRadAna_photonEnergy_flux__2->GetXaxis()->SetLabelFont(42);
   h_SynRadAna_photonEnergy_flux__2->GetXaxis()->SetLabelSize(0.05);
   h_SynRadAna_photonEnergy_flux__2->GetXaxis()->SetTitleSize(0.05);
   h_SynRadAna_photonEnergy_flux__2->GetXaxis()->SetTitleOffset(1.4);
   h_SynRadAna_photonEnergy_flux__2->GetXaxis()->SetTitleFont(42);
   h_SynRadAna_photonEnergy_flux__2->GetYaxis()->SetLabelFont(42);
   h_SynRadAna_photonEnergy_flux__2->GetYaxis()->SetLabelSize(0.05);
   h_SynRadAna_photonEnergy_flux__2->GetYaxis()->SetTitleSize(0.05);
   h_SynRadAna_photonEnergy_flux__2->GetYaxis()->SetTitleOffset(1.4);
   h_SynRadAna_photonEnergy_flux__2->GetYaxis()->SetTitleFont(42);
   h_SynRadAna_photonEnergy_flux__2->GetZaxis()->SetLabelFont(42);
   h_SynRadAna_photonEnergy_flux__2->GetZaxis()->SetLabelSize(0.05);
   h_SynRadAna_photonEnergy_flux__2->GetZaxis()->SetTitleSize(0.05);
   h_SynRadAna_photonEnergy_flux__2->GetZaxis()->SetTitleOffset(1);
   h_SynRadAna_photonEnergy_flux__2->GetZaxis()->SetTitleFont(42);
   h_SynRadAna_photonEnergy_flux__2->Draw("");
   Check_2->Modified();
   Check->cd();
  
// ------------>Primitives in pad: Check_3
   TPad *Check_3 = new TPad("Check_3", "Check_3",0.01,0.01,0.49,0.49);
   Check_3->Draw();
   Check_3->cd();
   Check_3->Range(-4.753164,15.86729,21.82911,16.59977);
   Check_3->SetFillColor(0);
   Check_3->SetBorderMode(0);
   Check_3->SetBorderSize(2);
   Check_3->SetLogy();
   Check_3->SetTickx(1);
   Check_3->SetTicky(1);
   Check_3->SetLeftMargin(0.16);
   Check_3->SetRightMargin(0.05);
   Check_3->SetTopMargin(0.05);
   Check_3->SetBottomMargin(0.16);
   Check_3->SetFrameBorderMode(0);
   Check_3->SetFrameBorderMode(0);
   
   TH1D *h_SynRadAna_MVTXHit_nHit_flux__3 = new TH1D("h_SynRadAna_MVTXHit_nHit_flux__3","Hit sum",2000,-0.5,1999.5);
   h_SynRadAna_MVTXHit_nHit_flux__3->SetBinContent(1,1.93e+16);
   h_SynRadAna_MVTXHit_nHit_flux__3->SetBinError(1,1.74226e+12);
   h_SynRadAna_MVTXHit_nHit_flux__3->SetEntries(1.227125e+08);
   h_SynRadAna_MVTXHit_nHit_flux__3->SetLineWidth(2);
   h_SynRadAna_MVTXHit_nHit_flux__3->SetMarkerStyle(20);
   h_SynRadAna_MVTXHit_nHit_flux__3->SetMarkerSize(1.2);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetXaxis()->SetTitle("Sum number of hits");
   h_SynRadAna_MVTXHit_nHit_flux__3->GetXaxis()->SetRange(1,21);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetXaxis()->SetLabelFont(42);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetXaxis()->SetLabelSize(0.05);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetXaxis()->SetTitleSize(0.05);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetXaxis()->SetTitleOffset(1.4);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetXaxis()->SetTitleFont(42);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetYaxis()->SetLabelFont(42);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetYaxis()->SetLabelSize(0.05);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetYaxis()->SetTitleSize(0.05);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetYaxis()->SetTitleOffset(1.4);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetYaxis()->SetTitleFont(42);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetZaxis()->SetLabelFont(42);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetZaxis()->SetLabelSize(0.05);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetZaxis()->SetTitleSize(0.05);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetZaxis()->SetTitleOffset(1);
   h_SynRadAna_MVTXHit_nHit_flux__3->GetZaxis()->SetTitleFont(42);
   h_SynRadAna_MVTXHit_nHit_flux__3->Draw("");
   Check_3->Modified();
   Check->cd();
  
// ------------>Primitives in pad: Check_4
   TPad *Check_4 = new TPad("Check_4", "Check_4",0.51,0.01,0.99,0.49);
   Check_4->Draw();
   Check_4->cd();
   Check_4->Range(-4.753164,15.86729,21.82911,16.59977);
   Check_4->SetFillColor(0);
   Check_4->SetBorderMode(0);
   Check_4->SetBorderSize(2);
   Check_4->SetLogy();
   Check_4->SetTickx(1);
   Check_4->SetTicky(1);
   Check_4->SetLeftMargin(0.16);
   Check_4->SetRightMargin(0.05);
   Check_4->SetTopMargin(0.05);
   Check_4->SetBottomMargin(0.16);
   Check_4->SetFrameBorderMode(0);
   Check_4->SetFrameBorderMode(0);
   
   TH1D *h_SynRadAna_MVTX_nHit_flux__4 = new TH1D("h_SynRadAna_MVTX_nHit_flux__4","Hit sum",2000,-0.5,1999.5);
   h_SynRadAna_MVTX_nHit_flux__4->SetBinContent(1,1.93e+16);
   h_SynRadAna_MVTX_nHit_flux__4->SetBinError(1,1.74226e+12);
   h_SynRadAna_MVTX_nHit_flux__4->SetEntries(1.227125e+08);
   h_SynRadAna_MVTX_nHit_flux__4->SetLineWidth(2);
   h_SynRadAna_MVTX_nHit_flux__4->SetMarkerStyle(20);
   h_SynRadAna_MVTX_nHit_flux__4->SetMarkerSize(1.2);
   h_SynRadAna_MVTX_nHit_flux__4->GetXaxis()->SetTitle("Sum number of hits");
   h_SynRadAna_MVTX_nHit_flux__4->GetXaxis()->SetRange(1,21);
   h_SynRadAna_MVTX_nHit_flux__4->GetXaxis()->SetLabelFont(42);
   h_SynRadAna_MVTX_nHit_flux__4->GetXaxis()->SetLabelSize(0.05);
   h_SynRadAna_MVTX_nHit_flux__4->GetXaxis()->SetTitleSize(0.05);
   h_SynRadAna_MVTX_nHit_flux__4->GetXaxis()->SetTitleOffset(1.4);
   h_SynRadAna_MVTX_nHit_flux__4->GetXaxis()->SetTitleFont(42);
   h_SynRadAna_MVTX_nHit_flux__4->GetYaxis()->SetLabelFont(42);
   h_SynRadAna_MVTX_nHit_flux__4->GetYaxis()->SetLabelSize(0.05);
   h_SynRadAna_MVTX_nHit_flux__4->GetYaxis()->SetTitleSize(0.05);
   h_SynRadAna_MVTX_nHit_flux__4->GetYaxis()->SetTitleOffset(1.4);
   h_SynRadAna_MVTX_nHit_flux__4->GetYaxis()->SetTitleFont(42);
   h_SynRadAna_MVTX_nHit_flux__4->GetZaxis()->SetLabelFont(42);
   h_SynRadAna_MVTX_nHit_flux__4->GetZaxis()->SetLabelSize(0.05);
   h_SynRadAna_MVTX_nHit_flux__4->GetZaxis()->SetTitleSize(0.05);
   h_SynRadAna_MVTX_nHit_flux__4->GetZaxis()->SetTitleOffset(1);
   h_SynRadAna_MVTX_nHit_flux__4->GetZaxis()->SetTitleFont(42);
   h_SynRadAna_MVTX_nHit_flux__4->Draw("");
   Check_4->Modified();
   Check->cd();
   Check->Modified();
   Check->cd();
   Check->SetSelected(Check);
}
