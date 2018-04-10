#include <stdio.h>
#include "eval_dyn1.h"
#include "cw.h" // added this
/////////////////// ASXL1 mutations
double Rk_1_ASXL1_mut ;
double Rk_2_ASXL1_mut ;
double Rk_3_ASXL1_mut ;
double Rk_4_ASXL1_mut ;
double Rk_5_ASXL1_mut ;
double Rk_6_ASXL1_mut ;
double Rk_7_ASXL1_mut ;
double Rk_8_ASXL1_mut ;
double Rk_9_ASXL1_mut ;
//////////////////TP53 mutations
double Rk_1_TP53_mut;
double Rk_2_TP53_mut;
double Rk_3_TP53_mut;
///////////////// KRAS mutations
double Rk_1_KRAS_mut;
double Rk_2_KRAS_mut;
double Rk_3_KRAS_mut;
double Rk_4_KRAS_mut;
double Rk_5_KRAS_mut;
double Rk_6_KRAS_mut;
double Rk_7_KRAS_mut;
double Rk_8_KRAS_mut;
double Rk_9_KRAS_mut;
double Rk_10_KRAS_mut;
double Rk_11_KRAS_mut;
double Rk_12_KRAS_mut;
double Rk_13_KRAS_mut;
double Rk_14_KRAS_mut;
double Rk_15_KRAS_mut;
double Rk_16_KRAS_mut;
double Rk_17_KRAS_mut;
double Rk_18_KRAS_mut;
double Rk_19_KRAS_mut;
double Rk_20_KRAS_mut;
double Rk_21_KRAS_mut;
double Rk_22_KRAS_mut;
double Rk_23_KRAS_mut;
double Rk_24_KRAS_mut;
double Rk_25_KRAS_mut;
double Rk_26_KRAS_mut;
double Rk_27_KRAS_mut;
double Rk_28_KRAS_mut;
double Rk_29_KRAS_mut;
double Rk_30_KRAS_mut;
double Rk_31_KRAS_mut;
double Rk_32_KRAS_mut;
double Rk_33_KRAS_mut;
double Rk_34_KRAS_mut;
double Rk_35_KRAS_mut;
double Rk_36_KRAS_mut;
double Rk_37_KRAS_mut;
double Rk_38_KRAS_mut;
double Rk_39_KRAS_mut;
double Rk_40_KRAS_mut;
double Rk_41_KRAS_mut;
double Rk_42_KRAS_mut;
double Rk_43_KRAS_mut;
double Rk_44_KRAS_mut;
double Rk_45_KRAS_mut;
double Rk_46_KRAS_mut;
double Rk_47_KRAS_mut;
///////////////////////  NRAS mutations
double Rk_1_NRAS_mut;
double Rk_2_NRAS_mut;
double Rk_3_NRAS_mut;
double Rk_4_NRAS_mut;
double Rk_5_NRAS_mut;
double Rk_6_NRAS_mut;
double Rk_7_NRAS_mut;
double Rk_8_NRAS_mut;
double Rk_9_NRAS_mut;
double Rk_10_NRAS_mut;
double Rk_11_NRAS_mut;
double Rk_12_NRAS_mut;
double Rk_13_NRAS_mut;
double Rk_14_NRAS_mut;
double Rk_15_NRAS_mut;
double Rk_16_NRAS_mut;
double Rk_17_NRAS_mut;
double g_sm[FRM_MAX];

