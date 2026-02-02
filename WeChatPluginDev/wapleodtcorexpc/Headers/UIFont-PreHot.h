//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIFont.h>

@interface UIFont (PreHot)
+ (id)preHotPriceFontOfSize:(double)arg1;
+ (id)safePingFangSCBoldFontOfSize:(double)arg1;
+ (id)safePingFangSCMediumFontOfSize:(double)arg1;
+ (id)safePingFangSCRegularFontOfSize:(double)arg1;
+ (id)safePingFangSCLightFontOfSize:(double)arg1;
+ (double)getWebFontSizeByLevel:(unsigned int)arg1;
+ (double)getWebFontSizeByDefaultLevel;
+ (unsigned int)getWebviewFontScaleWithCurrentLevel:(unsigned int)arg1;
+ (unsigned int)getWebviewFontScale;
+ (unsigned int)webviewFontLevelWithMaxLevel:(unsigned int)arg1;
+ (unsigned int)webviewFontLevel;
+ (void)setAppFontSize:(unsigned int)arg1;
+ (CDUnknownBlockType)boldFont;
+ (CDUnknownBlockType)font;
+ (double)getNormalFontSizeByLevel:(unsigned int)arg1;
+ (double)getNormalFontSizeByLevelForChatOrTimeline:(unsigned int)arg1;
+ (double)getNormalFontSizeByDefaultLevel;
+ (double)getNormalFontSize:(int)arg1;
+ (double)getNormalFontSize;
+ (unsigned int)getSuggestLevelBySystem;
+ (unsigned int)getSuggestLevelByElderMode;
+ (unsigned int)globalFontLevel;
+ (_Bool)useDynamicSize;
+ (double)dynamicScaleWithModule:(int)arg1;
+ (double)dynamicScale;
+ (double)dynamicFontSize:(double)arg1 forModule:(int)arg2;
+ (double)dynamicFontSizeForNavigator:(double)arg1;
+ (double)dynamicFontSize:(double)arg1;
+ (double)dynamicCellHeight:(double)arg1;
+ (double)dynamicLengthForNavigator:(double)arg1;
+ (double)dynamicLength:(double)arg1;
+ (double)dynamicLength:(double)arg1 forModule:(int)arg2;
+ (id)dynamicMediumWechatSSFontOfSize:(double)arg1;
+ (id)dynamicRegularWechatStdFontOfSize:(double)arg1;
+ (id)dynamicRegularWechatSSFontOfSize:(double)arg1;
+ (id)dynamicSemiboldSystemFontOfSize:(double)arg1;
+ (id)dynamicMediumWechatStdFontOfSize:(double)arg1;
+ (id)dynamicMediumSystemFontOfSize:(double)arg1 forModule:(int)arg2;
+ (id)dynamicMediumSystemFontOfSize:(double)arg1;
+ (id)dynamicBoldSystemFontOfSize:(double)arg1;
+ (id)dynamicSystemFontOfSize:(double)arg1;
+ (id)dynamicBoldSystemFontOfSize:(double)arg1 forModule:(int)arg2;
+ (id)dynamicSystemFontOfSize:(double)arg1 forModule:(int)arg2;
+ (id)dynamicSettingFont:(double)arg1;
+ (id)settingFont:(double)arg1;
+ (id)systemLittleFont;
+ (id)systemSmallFont;
+ (id)systemFont;
+ (id)systemBoldBigFont;
+ (void)loadFontWithFileName:(id)arg1;
+ (void)loadWCRedEnvFontWithFileName:(id)arg1;
+ (id)yanSongFontOfSize:(double)arg1;
+ (id)lemiaoFontOfSize:(double)arg1;
+ (id)xiariFontOfSize:(double)arg1;
+ (id)boldWechatStdFontOfSize:(double)arg1;
+ (id)regularWechatStdFontOfSize:(double)arg1;
+ (id)mediumWechatStdFontOfSize:(double)arg1;
+ (id)boldWechatSSFontOfSize:(double)arg1;
+ (id)regularWechatSSFontOfSize:(double)arg1;
+ (id)mediumWechatSSFontOfSize:(double)arg1;
+ (id)mediumSystemFontOfSize:(double)arg1;
+ (id)lightSystemFontOfSize:(double)arg1;
@property(readonly, nonatomic) UIFont *italicFont;
- (id)setBoldEnable:(_Bool)arg1;
- (_Bool)isItalic;
- (_Bool)isSymbolic;
- (_Bool)isBold;
- (double)lineSpacingForFactor:(double)arg1;
- (double)redesignLinespacing;
- (double)topMargin;
@end

