//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderCreateSettingCellHelper : NSObject
{
}

+ (id)createTwoLineCell:(id)arg1 secondLine:(id)arg2 accessibility:(id)arg3 width:(double)arg4 switchIsOn:(_Bool)arg5 switchChangeTarget:(id)arg6 action:(SEL)arg7 linkDelegate:(id)arg8;
+ (id)createTwoLineCell:(id)arg1 secondLine:(id)arg2 accessibility:(id)arg3 width:(double)arg4 switchIsOn:(_Bool)arg5 switchChangeTarget:(id)arg6 action:(SEL)arg7;
+ (void)exposeShowInWXProfileSwitchCellJumpProfileItem;
+ (id)formatJumpWXProfileWording:(id)arg1 href:(id)arg2;
+ (id)createLeftViewWithWidth:(double)arg1 titleText:(id)arg2 detailText:(id)arg3 isDisable:(_Bool)arg4 delegate:(id)arg5;
+ (id)createFinderToBrandCellWithWidth:(double)arg1 sel:(SEL)arg2 target:(id)arg3 title:(id)arg4 desc:(id)arg5 on:(_Bool)arg6 disable:(_Bool)arg7;
+ (id)createShowInWXProfileLeftView:(double)arg1 navVC:(id)arg2;
+ (id)createAccountCellCustomViewTitle:(id)arg1 detailTitle:(id)arg2 headURL:(id)arg3 headImageSize:(id)arg4 width:(double)arg5 isFinder:(_Bool)arg6;
+ (id)createFinderSettingAccountSelectedCell:(double)arg1 target:(id)arg2 selector:(SEL)arg3 title:(id)arg4 detailTitle:(id)arg5 headURL:(id)arg6 headImageSize:(id)arg7 isFinder:(_Bool)arg8 selected:(_Bool)arg9;
+ (id)createFinderSettingAccountSelectedCell:(double)arg1 target:(id)arg2 selector:(SEL)arg3 title:(id)arg4 detailTitle:(id)arg5 headURL:(id)arg6 isFinder:(_Bool)arg7 selected:(_Bool)arg8;
+ (id)createShowInWXProfileSectionFooterWithIsSelected:(_Bool)arg1 width:(double)arg2 navVC:(id)arg3;
+ (id)createShowInWXProfileSectionWithWidth:(double)arg1 navVC:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
+ (id)createShowInWXProfileSwitchCellIfNeedDisplay:(double)arg1 navVC:(id)arg2;

@end

