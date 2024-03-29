void 18966_SUM.csv_SynRadAna.root_Check()
{
//=========Macro generated from canvas: Check/Check
//=========  (Thu Jun  4 11:06:43 2020) by ROOT version 6.16/00
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
   Check_1->Range(-1.525316,2.962209,11.13291,20.06425);
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
   h_SynRadAna_Normalization__1->SetBinContent(1,1000000);
   h_SynRadAna_Normalization__1->SetBinContent(2,1000000);
   h_SynRadAna_Normalization__1->SetBinContent(3,8.534014e+18);
   h_SynRadAna_Normalization__1->SetBinContent(4,1113915);
   h_SynRadAna_Normalization__1->SetBinContent(5,1000000);
   h_SynRadAna_Normalization__1->SetBinContent(6,1113915);
   h_SynRadAna_Normalization__1->SetBinError(1,1000);
   h_SynRadAna_Normalization__1->SetBinError(2,1000);
   h_SynRadAna_Normalization__1->SetBinError(3,8.815299e+15);
   h_SynRadAna_Normalization__1->SetBinError(4,1158.572);
   h_SynRadAna_Normalization__1->SetBinError(5,1000);
   h_SynRadAna_Normalization__1->SetBinError(6,1158.572);
   h_SynRadAna_Normalization__1->SetEntries(6000000);
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
   Check_2->Range(-4.651899,11.77074,21.29747,15.30531);
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
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(1,7.085603e+14);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(2,1.623602e+14);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(3,8.383391e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(4,6.517869e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(5,5.063662e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(6,4.226382e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(7,3.658394e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(8,3.122742e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(9,2.834202e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(10,2.481475e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(11,2.341366e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(12,2.157919e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(13,2.010369e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(14,1.784294e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(15,1.635819e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(16,1.461011e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(17,1.473122e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(18,1.315393e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(19,1.164737e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(20,1.047537e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(21,1.132223e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(22,1.041742e+13);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(23,9.53272e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(24,8.94898e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(25,8.87288e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(26,8.742694e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(27,8.005401e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(28,7.389249e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(29,7.060652e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(30,6.393204e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(31,6.226827e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(32,6.596641e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(33,5.981826e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(34,5.187113e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(35,5.587792e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(36,5.326996e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(37,4.843893e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(38,4.915254e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(39,4.43123e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(40,4.509508e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(41,4.465101e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(42,3.938636e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(43,4.130441e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(44,4.240793e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(45,3.55393e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(46,4.097545e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(47,3.684904e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(48,3.225648e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(49,3.505333e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(50,2.7185e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(51,3.212263e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(52,3.186943e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(53,3.075372e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(54,2.582296e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(55,2.559863e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(56,2.898232e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(57,2.235119e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(58,2.021538e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(59,2.552624e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(60,2.189906e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(61,2.449148e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(62,2.232182e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(63,1.707616e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(64,1.927276e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(65,2.512197e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(66,1.841545e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(67,2.125383e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(68,1.806794e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(69,1.632071e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(70,1.829336e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(71,1.891234e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(72,1.664854e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(73,1.723879e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(74,1.420495e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(75,1.628915e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(76,1.349949e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(77,1.187586e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(78,1.474919e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(79,1.418346e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(80,1.265628e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(81,1.041303e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(82,1.19065e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(83,1.189566e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(84,1.006502e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(85,1.069707e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(86,1.301632e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(87,1.045298e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(88,8.311466e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(89,8.960525e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(90,8.46764e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(91,7.738523e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(92,8.036181e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(93,7.615261e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(94,9.249163e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(95,6.549987e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(96,7.255977e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(97,6.966642e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(98,7.108211e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(99,8.747139e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(100,6.920018e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(101,7.769581e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(102,7.971444e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(103,5.212076e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(104,6.189816e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(105,7.497602e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(106,6.944174e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(107,3.667864e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(108,4.789024e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(109,6.340282e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(110,6.261698e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(111,4.732889e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(112,4.095381e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(113,6.30873e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(114,4.194814e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(115,3.064353e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(116,4.401821e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(117,3.953982e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(118,3.338921e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(119,3.144314e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(120,4.803821e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(121,4.835518e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(122,4.440752e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(123,4.739266e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(124,4.682178e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(125,3.905464e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(126,4.423241e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(127,4.632703e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(128,2.18164e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(129,1.945048e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(130,3.794493e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(131,3.47149e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(132,1.159919e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(133,2.452281e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(134,2.511665e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(135,2.516369e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(136,1.954299e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(137,3.040463e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(138,3.244135e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(139,2.026998e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(140,2.868265e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(141,3.818871e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(142,2.167975e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(143,2.223627e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(144,2.752097e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(145,1.36166e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(146,1.556155e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(147,3.010288e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(148,1.92611e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(149,1.939411e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(150,2.838411e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(151,1.950107e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(152,2.255038e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(153,2.582857e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(154,9.117012e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(155,1.824993e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(156,1.150779e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(157,1.322241e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(158,3.488531e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(159,9.443968e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(160,9.957347e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(161,1.518509e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(162,1.448342e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(163,2.050086e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(164,2.876817e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(165,1.132665e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(166,3.772934e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(167,5.046714e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(168,6.76877e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(169,4.202235e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(170,1.366532e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(171,8.519373e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(172,9.037761e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(173,1.175606e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(174,1.708854e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(175,1.608407e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(176,8.873226e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(177,6.088336e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(178,3.746027e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(179,4.917309e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(180,1.363697e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(181,3.576545e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(182,2.210608e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(183,8.021963e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(184,1.48291e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(185,1.014286e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(186,1.114231e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(187,1.118729e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(188,2.122458e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(189,8.128964e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(190,9.089859e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(191,4.909206e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(192,7.92037e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(193,1.668899e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(194,1.960256e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(195,1.67202e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(196,7.923165e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(197,5.722424e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(198,8.192654e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(199,3.877319e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinContent(200,5.339414e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(1,1.069664e+12);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(2,5.366895e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(3,4.011832e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(4,3.553446e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(5,3.134096e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(6,2.862022e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(7,2.669824e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(8,2.473115e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(9,2.357025e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(10,2.20745e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(11,2.146211e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(12,2.046286e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(13,1.986519e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(14,1.869041e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(15,1.784212e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(16,1.676376e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(17,1.68848e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(18,1.60108e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(19,1.500429e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(20,1.420287e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(21,1.493746e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(22,1.422778e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(23,1.357955e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(24,1.330587e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(25,1.308491e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(26,1.308715e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(27,1.24807e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(28,1.195737e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(29,1.179408e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(30,1.119973e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(31,1.10468e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(32,1.131222e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(33,1.075934e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(34,1.007061e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(35,1.042489e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(36,1.013241e+11);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(37,9.861239e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(38,9.817518e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(39,9.312239e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(40,9.393983e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(41,9.358128e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(42,8.751759e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(43,9.015756e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(44,9.15845e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(45,8.294602e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(46,8.992539e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(47,8.573109e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(48,8.048413e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(49,8.285873e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(50,7.323118e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(51,7.978231e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(52,7.849362e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(53,7.762161e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(54,7.183621e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(55,7.074992e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(56,7.573167e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(57,6.625739e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(58,6.305902e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(59,7.045203e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(60,6.585784e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(61,6.919797e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(62,6.717762e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(63,5.804232e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(64,6.197089e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(65,6.997958e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(66,6.118286e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(67,6.505813e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(68,5.955287e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(69,5.687326e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(70,6.049383e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(71,6.252444e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(72,5.69125e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(73,5.842856e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(74,5.280359e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(75,5.789924e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(76,5.140609e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(77,4.776018e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(78,5.343462e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(79,5.270916e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(80,5.112983e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(81,4.617765e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(82,4.867697e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(83,4.897509e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(84,4.501905e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(85,4.598702e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(86,5.1178e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(87,4.652043e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(88,4.053956e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(89,4.266301e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(90,4.129894e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(91,3.840541e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(92,4.063557e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(93,3.841544e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(94,4.359745e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(95,3.631336e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(96,3.744671e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(97,3.755889e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(98,3.791273e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(99,4.212348e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(100,3.682392e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(101,3.995327e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(102,3.971562e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(103,3.186861e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(104,3.493736e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(105,3.881497e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(106,3.803952e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(107,2.761837e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(108,3.049652e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(109,3.579469e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(110,3.549768e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(111,3.084322e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(112,2.86463e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(113,3.492141e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(114,2.842784e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(115,2.441568e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(116,2.92793e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(117,2.809684e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(118,2.587091e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(119,2.509904e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(120,3.126207e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(121,3.144465e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(122,3.039208e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(123,3.097402e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(124,3.066e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(125,2.888558e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(126,2.931038e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(127,3.015039e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(128,2.103728e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(129,1.971618e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(130,2.794541e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(131,2.602937e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(132,1.521219e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(133,2.266026e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(134,2.219313e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(135,2.225684e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(136,2.085807e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(137,2.504316e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(138,2.597226e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(139,2.037712e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(140,2.440461e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(141,2.794577e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(142,2.084996e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(143,2.039158e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(144,2.353113e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(145,1.630896e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(146,1.758048e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(147,2.556177e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(148,1.942365e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(149,1.961307e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(150,2.430102e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(151,1.964175e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(152,2.069504e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(153,2.27971e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(154,1.295203e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(155,2.074724e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(156,1.507159e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(157,1.587448e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(158,2.712497e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(159,1.340493e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(160,1.418964e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(161,1.852064e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(162,1.760826e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(163,2.06096e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(164,2.4469e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(165,1.616601e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(166,8.445344e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(167,9.218005e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(168,1.071812e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(169,9.419017e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(170,1.646405e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(171,1.351505e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(172,1.446043e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(173,1.531e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(174,1.925436e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(175,5.08623e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(176,1.424671e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(177,1.114077e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(178,8.412475e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(179,1.103167e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(180,1.64332e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(181,8.024131e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(182,2.145982e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(183,1.272942e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(184,1.796946e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(185,1.441692e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(186,1.599284e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(187,1.448315e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(188,6.711802e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(189,1.287623e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(190,1.29685e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(191,8.967155e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(192,1.259996e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(193,1.878812e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(194,6.198873e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(195,5.287393e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(196,1.274279e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(197,1.058176e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(198,1.312556e+10);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(199,8.682617e+09);
   h_SynRadAna_photonEnergy_flux__2->SetBinError(200,1.213388e+10);
   h_SynRadAna_photonEnergy_flux__2->SetEntries(937200.9);
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
   Check_3->Range(-4.753164,14.80647,21.82911,15.53998);
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
   h_SynRadAna_MVTXHit_nHit_flux__3->SetBinContent(1,1.68e+15);
   h_SynRadAna_MVTXHit_nHit_flux__3->SetBinError(1,1.735373e+12);
   h_SynRadAna_MVTXHit_nHit_flux__3->SetEntries(937200.9);
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
   Check_4->Range(-4.753164,14.80647,21.82911,15.53998);
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
   h_SynRadAna_MVTX_nHit_flux__4->SetBinContent(1,1.68e+15);
   h_SynRadAna_MVTX_nHit_flux__4->SetBinError(1,1.735373e+12);
   h_SynRadAna_MVTX_nHit_flux__4->SetEntries(937200.9);
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
