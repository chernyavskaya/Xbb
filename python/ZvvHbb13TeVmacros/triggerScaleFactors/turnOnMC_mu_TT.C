{
//=========Macro generated from canvas: c1/
//=========  (Fri Feb 12 15:15:07 2016) by ROOT version5.34/18
   TCanvas *c1 = new TCanvas("c1", "",0,0,1280,720);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-46.99999,-0.1585366,553,1.060976);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.16);
   c1->SetRightMargin(0.02);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.13);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);

   TGraphAsymmErrors *grae = new TGraphAsymmErrors(40);
   grae->SetName("ratio");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,95,0.3644809);
   grae->SetPointError(0,5,5,0.007242453,0.007283608);
   grae->SetPoint(1,105,0.5503404);
   grae->SetPointError(1,5,5,0.008626247,0.008606115);
   grae->SetPoint(2,115,0.7099993);
   grae->SetPointError(2,5,5,0.009659506,0.009534244);
   grae->SetPoint(3,125,0.8365057);
   grae->SetPointError(3,5,5,0.008906235,0.008653349);
   grae->SetPoint(4,135,0.8954157);
   grae->SetPointError(4,5,5,0.008097441,0.007744283);
   grae->SetPoint(5,145,0.9334358);
   grae->SetPointError(5,5,5,0.008270318,0.007679164);
   grae->SetPoint(6,155,0.9595851);
   grae->SetPointError(6,5,5,0.007963992,0.007072494);
   grae->SetPoint(7,165,0.9796323);
   grae->SetPointError(7,5,5,0.006798533,0.005577895);
   grae->SetPoint(8,175,0.9924034);
   grae->SetPointError(8,5,5,0.005302604,0.003610147);
   grae->SetPoint(9,185,0.9898756);
   grae->SetPointError(9,5,5,0.007083704,0.004822891);
   grae->SetPoint(10,195,0.9974346);
   grae->SetPointError(10,5,5,0.005307815,0.002134676);
   grae->SetPoint(11,205,0.9907806);
   grae->SetPointError(11,5,5,0.01023843,0.00582582);
   grae->SetPoint(12,215,0.9985383);
   grae->SetPointError(12,5,5,0.007295951,0.001439907);
   grae->SetPoint(13,225,0.9837189);
   grae->SetPointError(13,5,5,0.01697432,0.009960291);
   grae->SetPoint(14,235,0.9930199);
   grae->SetPointError(14,5,5,0.02275051,0.006548457);
   grae->SetPoint(15,245,0.9932333);
   grae->SetPointError(15,5,5,0.01718472,0.006003566);
   grae->SetPoint(16,255,0.9929737);
   grae->SetPointError(16,5,5,0.02515088,0.006694787);
   grae->SetPoint(17,265,0.9799928);
   grae->SetPointError(17,5,5,0.02730964,0.01412825);
   grae->SetPoint(18,275,1);
   grae->SetPointError(18,5,5,0.05688096,0);
   grae->SetPoint(19,285,1);
   grae->SetPointError(19,5,5,0.0456413,0);
   grae->SetPoint(20,295,1);
   grae->SetPointError(20,5,5,0.02751015,0);
   grae->SetPoint(21,305,1);
   grae->SetPointError(21,5,5,0.07165322,0);
   grae->SetPoint(22,315,1);
   grae->SetPointError(22,5,5,0.05054645,0);
   grae->SetPoint(23,325,1);
   grae->SetPointError(23,5,5,0.07589927,0);
   grae->SetPoint(24,335,0.9886001);
   grae->SetPointError(24,5,5,0.1141011,0.01139878);
   grae->SetPoint(25,345,0.9631371);
   grae->SetPointError(25,5,5,0.1073657,0.0342221);
   grae->SetPoint(26,355,1);
   grae->SetPointError(26,5,5,0.08929525,0);
   grae->SetPoint(27,365,1);
   grae->SetPointError(27,5,5,0.06028622,0);
   grae->SetPoint(28,375,1);
   grae->SetPointError(28,5,5,0.4703741,0);
   grae->SetPoint(29,385,1);
   grae->SetPointError(29,5,5,0.07241967,0);
   grae->SetPoint(30,395,1);
   grae->SetPointError(30,5,5,0.1474966,0);
   grae->SetPoint(31,415,1);
   grae->SetPointError(31,5,5,0.1708981,0);
   grae->SetPoint(32,425,1);
   grae->SetPointError(32,5,5,0.3459855,0);
   grae->SetPoint(33,435,1);
   grae->SetPointError(33,5,5,0.08296616,0);
   grae->SetPoint(34,445,1);
   grae->SetPointError(34,5,5,0.6615097,0);
   grae->SetPoint(35,455,1);
   grae->SetPointError(35,5,5,0.4920083,0);
   grae->SetPoint(36,465,1);
   grae->SetPointError(36,5,5,0.09544892,0);
   grae->SetPoint(37,475,1);
   grae->SetPointError(37,5,5,0.3058547,0);
   grae->SetPoint(38,485,1);
   grae->SetPointError(38,5,5,0.4036975,0);
   grae->SetPoint(39,495,1);
   grae->SetPointError(39,5,5,0.05169252,0);

   TH1F *Graph_ratio1 = new TH1F("Graph_ratio1","",100,49,541);
   Graph_ratio1->SetMinimum(0);
   Graph_ratio1->SetMaximum(1);
   Graph_ratio1->SetDirectory(0);
   Graph_ratio1->SetStats(0);
   Graph_ratio1->SetLineStyle(0);
   Graph_ratio1->SetMarkerStyle(20);
   Graph_ratio1->GetXaxis()->SetLabelFont(42);
   Graph_ratio1->GetXaxis()->SetLabelOffset(0.007);
   Graph_ratio1->GetXaxis()->SetLabelSize(0.05);
   Graph_ratio1->GetXaxis()->SetTitleSize(0.06);
   Graph_ratio1->GetXaxis()->SetTitleOffset(0.9);
   Graph_ratio1->GetXaxis()->SetTitleFont(42);
   Graph_ratio1->GetYaxis()->SetLabelFont(42);
   Graph_ratio1->GetYaxis()->SetLabelOffset(0.007);
   Graph_ratio1->GetYaxis()->SetLabelSize(0.05);
   Graph_ratio1->GetYaxis()->SetTitleSize(0.06);
   Graph_ratio1->GetYaxis()->SetTitleOffset(1.25);
   Graph_ratio1->GetYaxis()->SetTitleFont(42);
   Graph_ratio1->GetZaxis()->SetLabelFont(42);
   Graph_ratio1->GetZaxis()->SetLabelOffset(0.007);
   Graph_ratio1->GetZaxis()->SetLabelSize(0.05);
   Graph_ratio1->GetZaxis()->SetTitleSize(0.06);
   Graph_ratio1->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_ratio1);

   grae->Draw("ap");

   TF1 *fit = new TF1("fit","1-(0.5-0.5*erf((x-[0])/[1]))*([3])-[2]",80,500);
   fit->SetFillColor(19);
   fit->SetFillStyle(0);
   fit->SetMarkerStyle(20);
   fit->SetLineColor(2);
   fit->SetLineWidth(2);
   fit->GetXaxis()->SetLabelFont(42);
   fit->GetXaxis()->SetLabelOffset(0.007);
   fit->GetXaxis()->SetLabelSize(0.05);
   fit->GetXaxis()->SetTitleSize(0.06);
   fit->GetXaxis()->SetTitleOffset(0.9);
   fit->GetXaxis()->SetTitleFont(42);
   fit->GetYaxis()->SetLabelFont(42);
   fit->GetYaxis()->SetLabelOffset(0.007);
   fit->GetYaxis()->SetLabelSize(0.05);
   fit->GetYaxis()->SetTitleSize(0.06);
   fit->GetYaxis()->SetTitleOffset(1.25);
   fit->GetYaxis()->SetTitleFont(42);
   fit->SetParameter(0,105);
   fit->SetParError(0,0);
   fit->SetParLimits(0,0,0);
   fit->SetParameter(1,45);
   fit->SetParError(1,0);
   fit->SetParLimits(1,45,45);
   fit->SetParameter(2,0.01);
   fit->SetParError(2,0);
   fit->SetParLimits(2,0,0);
   fit->SetParameter(3,1);
   fit->SetParError(3,0);
   fit->SetParLimits(3,1,1);
   fit->Draw("same");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