//  Control with no mutation
void eval_dyn0() {
	Rk_1_ASXL1_mut = 1;
	Rk_2_ASXL1_mut = 1;
	Rk_3_ASXL1_mut = 1;
	Rk_4_ASXL1_mut = 1;
	Rk_5_ASXL1_mut = 1;
	Rk_6_ASXL1_mut = 1;
	Rk_7_ASXL1_mut = 1;
	Rk_8_ASXL1_mut = 1;
	Rk_9_ASXL1_mut = 1;
        Rk_1_TP53_mut = 0;
	Rk_2_TP53_mut = 1;
	Rk_3_TP53_mut = 1;
	Rk_1_KRAS_mut = 0;
	Rk_2_KRAS_mut = 1;
	Rk_3_KRAS_mut = 1;
	Rk_4_KRAS_mut = 1;
	Rk_5_KRAS_mut = 1;
	Rk_6_KRAS_mut = 1;
	Rk_7_KRAS_mut = 1;
	Rk_8_KRAS_mut = 1;
	Rk_9_KRAS_mut = 1;
	Rk_10_KRAS_mut = 1;
	Rk_11_KRAS_mut = 1;
	Rk_12_KRAS_mut = 1;
	Rk_13_KRAS_mut = 1;
	Rk_14_KRAS_mut = 1;
	Rk_15_KRAS_mut = 1;
	Rk_16_KRAS_mut = 1;
	Rk_17_KRAS_mut = 1;
	Rk_18_KRAS_mut = 1;
	Rk_19_KRAS_mut = 1;
	Rk_20_KRAS_mut = 1;
	Rk_21_KRAS_mut = 1;
	Rk_22_KRAS_mut = 1;
	Rk_23_KRAS_mut = 1;
	Rk_24_KRAS_mut = 1;
	Rk_25_KRAS_mut = 1;
	Rk_26_KRAS_mut = 1;
	Rk_27_KRAS_mut = 1;
	Rk_28_KRAS_mut = 1;
	Rk_29_KRAS_mut = 1;
	Rk_30_KRAS_mut = 1;
	Rk_31_KRAS_mut = 1;
	Rk_32_KRAS_mut = 1;
	Rk_33_KRAS_mut = 1;
	Rk_34_KRAS_mut = 1;
	Rk_35_KRAS_mut = 1;
	Rk_36_KRAS_mut = 1;
	Rk_37_KRAS_mut = 1;
	Rk_38_KRAS_mut = 1;
	Rk_39_KRAS_mut = 1;
	Rk_40_KRAS_mut = 1;
	Rk_41_KRAS_mut = 0;
	Rk_42_KRAS_mut = 1;
	Rk_43_KRAS_mut = 1;
	Rk_44_KRAS_mut = 1;
	Rk_45_KRAS_mut = 1;
	Rk_46_KRAS_mut = 1;
	Rk_47_KRAS_mut = 1;
	Rk_1_NRAS_mut = 0; 
	Rk_2_NRAS_mut = 1;
	Rk_3_NRAS_mut = 1; 
	Rk_4_NRAS_mut = 1;
	Rk_5_NRAS_mut = 1; 
	Rk_6_NRAS_mut = 1;
	Rk_7_NRAS_mut = 1; 
	Rk_8_NRAS_mut = 1;
	Rk_9_NRAS_mut = 1; 
	Rk_10_NRAS_mut = 1;
	Rk_11_NRAS_mut = 1; 
	Rk_12_NRAS_mut = 1;
	Rk_13_NRAS_mut = 1; 
	Rk_14_NRAS_mut = 1;
	Rk_15_NRAS_mut = 1; 
	Rk_16_NRAS_mut = 1;
	Rk_17_NRAS_mut = 1;
}

// ASXL1 mutation  // read this function after reading in eval_dyn0()
void eval_dyn1() {

	Rk_1_ASXL1_mut =1;
	Rk_2_ASXL1_mut =1.9;
	Rk_3_ASXL1_mut =9;
	Rk_4_ASXL1_mut = 1*25;//100 times overexpression
	Rk_5_ASXL1_mut = 1*2.8;//100 times overexpression
	Rk_6_ASXL1_mut = 1;// No effect due to mutation
	Rk_7_ASXL1_mut = 1;// No effect due to mutation
	Rk_8_ASXL1_mut = 1;// No effect due to mutation
	Rk_9_ASXL1_mut = 1;// No effect due to mutation

}

// TP53 mutation // read this function after reading in eval_dyn0()
void eval_dyn2() {
	Rk_1_TP53_mut = 0 +3.8;//Increase flux from 0 to 3.8 times
	Rk_2_TP53_mut = 1 * 0.7;//KD 30 %
	Rk_3_TP53_mut = 1 * 0.7;//KD 30 %

}

