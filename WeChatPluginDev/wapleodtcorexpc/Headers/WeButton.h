//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeButton : NSObject
{
}

+ (id)genLinkButtonWith:(id)arg1;
+ (id)getRedesignButton:(id)arg1 IconName:(id)arg2 Action:(SEL)arg3 Target:(id)arg4;
+ (id)genNewBigRedButton:(long long)arg1;
+ (id)genNewBigGreyButton:(long long)arg1;
+ (id)genNewBigGreenButton:(long long)arg1;
+ (id)genNewBigButton:(long long)arg1;
+ (id)genLineButtonWithColor:(id)arg1 fontColor:(id)arg2 fontSize:(double)arg3 fixHeight:(double)arg4 radius:(double)arg5 fontAlphaHighLighted:(double)arg6;
+ (id)genSmallGreenLineButton;
+ (id)genBigGreenLineButton;
+ (id)genSmallLineButtonWithColor:(id)arg1 fontColor:(id)arg2;
+ (id)genBigLineButtonWithColor:(id)arg1 fontColor:(id)arg2;
+ (id)genLineButtonWithColor:(id)arg1 fontColor:(id)arg2;
+ (void)setMiddleButtonStyle:(id)arg1;
+ (id)genMiddleButtonWithColor:(id)arg1 fontColor:(id)arg2;
+ (id)genMiddleGrayButton;
+ (id)genMiddleGreenButton;
+ (id)genSmallGrayButton;
+ (id)genSmallGreenButton;
+ (void)setWideBigButtonStyle:(id)arg1;
+ (id)genWideBigButtonWithColor:(id)arg1 fontColor:(id)arg2;
+ (id)genWideBigGrayButton;
+ (id)genWideBigRedButton;
+ (id)genWideBigGreenButton;
+ (id)bigButtonFont;
+ (void)setBigButtonStyle:(id)arg1;
+ (id)genBigButtonWithColor:(id)arg1 fontColor:(id)arg2;
+ (id)genBigGrayButton;
+ (id)genBigRedButton;
+ (id)genBigGreenButton;
+ (void)setNewSmallButtonStyle:(id)arg1;
+ (id)genSmallWeakInverseButton;
+ (id)genSmallWeakButton;
+ (id)genSmallStrongButton;
+ (id)genBigWeakButtonWithMaxWidth:(double)arg1;
+ (id)genBigWeakButton;
+ (id)genBigStrongButtonWithMaxWidth:(double)arg1;
+ (id)genBigStrongButton;
+ (id)genHalfScreenWeakButton;
+ (id)genHalfScreenRedButton;
+ (id)genHalfScreenStrongButton;
+ (id)gen;
+ (void)groupStandardButtons:(id)arg1;
+ (id)genButtonWithColor:(id)arg1 fontColor:(id)arg2 fontSize:(double)arg3 fixHeight:(double)arg4 withBorder:(_Bool)arg5 radius:(double)arg6;
+ (id)genGrayButton;
+ (id)genRedButton;
+ (id)genGreenButton;
+ (id)genButtonWithColor:(id)arg1 fontColor:(id)arg2;
+ (id)internalGenButtonWithColor:(id)arg1 fontColor:(id)arg2 fontSize:(double)arg3 fixHeight:(double)arg4 withBorder:(_Bool)arg5 radius:(double)arg6;

@end

