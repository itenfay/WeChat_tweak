//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPayGPLaunchVCViewHelper : NSObject
{
}

+ (void)setupActivityAADetailCellContent:(id)arg1 payerNickname:(id)arg2 amount:(double)arg3 isLastCell:(_Bool)arg4;
+ (void)setupActivityAATitleCellContent:(id)arg1 selectedMemberCount:(long long)arg2;
+ (void)setupCustomizeGroupMemberTipsCellContent:(id)arg1 richContent:(id)arg2;
+ (void)setupCustomizePayerTipsCellContent:(id)arg1;
+ (void)setupToalMemberCellContent:(id)arg1 content:(id)arg2 title:(id)arg3;
+ (void)setupTotalAmountCellContent:(id)arg1 amountString:(id)arg2;
+ (void)setupModeChangeCellContent:(id)arg1 curlaunchType:(unsigned long long)arg2;
+ (void)setupThemeEdtiViewContent:(id)arg1 themeContent:(id)arg2 remarkImage:(id)arg3 remarkImgUrl:(id)arg4 remarkImgSign:(id)arg5;
+ (double)getActivityAAPayerDetailCellHeightWithNickname:(id)arg1 amount:(double)arg2;
+ (double)getActivityAAPayerCountCellHeight;
+ (double)getCustomizeAAGroupMemberCountTipsCellHeight;
+ (double)getCustomizeAAPayerTipsCellHeight;
+ (double)getCommonAATotalMemberEditCellHeight:(id)arg1;
+ (double)getCommonAATotalAmountEditCellHeight;
+ (double)calcCellHeightWithLeftContent:(id)arg1 rightContent:(id)arg2 hasArrow:(_Bool)arg3 minHeight:(double)arg4 breakLeft:(_Bool)arg5;
+ (double)commonCellWidth;
+ (double)commonCellHeight;
+ (double)getModeChangeCellHeightWithCurentLaunchType:(unsigned long long)arg1;

@end