// KRAS mutation // read this function after reading in eval_dyn0()
void eval_dyn3() {

	Rk_1_KRAS_mut = 1; // Turn on the KRAS mutation switch of g_frm[20193] mutation node g_scm[13551] {LC_pro_mut_KRAS_GDP_Src} to g_scm[13556] {LC_pro_mut_KRAS_GDP}
	Rk_2_KRAS_mut = 300; // increase flux through g_frm[7149] {LC_ARAF_P} to g_scm[1724] {LC_ARAF_p}
	Rk_3_KRAS_mut = 300; // increase flux through g_frm[22333] {LC_BRAF_p_Actn} to g_scm[15055] {LC_BRAF_p_act}
        Rk_4_KRAS_mut = 300; // increase flux through g_frm[3362] {LC_MAP3K1_P} to g_scm[808] {LC_MAP3K1_p} 
	Rk_5_KRAS_mut = 0.1; // increase flux through g_frm[20270]{LC_RASSF1_YWHAQ_Lys} to  g_scm[13610] {LC_MOAP1_act_RASSF1_act} & g_scm[3476] {LC_YWHAQ}
	Rk_6_KRAS_mut = 0.1; // increase flux through g_frm[20226] {LC_PIK3CA_PIK3R_Actn} to g_scm[13588] {LC_PIK3CA_PIK3R_act} 
	Rk_7_KRAS_mut = 0.1; // increase flux through g_frm[20195] {LC_PIK3CD_PIK3R_Actn} to g_scm[13573] {LC_PIK3CD_PIK3R_act} 
	Rk_8_KRAS_mut = 55;
	Rk_9_KRAS_mut = 66;
	Rk_10_KRAS_mut = 66;
	Rk_11_KRAS_mut = 0.1; // increase flux through g_frm[7178] {LC_PRKCZ_P} to g_scm[287] {LC_PRKCZ_p}
	Rk_12_KRAS_mut = 300; // increase flux through g_frm[22332] {LC_RAF1_p_Actn} to g_scm[15056] {LC_RAF1_p_act}
	Rk_13_KRAS_mut = 300; // increase flux through g_frm[7282] {LC_RALGDS_inact_Actn} to g_scm[194] {LC_RALGDS_act}
	Rk_14_KRAS_mut = 300; // increase flux through g_frm[20241] {LC_RASSF2_Actn} to g_scm[13595] {LC_RASSF2_act}
	Rk_15_KRAS_mut = 0.1; // increase flux through g_frm[4308] {LC_SOS1_Actn} to g_scm[618] {LC_SOS1_act}
	Rk_16_KRAS_mut = 0.1; // increase flux through g_frm[11537] {LC_STK3_Inactn} to g_scm[7875] {LC_STK3_lThr117_p}
	Rk_17_KRAS_mut = 0.1; // increase flux through g_frm[5051] {LC_STK3_p_DP} to g_scm[520] {LC_STK3}
	Rk_18_KRAS_mut = 300; // increase flux through g_frm[19146] {LC_TIAM1_P} to g_scm[12603] {LC_TIAM1_p}
	Rk_19_KRAS_mut = 99; // increase flux through g_frm[20169] {LC_mut_KRAS_GDP_Actn} to g_scm[13551] {LC_mut_KRAS_GTP}
	Rk_20_KRAS_mut = 1800; // increase flux through g_frm[20163] {LC_mut_KRAS_GDP_C_Actn} to g_scm[13551] {LC_mut_KRAS_GTP}
	Rk_21_KRAS_mut = 0.01; // increase flux through g_frm[16827] {LC_BRAP_Dgr} to degrade g_scm[10090] {LC_BRAP}
	Rk_22_KRAS_mut = 0.01; // increase flux through g_frm[16827] {LC_RASGRF2_Dgr} to degrade g_scm[13998] {LC_RASGRF2}
	Rk_23_KRAS_mut = 150; // increase flux through g_frm[20810] {LC_RASSF5_v_a_Actn} to increase g_scm[13981] {LC_RASSF5_v_a_act}
	Rk_24_KRAS_mut = 150; // increase flux through g_frm[20738] {LC_RIN1_Actn} to increase g_scm[13936] {LC_RIN1_act}
	Rk_25_KRAS_mut = 1; //  increase flux through g_frm[2509] {LC_KRAS_GDP_Actn} to g_scm[3738] {LC_KRAS_GDP_pal}
	Rk_26_KRAS_mut = 1; //  increase flux through g_frm[20226] {LC_PIK3CA_PIK3R_Actn} to g_scm[13588] {LC_PIK3CA_PIK3R_act}
	Rk_27_KRAS_mut = 1; //   increase flux through g_frm[5051] {LC_STK3_p_DP} to g_scm[520] {LC_STK3}
	Rk_28_KRAS_mut = 1; //  increase flux through g_frm[20810] {LC_RASSF5_v_a_Actn} to g_scm[13981] {LC_RASSF5_v_a_act}
	Rk_29_KRAS_mut = 1; //  increase flux through g_frm[7164] {LC_PRKCI_P} to g_scm[1971] {LC_PRKCI_p}
	Rk_30_KRAS_mut = 1; //  increase flux through g_frm[1233] {LC_PIK3CG_Actn} to g_scm[228] {LC_PIK3CG_act}
	Rk_31_KRAS_mut = 1; // increase flux through g_frm[1233] {LC_PIK3CD_PIK3R_Actn} to g_scm[228] {LC_PIK3CD_PIK3R_act}
	Rk_32_KRAS_mut = 1; //  increase flux through g_frm[7282] {LC_RALGDS_inact_Actn} to g_scm[194] {LC_RALGDS_act}
	Rk_33_KRAS_mut = 1; //  increase flux through g_frm[7282] {LC_ARAF_P} to g_scm[1724] {LC_ARAF_p}
	Rk_34_KRAS_mut = 1; //  increase flux through g_frm[7178] {LC_PRKCZ_P} to g_scm[287] {LC_PRKCZ_p}
	Rk_35_KRAS_mut = 1; //  increase flux through g_frm[19146] {LC_TIAM1_P} to g_scm[12603] {LC_TIAM1_p}
	Rk_36_KRAS_mut = 1; // increase flux through g_frm[2639] {LC_PLCE1_P} to g_scm[3573] {LC_IL6R_act_ENTPD6_JAK1_p_JAK2_p}
	Rk_37_KRAS_mut = 1; // increase flux through g_frm[3362] {LC_MAP3K1_P} to g_scm[808] {LC_MAP3K1_p}
	Rk_38_KRAS_mut = 1; //  increase flux through g_frm[3362] {LC_RASSF2_Actn} to g_scm[13595] {LC_RASSF2_act}
	Rk_39_KRAS_mut = 1; //  increase flux through g_frm[4308] {LC_SOS1_Actn} to g_scm[618] {LC_RASSF2_act}
	Rk_40_KRAS_mut = 1; //  increase flux through g_frm[20270] {LC_RASSF1_YWHAQ_Lys} to g_scm[3476] {LC_YWHAQ}
	Rk_41_KRAS_mut = 1; //  increase flux through g_frm[11537] {LC_STK3_Inactn} to g_scm[7875] {LC_STK3_lThr117_p}
	Rk_42_KRAS_mut = 1; //  increase flux through g_frm[20847] {LC_RASGRF2_Dgr} to g_scm[530] {Sink}
	Rk_43_KRAS_mut = 1; //  increase flux through g_frm[20738] {LC_RIN1_Actn} to g_scm[13936] {LC_RIN1_act}
	Rk_44_KRAS_mut = 1; //  increase flux through g_frm[16827] {LC_BRAP_Dgr} to g_scm[530] {Sink}
	Rk_45_KRAS_mut = 1; //  increase flux through g_frm[22332] {LC_RAF1_p_Actn} to g_scm[15056] {LC_RAF1_p_act}
	Rk_46_KRAS_mut = 1; // increase flux through g_frm[22535] {LC_RAF1_p_BRAF_lV600E_PS_Actn} to g_scm[15152] {LC_B_RAF}
	Rk_47_KRAS_mut = 1; //  increase flux through g_frm[22333] {LC_BRAF_p_Actn} to g_scm[15055] {LC_BRAF_p_act}

}

